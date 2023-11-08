// SPDX-FileCopyrightText: 2020 - 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef MOUNTSECRETDISKASKPASSWORDDIALOG_H
#define MOUNTSECRETDISKASKPASSWORDDIALOG_H

#include <DDialog>

class QLineEdit;
class QLabel;

DWIDGET_BEGIN_NAMESPACE
class DPasswordEdit;
DWIDGET_END_NAMESPACE

namespace dfmplugin_diskenc {
class AcquirePinDialog : public DTK_WIDGET_NAMESPACE::DDialog
{
    Q_OBJECT
public:
    explicit AcquirePinDialog(const QString &tipMessage, QWidget *parent = nullptr);
    ~AcquirePinDialog();

    QString getUerInputedPassword() const;

public Q_SLOTS:
    void handleButtonClicked(int index, QString text);

protected:
    void showEvent(QShowEvent *event);
    void initUI();
    void initConnect();

private:
    QString descriptionMessage = "";
    QLabel *titleLabel = nullptr;
    QLabel *descriptionLabel = nullptr;
    DTK_WIDGET_NAMESPACE::DPasswordEdit *passwordLineEdit = nullptr;
    QString password = "";
};
}

#endif   // MOUNTSECRETDISKASKPASSWORDDIALOG_H
