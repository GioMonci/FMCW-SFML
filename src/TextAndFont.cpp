#include "../include/TextAndFont.h"

void TextAndFont::initTextAndFont()
{
    if(!font.loadFromFile("../fonts/arial.ttf"))
    {
        std::cout << "Error loading arial.ttf" << std::endl;
    }

    mainMessage.setFont(font);
    mainMessage.setCharacterSize(16);
    mainMessage.setFillColor(sf::Color::Black);
    mainMessage.setStyle(sf::Text::Bold);
    mainMessage.setString("  ** Please Read! **\n"
                "  Welcome to Fix My Corrupt Windows (FMCW)!\n\n"
                "  This program is designed to help repair corrupt Windows system files on your computer.\n"
                "  It works by running a series of commands that scan your system files, identifies corrupt ones,\n"
                "  and replaces them with healthy files. Please note that for the fixes to take effect, you will \n"
                "  need to restart your PC after running the commands.\n"
                "  Commands are categorized based on your PC's status level:\n\n"
                "  1. **NotBad**: Your PC is running fine, but you want to perform a basic check.\n"
                "    - This will run the System File Checker (SFC) to scan and repair system files.\n"
                "  2. **Bad**: Your PC is experiencing issues such as slow performance or malfunctioning Windows functions.\n"
                "    - This will run SFC as well as additional Deployment Image Servicing and Management (DISM) commands\n"
                "      to further diagnose and repair system files.\n"
                "  3. **Cooked**: Your PC is frequently crashing, BSOD, or not functioning properly at all.\n"
                "    - This will run SFC, DISM, and CHKDSK commands to address severe issues.\n\n"
                "  To reiterate, after running the program, it is essential to restart your PC for the changes to take effect.\n"
                "  If running the commands for a 'Cooked' status level does not resolve the issues,\n"
                "  it may indicate that the system files or tools themselves are too corrupted,\n"
                "  and a clean installation of Windows might be necessary.\n"
                "  Thank you for using FMCW! We hope this helps improve your system's performance.\n"
                "  Press Yes if you agree to continue or No to Exit the application");


    askChoiceMessage.setFont(font);
    askChoiceMessage.setCharacterSize(16);
    askChoiceMessage.setFillColor(sf::Color::Black);
    askChoiceMessage.setStyle(sf::Text::Bold);
    askChoiceMessage.setString("  Select which statue your pc is in: \n\n"
                               "  **NotBad**: Your PC is running fine, but you want to perform a basic check.\n\n"
                               "  **Bad**: Your PC is experiencing issues such as slow performance or malfunctioning Windows functions.\n\n"
                               "  **Cooked**: Your PC is frequently crashing, BSOD, or not functioning properly at all.");

    warningMessage.setFont(font);
    warningMessage.setCharacterSize(16);
    warningMessage.setFillColor(sf::Color::Black);
    warningMessage.setStyle(sf::Text::Bold);
    warningMessage.setString("Warning: This CHKDSK command is extensive and may take a significant amount of time to complete.\n"
                "I recommend checking that the previous commands didn't fix your PC before resorting to 'Cooked'.\n"
                "Nevertheless, if the previous commands didn't fix anything and you still have problems, then proceed.\n"
                "If you proceed with this level, be aware that the process can take up to several hours.\n"
                "The initial scan may be quick, but once you restart your PC, the full scan and repair will take place during boot.\n"
                "During boot, `chkdsk` will run through multiple phases, each of which may take a considerable amount of time.\n"
                "Please do not turn off your computer during this process.\n"
                "If your PC restarts unexpectedly, it typically will not further damage your disk beyond the existing issues,\n"
                "but there is still a small risk of additional corruption.\n"
                "Only consider restarting or interrupting the process if the boot-time scan and repair process takes longer than 10-20 hours.\n"
                "If you wish to continue, enter 'y' to proceed or 'n' to cancel this process:");

    yesMess.setFont(font);
    yesMess.setCharacterSize(16);
    yesMess.setFillColor(sf::Color::Black);
    yesMess.setStyle(sf::Text::Bold);
    yesMess.setString("Yes");
    yesMess.setPosition(sf::Vector2f(335.f, 485.f));

    noMess.setFont(font);
    noMess.setCharacterSize(16);
    noMess.setFillColor(sf::Color::Black);
    noMess.setStyle(sf::Text::Bold);
    noMess.setString("No");
    noMess.setPosition(sf::Vector2f(535.f, 485.f));

    notBadMess.setFont(font);
    notBadMess.setCharacterSize(16);
    notBadMess.setFillColor(sf::Color::Black);
    notBadMess.setStyle(sf::Text::Bold);
    notBadMess.setString("Not Bad");
    notBadMess.setPosition(sf::Vector2f(265.f, 485.f));

    badMess.setFont(font);
    badMess.setCharacterSize(16);
    badMess.setFillColor(sf::Color::Black);
    badMess.setStyle(sf::Text::Bold);
    badMess.setString("Bad");
    badMess.setPosition(sf::Vector2f(425.f, 485.f));

    cookedMess.setFont(font);
    cookedMess.setCharacterSize(16);
    cookedMess.setFillColor(sf::Color::Black);
    cookedMess.setStyle(sf::Text::Bold);
    cookedMess.setString("Cooked");
    cookedMess.setPosition(sf::Vector2f(565.f, 485.f));

}
