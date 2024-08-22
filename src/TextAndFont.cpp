#include "../include/TextAndFont.h"

void TextAndFont::initTextAndFont()
{
    if(!font.loadFromFile("../fonts/arial.ttf"))
    {
        std::cout << "Error loading arial.ttf" << std::endl;
    }

    text.setFont(font);
    text.setCharacterSize(16);
    text.setFillColor(sf::Color::Black);
    text.setStyle(sf::Text::Bold);
    text.setString("Window 1 Test");

    text2.setFont(font);
    text2.setCharacterSize(16);
    text2.setFillColor(sf::Color::Black);
    text2.setStyle(sf::Text::Bold);
    text2.setString("Window 2 Test");

    text3.setFont(font);
    text3.setCharacterSize(16);
    text3.setFillColor(sf::Color::Black);
    text3.setStyle(sf::Text::Bold);
    text3.setString(" ** Please Read! **\n"
                " Welcome to Fix My Corrupt Windows (FMCW)!\n\n"
                " This program is designed to help repair corrupt Windows system files on your computer.\n"
                " It works by running a series of commands that scan your system files, identifies corrupt ones,\n"
                " and replaces them with healthy files. Please note that for the fixes to take effect, you will \n"
                " need to restart your PC after running the commands.\n"
                " Commands are categorized based on your PC's status level:\n\n"
                " 1. **NotBad**: Your PC is running fine, but you want to perform a basic check.\n"
                "   - This will run the System File Checker (SFC) to scan and repair system files.\n"
                " 2. **Bad**: Your PC is experiencing issues such as slow performance or malfunctioning Windows functions.\n"
                "   - This will run SFC as well as additional Deployment Image Servicing and Management (DISM) commands\n"
                "     to further diagnose and repair system files.\n"
                " 3. **Cooked**: Your PC is frequently crashing, BSOD, or not functioning properly at all.\n"
                "   - This will run SFC, DISM, and CHKDSK commands to address severe issues.\n\n"
                " To reiterate, after running the program, it is essential to restart your PC for the changes to take effect.\n"
                " If running the commands for a 'Cooked' status level does not resolve the issues,\n"
                " it may indicate that the system files or tools themselves are too corrupted,\n"
                " and a clean installation of Windows might be necessary.\n"
                " Thank you for using FMCW! We hope this helps improve your system's performance.\n");

}
