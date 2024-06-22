    {"editor.mouseWheelZoom": true,
    "code-runner.clearPreviousOutput": false,
    "code-runner.saveFileBeforeRun": true,
    "[python]": {
        "editor.formatOnType": true
    },
    "code-runner.executorMap": {
        "javascript": "node",
        "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
        "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "php": "php",
        "python": "python -u"
    },
    "code-runner.runInTerminal": true,
    "tabnine.experimentalAutoImports": true,
    "workbench.colorCustomizations": {},
    "django.snippets.exclude": [
        "cms",
        "wagtail"
    ],
    "liveServer.settings.donotShowInfoMsg": true,
    "window.zoomLevel": 1,
    "workbench.colorTheme": "Default High Contrast",
    "C_Cpp.files.exclude": {

        "**/.vscode": true,
        "**/.vs": true
    }
    }