/**
 * Copyright (c) 2016 Ruben Van Boxem
 *
 * This code is dual licensed under the MIT and LGPLv3 licenses.
 * The full license texts can be found in MIT.txt and LGPLv3.txt.
 *
 * This file is part of Qore.
 *
 **/

/*
 * Qore Core widget containing navigation and main widget.
 */

#ifndef QORE_APP_QORE_WIDGET_H
#define QORE_APP_QORE_WIDGET_H

#include <QtWebSockets/QWebSocket>

#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStyle>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QMainWindow>

#include "client.h++"

namespace qore
{
  namespace app
  {
    class connection;
    class remote_control;

    class qore_widget : public QMainWindow
    {
        Q_OBJECT
      public:
        explicit qore_widget(QWidget* parent = 0);

      public slots:

      private:
        api::client client;

        QTabWidget* view;

        app::connection* connection;
        app::remote_control* remote_control;
    };
  }
}

#endif // QORE_APP_QORE_WIDGET_H
