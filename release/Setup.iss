; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "Abrites CARS"
#define MyAppVersion "1.0.0"
#define MyAppPublisher "Abrites, LTD."
#define MyAppURL "http://www.abrites.com/"
#define MyAppExeName "AbritesCars.exe"
#define MyAppIcoName "car.ico"
#define MyAppSupport "dbaynov@abrites.com"
#define MyAppUpdateInfo "Send mail to :dbaynov@abrites.com"
[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{22A74B8F-368F-4FAC-895C-CCC91B8BCF41}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppSupport}
AppUpdatesURL={#MyAppUpdateInfo}
DefaultDirName={pf}\{#MyAppName}
DisableProgramGroupPage=yes
InfoBeforeFile=C:\Users\wanderer\Documents\AbritesCars\release\Install.txt
InfoAfterFile=C:\Users\wanderer\Documents\AbritesCars\release\Finish.txt
OutputBaseFilename=AbritesCars
SetupIconFile=C:\Users\wanderer\Documents\AbritesCars\images\car.ico
UninstallDisplayIcon={uninstallexe}
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; 
[Files]
Source: "{#SourcePath}\{#MyAppExeName}"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#SourcePath}\{#MyAppIcoName}"; DestDir: "{app}"

[Icons]
Name: "{userdesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; \
    IconFilename: "{app}\{#MyAppIcoName}"; Tasks: desktopicon

[Files]
Source: "C:\Users\wanderer\Documents\AbritesCars\release\bearer\*"; DestDir: "{app}\bearer"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\wanderer\Documents\AbritesCars\release\iconengines\*"; DestDir: "{app}\iconengines"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\wanderer\Documents\AbritesCars\release\imageformats\*"; DestDir: "{app}\imageformats"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\wanderer\Documents\AbritesCars\release\platforms\*"; DestDir: "{app}\platforms"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\wanderer\Documents\AbritesCars\release\sqldrivers\*"; DestDir: "{app}\sqldrivers"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\wanderer\Documents\AbritesCars\release\translations\*"; DestDir: "{app}\translations"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\wanderer\Documents\AbritesCars\release\D3Dcompiler_43.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\libEGL.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\libgcc_s_dw2-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\libGLESV2.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\libstdc++-6.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\libwinpthread-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\opengl32sw.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\Qt5Core.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\Qt5Gui.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\Qt5Network.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\Qt5Sql.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\Qt5Svg.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\wanderer\Documents\AbritesCars\release\Qt5Widgets.dll"; DestDir: "{app}"; Flags: ignoreversion


; NOTE: Don't use "Flags: ignoreversion" on any shared system files


[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

