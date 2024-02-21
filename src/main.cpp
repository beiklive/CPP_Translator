#include <iostream>
#include "Translator.hpp"

int main() {
    // 创建 Translator 对象，并指定翻译文件的路径
    Translator TR("/home/byeaxj/WorkSpace/MyCode/clearn/translate/");

    // 设置翻译语言类型为英语
    TR.Tr_setLanguageType(LANGUAGE_TYPE::EN);
    
    // 输出翻译结果
    std::cout << "English Translation:" << std::endl;
    std::cout << "Translator: " << TR.TR("Translator") << std::endl;
    std::cout << "Welcome Message: " << TR.TR("WelcomeMessage") << std::endl;
    std::cout << "About: " << TR.TR("About") << std::endl;
    std::cout << "Settings: " << TR.TR("Settings") << std::endl;
    std::cout << "Language: " << TR.TR("Language") << std::endl;
    std::cout << "Theme: " << TR.TR("Theme") << std::endl;
    std::cout << "Dark: " << TR.TR("Dark") << std::endl;
    std::cout << "Light: " << TR.TR("Light") << std::endl;
    std::cout << "Save: " << TR.TR("Save") << std::endl;
    std::cout << "Cancel: " << TR.TR("Cancel") << std::endl;

    // 设置翻译语言类型为中文
    TR.Tr_setLanguageType(LANGUAGE_TYPE::CH);

    // 输出翻译结果
    std::cout << "\nChinese Translation:" << std::endl;
    std::cout << "Translator: " << TR.TR("Translator") << std::endl;
    std::cout << "Welcome Message: " << TR.TR("WelcomeMessage") << std::endl;
    std::cout << "About: " << TR.TR("About") << std::endl;
    std::cout << "Settings: " << TR.TR("Settings") << std::endl;
    std::cout << "Language: " << TR.TR("Language") << std::endl;
    std::cout << "Theme: " << TR.TR("Theme") << std::endl;
    std::cout << "Dark: " << TR.TR("Dark") << std::endl;
    std::cout << "Light: " << TR.TR("Light") << std::endl;
    std::cout << "Save: " << TR.TR("Save") << std::endl;
    std::cout << "Cancel: " << TR.TR("Cancel") << std::endl;

    // 设置翻译语言类型为日语
    TR.Tr_setLanguageType(LANGUAGE_TYPE::JP);

    // 输出翻译结果
    std::cout << "\nJapanese Translation:" << std::endl;
    std::cout << "Translator: " << TR.TR("Translator") << std::endl;
    std::cout << "Welcome Message: " << TR.TR("WelcomeMessage") << std::endl;
    std::cout << "About: " << TR.TR("About") << std::endl;
    std::cout << "Settings: " << TR.TR("Settings") << std::endl;
    std::cout << "Language: " << TR.TR("Language") << std::endl;
    std::cout << "Theme: " << TR.TR("Theme") << std::endl;
    std::cout << "Dark: " << TR.TR("Dark") << std::endl;
    std::cout << "Light: " << TR.TR("Light") << std::endl;
    std::cout << "Save: " << TR.TR("Save") << std::endl;
    std::cout << "Cancel: " << TR.TR("Cancel") << std::endl;

    return 0;
}