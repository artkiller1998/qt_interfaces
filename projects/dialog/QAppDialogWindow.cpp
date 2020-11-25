#include "add_dialog_main.h"


QWindow::QWindow() : QDialog(nullptr), line_name(nullptr), line_label(nullptr) {
	
	this->resize(600, 400);
	this->setMaximumHeight(400);
	this->setMinimumHeight(400);

	auto * const layout_buttons = new QHBoxLayout();
	auto * const layout_data = new QFormLayout();
	auto * const layout_all = new QVBoxLayout(this);
	
	layout_all->addLayout(layout_data);
		layout_data->addRow(line_label = new QLabel("Name 1:", this), line_name = new QLineEdit(this));
		layout_data->addRow(new QLabel("Name 2:", this) , new QLineEdit(this));
		layout_data->addRow(new QLabel("Name 3:", this) , new QLineEdit(this));
		layout_data->addRow(new QLabel("Name 4:", this) , new QLineEdit(this));
		layout_data->addRow(new QLabel("Name 5:", this) , new QLineEdit(this));

	layout_all->addStretch(1);
	
	layout_all->addLayout(layout_buttons);
		auto *const button_ok = new QPushButton("OK", this);
		auto *const button_cancel = new QPushButton("CANCEL", this);
		layout_buttons->addStretch(1);
		layout_buttons->addWidget(button_ok);
		layout_buttons->addWidget(button_cancel);

	Qt::WindowFlags flags = windowFlags();	// Убрать "?"
	Qt::WindowFlags helpFlag = Qt::WindowContextHelpButtonHint;
	flags = flags & (~helpFlag);
	setWindowFlags(flags);
	
	setWindowTitle("Add new object");
	setWindowIcon(QIcon("Add.png"));


	connect(button_ok, SIGNAL( released() ), this, SLOT(operate()));
	connect(button_cancel, SIGNAL( released() ), this, SLOT( reject() ));
}

void QWindow::operate() {
	line_name->setText("");
	line_label->setText("");
	accept();
}
