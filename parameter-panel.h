/*
 * parameter_panel.h
 *
 * Author: Zex.Li <zex@hytera.com>
 */
#ifndef __PARAMETER_PANEL_H
#define __PARAMETER_PANEL_H

#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>
#include <QApplication>

QT_BEGIN_NAMESPACE

class parameter_panel// : public QObject//_general
{

        QLabel *pi_label;
        QLabel *sn_label;
        QLabel *pd_label;
        QLabel *ti_label;

public:
        QLineEdit *pi_ledit;
        QLineEdit *sn_ledit;
        QLineEdit *pd_ledit;
        QLineEdit *ti_ledit;

        QList<QLabel*> param_names;
        QList<QLineEdit*> param_values;
        
        int x_cur, y_cur, y_pri;
        int w_cur, h_cur;

public:
        void show_panel_fanu();
        void show_panel_abu();
        void show_panel_bscu();
        void show_panel_bcb();
        void show_panel_dibr5();

        QStringList collect_params_fanu();
        QStringList collect_params_abu();
        QStringList collect_params_bscu();
        QStringList collect_params_bcb();
        QStringList collect_params_dibr5();

protected:
        void setup_gui(QWidget *parent);
        void init_pri_param_(QWidget *parent);
        void init_ext_param_(QWidget *parent);
        void update_panel_(int start, int show_end, QStringList lb_names);
        QStringList collect_pri_params_(QString sn_tail);
        QStringList collect_ext_params_(int start, int end, QString sn_tail);

//public slots:
//      void update_panel(int comn);

public:
        parameter_panel(QWidget *parent);

}; /* class parameter_panel_general */

QT_END_NAMESPACE

#endif /* __PARAMETER_PANEL_H */
