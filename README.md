# CPP_Translator

基于C++11编写的翻译器类
使用 `translate` 下的翻译文件对相同字符串进行不同语言的转换

## Usage
修改 `TR` 对象的初始化位置



```CPP
    // 创建 Translator 对象，并指定翻译文件的路径
    Translator TR("/home/xxx/WorkSpace/MyCode/clearn/translate/");

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
```

Output:
```bash
English Translation:
Translator: Translator
Welcome Message: Welcome to our application!
About: About
Settings: Settings
Language: Language
Theme: Theme
Dark: Dark
Light: Light
Save: Save
Cancel: Cancel

Chinese Translation:
Translator: 翻译类
Welcome Message: 欢迎使用我们的应用程序！
About: 关于
Settings: 设置
Language: 语言
Theme: 主题
Dark: 暗色
Light: 亮色
Save: 保存
Cancel: 取消

Japanese Translation:
Translator: 翻訳者
Welcome Message: 私たちのアプリケーションへようこそ！
About: 約
Settings: 設定
Language: 言語
Theme: テーマ
Dark: ダーク
Light: ライト
Save: 保存
Cancel: キャンセル
```
