#include <QAppMainWindow.h>
#include <QApplication>

int main(int argc_p, char ** argv_p) {
   QApplication app_l( argc_p, argv_p );
   QAppMainWindow * const mainWnd_l = new QAppMainWindow();
   mainWnd_l->show();
   return app_l.exec();
}