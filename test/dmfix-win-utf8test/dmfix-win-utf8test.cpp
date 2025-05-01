
#include "dmfix-win-utf8.h"

int main( int argc, char* argv[] ) {

    Idmfix-win-utf8* module = dmfix-win-utf8GetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
