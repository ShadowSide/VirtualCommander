TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    VE/VirtualEngine.cpp \
    VE/journal.cpp \
    VE/Exceptions/notimplemented.cpp \
    VE/Operations/operation.cpp \
    VE/Operations/operationfactory.cpp \
    VE/Operations/operations.cpp \
    VE/queueexecuter.cpp \
    VE/iqueueexecuter.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    VE/VirtualEngine.h \
    VE/journal.h \
    VE/Exceptions/notimplemented.h \
    VE/Operations/operation.h \
    VE/Operations/operationfactory.h \
    VE/Operations/operations.h \
    VE/queueexecuter.h \
    VE/iqueueexecuter.h
