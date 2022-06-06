/*
 * This file was generated by qdbusxml2cpp-fix version 0.8
 * Command line was: qdbusxml2cpp-fix -c Window -p generated/window ../xml/Window.xml
 *
 * qdbusxml2cpp-fix is Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

#include <DBusExtendedAbstractInterface>
#include <QtDBus/QtDBus>

#include "types/dockrect.h"

/*
 * Proxy class for interface com.deepin.daemon.KWayland.PlasmaWindow
 */
class __WindowPrivate;
class PlasmaWindow : public DBusExtendedAbstractInterface
{
    Q_OBJECT

public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.daemon.KWayland.PlasmaWindow"; }

public:
    explicit PlasmaWindow(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~PlasmaWindow();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> AppId()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("AppId"), argumentList);
    }



    inline QDBusPendingReply<DockRect> Geometry()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Geometry"), argumentList);
    }



    inline QDBusPendingReply<QString> Icon()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Icon"), argumentList);
    }



    inline QDBusPendingReply<uint> InternalId()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("InternalId"), argumentList);
    }



    inline QDBusPendingReply<bool> IsActive()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsActive"), argumentList);
    }



    inline QDBusPendingReply<bool> IsCloseable()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsCloseable"), argumentList);
    }



    inline QDBusPendingReply<bool> IsDemandingAttention()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsDemandingAttention"), argumentList);
    }



    inline QDBusPendingReply<bool> IsFullscreen()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsFullscreen"), argumentList);
    }



    inline QDBusPendingReply<bool> IsFullscreenable()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsFullscreenable"), argumentList);
    }



    inline QDBusPendingReply<bool> IsKeepAbove()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsKeepAbove"), argumentList);
    }



    inline QDBusPendingReply<bool> IsMaximizeable()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsMaximizeable"), argumentList);
    }



    inline QDBusPendingReply<bool> IsMaximized()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsMaximized"), argumentList);
    }



    inline QDBusPendingReply<bool> IsMinimizeable()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsMinimizeable"), argumentList);
    }



    inline QDBusPendingReply<bool> IsMinimized()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsMinimized"), argumentList);
    }



    inline QDBusPendingReply<bool> IsMovable()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsMovable"), argumentList);
    }



    inline QDBusPendingReply<bool> IsOnAllDesktops()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsOnAllDesktops"), argumentList);
    }



    inline QDBusPendingReply<bool> IsResizable()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsResizable"), argumentList);
    }



    inline QDBusPendingReply<bool> IsShadeable()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsShadeable"), argumentList);
    }



    inline QDBusPendingReply<bool> IsShaded()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsShaded"), argumentList);
    }



    inline QDBusPendingReply<bool> IsValid()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsValid"), argumentList);
    }



    inline QDBusPendingReply<bool> IsVirtualDesktopChangeable()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("IsVirtualDesktopChangeable"), argumentList);
    }



    inline QDBusPendingReply<uint> Pid()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Pid"), argumentList);
    }



    inline QDBusPendingReply<> RequestActivate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestActivate"), argumentList);
    }

    inline void RequestActivateQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestActivate"), argumentList);
    }


    inline QDBusPendingReply<> RequestClose()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestClose"), argumentList);
    }

    inline void RequestCloseQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestClose"), argumentList);
    }


    inline QDBusPendingReply<> RequestEnterNewVirtualDesktop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestEnterNewVirtualDesktop"), argumentList);
    }

    inline void RequestEnterNewVirtualDesktopQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestEnterNewVirtualDesktop"), argumentList);
    }


    inline QDBusPendingReply<> RequestEnterVirtualDesktop(const QString &argin0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(argin0);
        return asyncCallWithArgumentList(QStringLiteral("RequestEnterVirtualDesktop"), argumentList);
    }

    inline void RequestEnterVirtualDesktopQueued(const QString &argin0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(argin0);

        CallQueued(QStringLiteral("RequestEnterVirtualDesktop"), argumentList);
    }


    inline QDBusPendingReply<> RequestLeaveVirtualDesktop(const QString &argin0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(argin0);
        return asyncCallWithArgumentList(QStringLiteral("RequestLeaveVirtualDesktop"), argumentList);
    }

    inline void RequestLeaveVirtualDesktopQueued(const QString &argin0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(argin0);

        CallQueued(QStringLiteral("RequestLeaveVirtualDesktop"), argumentList);
    }


    inline QDBusPendingReply<> RequestMove()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestMove"), argumentList);
    }

    inline void RequestMoveQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestMove"), argumentList);
    }


    inline QDBusPendingReply<> RequestResize()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestResize"), argumentList);
    }

    inline void RequestResizeQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestResize"), argumentList);
    }


    inline QDBusPendingReply<> RequestToggleKeepAbove()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestToggleKeepAbove"), argumentList);
    }

    inline void RequestToggleKeepAboveQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestToggleKeepAbove"), argumentList);
    }


    inline QDBusPendingReply<> RequestToggleKeepBelow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestToggleKeepBelow"), argumentList);
    }

    inline void RequestToggleKeepBelowQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestToggleKeepBelow"), argumentList);
    }


    inline QDBusPendingReply<> RequestToggleMaximized()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestToggleMaximized"), argumentList);
    }

    inline void RequestToggleMaximizedQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestToggleMaximized"), argumentList);
    }


    inline QDBusPendingReply<> RequestToggleMinimized()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestToggleMinimized"), argumentList);
    }

    inline void RequestToggleMinimizedQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestToggleMinimized"), argumentList);
    }


    inline QDBusPendingReply<> RequestToggleShaded()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RequestToggleShaded"), argumentList);
    }

    inline void RequestToggleShadedQueued()
    {
        QList<QVariant> argumentList;

        CallQueued(QStringLiteral("RequestToggleShaded"), argumentList);
    }


    inline QDBusPendingReply<> RequestVirtualDesktop(uint argin0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(argin0);
        return asyncCallWithArgumentList(QStringLiteral("RequestVirtualDesktop"), argumentList);
    }

    inline void RequestVirtualDesktopQueued(uint argin0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(argin0);

        CallQueued(QStringLiteral("RequestVirtualDesktop"), argumentList);
    }


    inline QDBusPendingReply<bool> SkipSwitcher()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("SkipSwitcher"), argumentList);
    }



    inline QDBusPendingReply<bool> SkipTaskbar()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("SkipTaskbar"), argumentList);
    }



    inline QDBusPendingReply<QString> Title()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Title"), argumentList);
    }



    inline QDBusPendingReply<uint> VirtualDesktop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("VirtualDesktop"), argumentList);
    }



    inline QDBusPendingReply<uint> WindowId()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("WindowId"), argumentList);
    }




