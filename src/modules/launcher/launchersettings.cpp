/*
 * Copyright (C) 2021 ~ 2022 Deepin Technology Co., Ltd.
 *
 * Author:     weizhixiang <weizhixiang@uniontech.com>
 *
 * Maintainer: weizhixiang <weizhixiang@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "launchersettings.h"
#include "settings.h"

#include <DConfig>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>

DCORE_USE_NAMESPACE

static DConfig *dconfig = Settings::ConfigPtr(configLauncher);

LauncherSettings::LauncherSettings(QObject *parent)
 : QObject(parent)
{
    // 绑定属性
    connect(dconfig, &DConfig::valueChanged, this, [&] (const QString &key) {
        if (key == keyDisplayMode) {
            Q_EMIT displayModeChanged(dconfig->value(key).toString());
        } else if (key == keyFullscreen) {
            Q_EMIT fullscreenChanged(dconfig->value(key).toBool());
        } else if (key == keyAppsHidden) {
            Q_EMIT hiddenAppsChanged();
        }
    });
}

/**
 * @brief LauncherSettings::getDisplayMode 获取配置显示模式
 * @return
 */
QString LauncherSettings::getDisplayMode()
{
    return dconfig ? dconfig->value(keyDisplayMode).toString() : "";
}

/**
 * @brief LauncherSettings::setDisplayMode 设置配置显示模式
 * @param value
 */
void LauncherSettings::setDisplayMode(QString value)
{
    if (dconfig) {
        dconfig->setValue(keyDisplayMode, value);
    }
}

/**
 * @brief LauncherSettings::getFullscreenMode 获取配置全屏模式
 * @return
 */
int LauncherSettings::getFullscreenMode()
{
    return dconfig ? dconfig->value(keyFullscreen).toBool() : false;
}

/**
 * @brief LauncherSettings::setFullscreenMode 设置配置全屏模式
 * @param value 全屏模式
 */
void LauncherSettings::setFullscreenMode(int value)
{
    if (dconfig) {
        dconfig->setValue(keyFullscreen, value);
    }
}

/**
 * @brief LauncherSettings::getDisableScalingApps 获取配置禁用缩放应用
 * @return
 */
QVector<QString> LauncherSettings::getDisableScalingApps()
{
    QVector<QString> ret;
    if (dconfig) {
        QList<QVariant> apps = dconfig->value(keyAppsDisableScaling).toList();
        for (auto app : apps) {
            ret.push_back(app.toString());
        }
    }
    return ret;
}

/**
 * @brief LauncherSettings::setDisableScalingApps 设置配置禁用缩放应用
 * @param value 应用禁用缩放应用
 */
void LauncherSettings::setDisableScalingApps(const QVector<QString> &value)
{
    if (dconfig) {
        QList<QVariant> apps;
        for (const auto &app : value)
            apps.push_back(app);

        dconfig->setValue(keyAppsDisableScaling, apps);
    }
}

/**
 * @brief LauncherSettings::getUseProxyApps 获取配置代理应用
 * @return
 */
QVector<QString> LauncherSettings::getUseProxyApps()
{
    QVector<QString> ret;
    if (dconfig) {
        QList<QVariant> apps = dconfig->value(keyAppsUseProxy).toList();
        for (auto app : apps) {
            ret.push_back(app.toString());
        }
    }
    return ret;
}

/**
 * @brief LauncherSettings::setUseProxy 设置配置代理应用
 * @param value 代理应用
 */
void LauncherSettings::setUseProxy(const QVector<QString> &value)
{
    if (dconfig) {
        QList<QVariant> apps;
        for (const auto &app : value)
            apps.push_back(app);

        dconfig->setValue(keyAppsUseProxy, apps);
    }
}

/**
 * @brief LauncherSettings::getHiddenApps 获取配置隐藏应用
 * @return
 */
QVector<QString> LauncherSettings::getHiddenApps()
{
    QVector<QString> ret;
    if (dconfig) {
        QList<QVariant> hiddenApps = dconfig->value(keyAppsHidden).toList();
        for (auto app : hiddenApps) {
            ret.push_back(app.toString());
        }
    }
    return ret;
}