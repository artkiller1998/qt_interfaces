#include "add_dialog_main.h"
#include "ui_add_dialog_main.h"


int main(int argc, char ** argv)
{
	QApplication app(argc, argv);

	QMainWindow * const window_main = new QMainWindow();
	auto * const label_main = new QLabel(window_main);

	window_main->resize(300,300); // чтоб не кидало ошибки про слишком мал разм

	auto * const window_dialog = new add_dialog_main(window_main);

	window_main->show();

	if (window_dialog->exec() == QDialog::Accepted)
	{
		label_main->setText("Ok");
	}
	else
	{
		label_main->setText("Canceled");
	}
		
	return app.exec();

}