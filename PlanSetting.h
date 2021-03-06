#ifndef PLANSETTING_H
#define PLANSETTING_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QFileDialog>
#include "FiberDisplay.h"
#include <sstream>
#include <vtkImplicitPlaneWidget.h>

class PlanSetting: public QWidget
{
	Q_OBJECT
	
	public:
		PlanSetting(QWidget* Parent, FiberDisplay* Display);
		
	public slots:
		void UpdatePlan();
		void GetParam();
		void SavePlan();
		void LoadPlan();
		
	protected:
		FiberDisplay* m_Display;
		QPushButton* m_PB_Close;
		QPushButton* m_PB_UpdatePlan;
		QPushButton* m_PB_GetParam;
		QPushButton* m_PB_SavePlan;
		QPushButton* m_PB_LoadPlan;
		QLabel* m_L_X;
		QLabel* m_L_Y;
		QLabel* m_L_Z;
		QLabel* m_L_Origin;
		QLabel* m_L_Normal;
		QLineEdit* m_LE_XOrigin;
		QLineEdit* m_LE_YOrigin;
		QLineEdit* m_LE_ZOrigin;
		QLineEdit* m_LE_XNormal;
		QLineEdit* m_LE_YNormal;
		QLineEdit* m_LE_ZNormal;
};

#endif
