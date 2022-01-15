#include "Definitions.h"
#include "RuntimeManager.h"

int main()
{
    RuntimeManager* runtimeManager = new RuntimeManager();

    runtimeManager->run();
    // Return success
    return 0;
}