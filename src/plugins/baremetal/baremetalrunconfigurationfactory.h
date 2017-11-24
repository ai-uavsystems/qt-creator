/****************************************************************************
**
** Copyright (C) 2016 Tim Sander <tim@krieglstein.org>
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#pragma once

#include <projectexplorer/runconfiguration.h>

namespace BareMetal {
namespace Internal {

class BareMetalRunConfigurationFactory : public ProjectExplorer::IRunConfigurationFactory
{
    Q_OBJECT

public:
    explicit BareMetalRunConfigurationFactory(QObject *parent = 0);

    QList<QString> availableBuildTargets(ProjectExplorer::Target *parent, CreationMode mode) const override;
    QString displayNameForBuildTarget(const QString &buildTarget) const override;
};

class BareMetalCustomRunConfigurationFactory : public ProjectExplorer::IRunConfigurationFactory
{
    Q_OBJECT

public:
    explicit BareMetalCustomRunConfigurationFactory(QObject *parent = 0);

    QList<QString> availableBuildTargets(ProjectExplorer::Target *parent, CreationMode mode) const override;
    QString displayNameForBuildTarget(const QString &buildTarget) const override;
};

} // namespace Internal
} // namespace RemoteLinux
