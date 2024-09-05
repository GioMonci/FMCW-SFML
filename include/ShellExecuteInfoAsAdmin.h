#pragma once
#include "common.h"

class ShellExecuteInfoAsAdmin {

    public:
    void RunCommandWithAdminPrivileges(const char* command, const char* parameters);
    void StartingExecutionProcess(int getLevel);
    void AskForRestart();
    int PromptForRestart();
    void RestartComputer();
};