Q_SIGNALS: // SIGNALS
    void ActiveChanged();
    void AppIdChanged();
    void CloseableChanged();
    void DemandsAttentionChanged();
    void FullscreenChanged();
    void FullscreenableChanged();
    void GeometryChanged();
    void IconChanged();
    void KeepAboveChanged();
    void KeepBelowChanged();
    void MaximizeableChanged();
    void MaximizedChanged();
    void MinimizeableChanged();
    void MinimizedChanged();
    void MovableChanged();
    void OnAllDesktopsChanged();
    void ParentWindowChanged();
    void ResizableChanged();
    void ShadeableChanged();
    void ShadedChanged();
    void SkipSwitcherChanged();
    void SkipTaskbarChanged();
    void TitleChanged();
    void Unmapped();
    void VirtualDesktopChangeableChanged();
    void VirtualDesktopChanged();
    void WindowIdChanged();
    // begin property changed signals

public Q_SLOTS:
    void CallQueued(const QString &callName, const QList<QVariant> &args);

private Q_SLOTS:
    void onPendingCallFinished(QDBusPendingCallWatcher *w);

private:
    __WindowPrivate *d_ptr;
};

namespace com {
  namespace deepin {
    namespace daemon {
      namespace kwayland {
        typedef ::PlasmaWindow PlasmaWindow;
      }
    }
  }
}
#endif