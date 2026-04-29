#ifndef CDEVACTION_H_
#define CDEVACTION_H_

#include "public/cdtchandler_iface_v1.h"

class CDEvAction {
public:
    // Atributo necesario para manejar el TC de la acción
    CDTCHandler mTCHandler;

    // TODO: Añadir esta declaración para que el .cpp compile [cite: 51, 95]
    void ExtractEvActionFromQueue();

    // Método de acceso para el CCTCManager [cite: 94]
    CDTCHandler GetActionTCHandler() { return mTCHandler; }
};

#endif
