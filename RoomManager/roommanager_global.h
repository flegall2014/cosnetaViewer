#ifndef ROOMMANAGER_GLOBAL_H
#define ROOMMANAGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ROOMMANAGER_LIBRARY)
#  define ROOMMANAGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ROOMMANAGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ROOMMANAGER_GLOBAL_H
