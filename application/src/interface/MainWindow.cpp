#include "interface/MainWindow.h"

namespace interface
{

	MainWindow::MainWindow(QWidget *parent): _rect(QApplication::desktop()->screenGeometry()),
		_newButtonButton(new QPushButton("Button", this)),
		_centralWidget(new QWidget()),
		_gridLayout(new QGridLayout())
	{
		_maxCountBtnWidth = 0;
		_maxCountBtnHeight = 0;
		_btnCount = 0;

//		_newButtonButton->setGeometry(0.2 * _rect.width(), 0.3 * _rect.height(), 0.15 * _rect.width(), 0.03 * _rect.height());
		connect(_newButtonButton, &QPushButton::clicked, this, &MainWindow::onNoteButtonClicked);
		_gridLayout->addWidget(_newButtonButton, 0, 0, 1, 1);
		for (int i = 1; i < 4; ++i)
		{
			_buttons.push_back(new QPushButton(("Button: " + std::to_string(_btnCount)).c_str(), this));
			_gridLayout->addWidget(_buttons[i-1], i, i, 1, 1);
			++_btnCount;
		}


		_centralWidget->setLayout(_gridLayout);


		setCentralWidget(_centralWidget);
	}

	MainWindow::~MainWindow()
	{
		for (QPushButton* btn: _buttons)
			delete btn;

		delete _newButtonButton;
		delete _gridLayout;
		delete _centralWidget;
	}

	void MainWindow::addNewButton()
	{
		_buttons.push_back(new QPushButton(("Button: " + std::to_string(1)).c_str(), this));
		_gridLayout->addWidget(_buttons[_btnCount], _btnCount, 0, 1, 1);
		++_btnCount;
	}

	void MainWindow::onNoteButtonClicked()
	{
		addNewButton();
//		_newButtonButton->show();
	}
	QSize MainWindow::getScreenSize()
	{
		return QApplication::desktop()->screenGeometry().size();
	}

}
