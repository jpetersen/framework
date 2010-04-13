/* * This file is part of dui-im-framework *
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 * All rights reserved.
 * Contact: Nokia Corporation (directui@nokia.com)
 *
 * If you have questions regarding the use of this file, please contact
 * Nokia at directui@nokia.com.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation
 * and appearing in the file LICENSE.LGPL included in the packaging
 * of this file.
 */

#ifndef DUIINPUTCONTEXTPLUGIN_H
#define DUIINPUTCONTEXTPLUGIN_H

#include <QInputContextPlugin>

class DuiInputContextPlugin: public QInputContextPlugin
{
    Q_OBJECT

public:
    DuiInputContextPlugin(QObject *parent = 0);
    virtual ~DuiInputContextPlugin();

    //! \reimp
    QInputContext *create(const QString &key);
    QString description(const QString &key);
    QString displayName(const QString &key);
    QStringList keys() const;
    QStringList languages(const QString &key);
    //! \reimp_end
};

#endif