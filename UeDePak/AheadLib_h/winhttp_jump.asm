
;
; created by AheadLib
; github:https://github.com/strivexjun/AheadLib-x86-x64
;
; 把 .asm 文件添加到工程-右键-属性-常规-项类型-自定义生成工具, 从生成中排除-否
; 然后复制下面命令填入
; 命令行 ml64 /Fo $(IntDir)%(fileName).obj /c %(fileName).asm
; 输出 $(IntDir)%(fileName).obj;%(Outputs)
; 链接对象-是
;


.DATA
EXTERN pfnAheadLib_DllCanUnloadNow:dq;
EXTERN pfnAheadLib_DllGetClassObject:dq;
EXTERN pfnAheadLib_Private1:dq;
EXTERN pfnAheadLib_SvchostPushServiceGlobals:dq;
EXTERN pfnAheadLib_WinHttpAddRequestHeaders:dq;
EXTERN pfnAheadLib_WinHttpAutoProxySvcMain:dq;
EXTERN pfnAheadLib_WinHttpCheckPlatform:dq;
EXTERN pfnAheadLib_WinHttpCloseHandle:dq;
EXTERN pfnAheadLib_WinHttpConnect:dq;
EXTERN pfnAheadLib_WinHttpConnectionDeletePolicyEntries:dq;
EXTERN pfnAheadLib_WinHttpConnectionDeleteProxyInfo:dq;
EXTERN pfnAheadLib_WinHttpConnectionFreeNameList:dq;
EXTERN pfnAheadLib_WinHttpConnectionFreeProxyInfo:dq;
EXTERN pfnAheadLib_WinHttpConnectionFreeProxyList:dq;
EXTERN pfnAheadLib_WinHttpConnectionGetNameList:dq;
EXTERN pfnAheadLib_WinHttpConnectionGetProxyInfo:dq;
EXTERN pfnAheadLib_WinHttpConnectionGetProxyList:dq;
EXTERN pfnAheadLib_WinHttpConnectionSetPolicyEntries:dq;
EXTERN pfnAheadLib_WinHttpConnectionSetProxyInfo:dq;
EXTERN pfnAheadLib_WinHttpConnectionUpdateIfIndexTable:dq;
EXTERN pfnAheadLib_WinHttpCrackUrl:dq;
EXTERN pfnAheadLib_WinHttpCreateProxyResolver:dq;
EXTERN pfnAheadLib_WinHttpCreateUrl:dq;
EXTERN pfnAheadLib_WinHttpDetectAutoProxyConfigUrl:dq;
EXTERN pfnAheadLib_WinHttpFreeProxyResult:dq;
EXTERN pfnAheadLib_WinHttpFreeProxyResultEx:dq;
EXTERN pfnAheadLib_WinHttpFreeProxySettings:dq;
EXTERN pfnAheadLib_WinHttpGetDefaultProxyConfiguration:dq;
EXTERN pfnAheadLib_WinHttpGetIEProxyConfigForCurrentUser:dq;
EXTERN pfnAheadLib_WinHttpGetProxyForUrl:dq;
EXTERN pfnAheadLib_WinHttpGetProxyForUrlEx:dq;
EXTERN pfnAheadLib_WinHttpGetProxyForUrlEx2:dq;
EXTERN pfnAheadLib_WinHttpGetProxyForUrlHvsi:dq;
EXTERN pfnAheadLib_WinHttpGetProxyResult:dq;
EXTERN pfnAheadLib_WinHttpGetProxyResultEx:dq;
EXTERN pfnAheadLib_WinHttpGetProxySettingsVersion:dq;
EXTERN pfnAheadLib_WinHttpGetTunnelSocket:dq;
EXTERN pfnAheadLib_WinHttpOpen:dq;
EXTERN pfnAheadLib_WinHttpOpenRequest:dq;
EXTERN pfnAheadLib_WinHttpProbeConnectivity:dq;
EXTERN pfnAheadLib_WinHttpQueryAuthSchemes:dq;
EXTERN pfnAheadLib_WinHttpQueryDataAvailable:dq;
EXTERN pfnAheadLib_WinHttpQueryHeaders:dq;
EXTERN pfnAheadLib_WinHttpQueryOption:dq;
EXTERN pfnAheadLib_WinHttpReadData:dq;
EXTERN pfnAheadLib_WinHttpReadProxySettings:dq;
EXTERN pfnAheadLib_WinHttpReadProxySettingsHvsi:dq;
EXTERN pfnAheadLib_WinHttpReceiveResponse:dq;
EXTERN pfnAheadLib_WinHttpResetAutoProxy:dq;
EXTERN pfnAheadLib_WinHttpSaveProxyCredentials:dq;
EXTERN pfnAheadLib_WinHttpSendRequest:dq;
EXTERN pfnAheadLib_WinHttpSetCredentials:dq;
EXTERN pfnAheadLib_WinHttpSetDefaultProxyConfiguration:dq;
EXTERN pfnAheadLib_WinHttpSetOption:dq;
EXTERN pfnAheadLib_WinHttpSetStatusCallback:dq;
EXTERN pfnAheadLib_WinHttpSetTimeouts:dq;
EXTERN pfnAheadLib_WinHttpTimeFromSystemTime:dq;
EXTERN pfnAheadLib_WinHttpTimeToSystemTime:dq;
EXTERN pfnAheadLib_WinHttpWebSocketClose:dq;
EXTERN pfnAheadLib_WinHttpWebSocketCompleteUpgrade:dq;
EXTERN pfnAheadLib_WinHttpWebSocketQueryCloseStatus:dq;
EXTERN pfnAheadLib_WinHttpWebSocketReceive:dq;
EXTERN pfnAheadLib_WinHttpWebSocketSend:dq;
EXTERN pfnAheadLib_WinHttpWebSocketShutdown:dq;
EXTERN pfnAheadLib_WinHttpWriteData:dq;
EXTERN pfnAheadLib_WinHttpWriteProxySettings:dq;

; 发现一个bug,默认这里没有放在代码段,导致内存权限异常
; 加入下行即可
.CODE
AheadLib_DllCanUnloadNow PROC
  jmp pfnAheadLib_DllCanUnloadNow
AheadLib_DllCanUnloadNow ENDP

AheadLib_DllGetClassObject PROC
  jmp pfnAheadLib_DllGetClassObject
AheadLib_DllGetClassObject ENDP

AheadLib_Private1 PROC
  jmp pfnAheadLib_Private1
AheadLib_Private1 ENDP

AheadLib_SvchostPushServiceGlobals PROC
  jmp pfnAheadLib_SvchostPushServiceGlobals
AheadLib_SvchostPushServiceGlobals ENDP

AheadLib_WinHttpAddRequestHeaders PROC
  jmp pfnAheadLib_WinHttpAddRequestHeaders
AheadLib_WinHttpAddRequestHeaders ENDP

AheadLib_WinHttpAutoProxySvcMain PROC
  jmp pfnAheadLib_WinHttpAutoProxySvcMain
AheadLib_WinHttpAutoProxySvcMain ENDP

AheadLib_WinHttpCheckPlatform PROC
  jmp pfnAheadLib_WinHttpCheckPlatform
AheadLib_WinHttpCheckPlatform ENDP

AheadLib_WinHttpCloseHandle PROC
  jmp pfnAheadLib_WinHttpCloseHandle
AheadLib_WinHttpCloseHandle ENDP

AheadLib_WinHttpConnect PROC
  jmp pfnAheadLib_WinHttpConnect
AheadLib_WinHttpConnect ENDP

AheadLib_WinHttpConnectionDeletePolicyEntries PROC
  jmp pfnAheadLib_WinHttpConnectionDeletePolicyEntries
AheadLib_WinHttpConnectionDeletePolicyEntries ENDP

AheadLib_WinHttpConnectionDeleteProxyInfo PROC
  jmp pfnAheadLib_WinHttpConnectionDeleteProxyInfo
AheadLib_WinHttpConnectionDeleteProxyInfo ENDP

AheadLib_WinHttpConnectionFreeNameList PROC
  jmp pfnAheadLib_WinHttpConnectionFreeNameList
AheadLib_WinHttpConnectionFreeNameList ENDP

AheadLib_WinHttpConnectionFreeProxyInfo PROC
  jmp pfnAheadLib_WinHttpConnectionFreeProxyInfo
AheadLib_WinHttpConnectionFreeProxyInfo ENDP

AheadLib_WinHttpConnectionFreeProxyList PROC
  jmp pfnAheadLib_WinHttpConnectionFreeProxyList
AheadLib_WinHttpConnectionFreeProxyList ENDP

AheadLib_WinHttpConnectionGetNameList PROC
  jmp pfnAheadLib_WinHttpConnectionGetNameList
AheadLib_WinHttpConnectionGetNameList ENDP

AheadLib_WinHttpConnectionGetProxyInfo PROC
  jmp pfnAheadLib_WinHttpConnectionGetProxyInfo
AheadLib_WinHttpConnectionGetProxyInfo ENDP

AheadLib_WinHttpConnectionGetProxyList PROC
  jmp pfnAheadLib_WinHttpConnectionGetProxyList
AheadLib_WinHttpConnectionGetProxyList ENDP

AheadLib_WinHttpConnectionSetPolicyEntries PROC
  jmp pfnAheadLib_WinHttpConnectionSetPolicyEntries
AheadLib_WinHttpConnectionSetPolicyEntries ENDP

AheadLib_WinHttpConnectionSetProxyInfo PROC
  jmp pfnAheadLib_WinHttpConnectionSetProxyInfo
AheadLib_WinHttpConnectionSetProxyInfo ENDP

AheadLib_WinHttpConnectionUpdateIfIndexTable PROC
  jmp pfnAheadLib_WinHttpConnectionUpdateIfIndexTable
AheadLib_WinHttpConnectionUpdateIfIndexTable ENDP

AheadLib_WinHttpCrackUrl PROC
  jmp pfnAheadLib_WinHttpCrackUrl
AheadLib_WinHttpCrackUrl ENDP

AheadLib_WinHttpCreateProxyResolver PROC
  jmp pfnAheadLib_WinHttpCreateProxyResolver
AheadLib_WinHttpCreateProxyResolver ENDP

AheadLib_WinHttpCreateUrl PROC
  jmp pfnAheadLib_WinHttpCreateUrl
AheadLib_WinHttpCreateUrl ENDP

AheadLib_WinHttpDetectAutoProxyConfigUrl PROC
  jmp pfnAheadLib_WinHttpDetectAutoProxyConfigUrl
AheadLib_WinHttpDetectAutoProxyConfigUrl ENDP

AheadLib_WinHttpFreeProxyResult PROC
  jmp pfnAheadLib_WinHttpFreeProxyResult
AheadLib_WinHttpFreeProxyResult ENDP

AheadLib_WinHttpFreeProxyResultEx PROC
  jmp pfnAheadLib_WinHttpFreeProxyResultEx
AheadLib_WinHttpFreeProxyResultEx ENDP

AheadLib_WinHttpFreeProxySettings PROC
  jmp pfnAheadLib_WinHttpFreeProxySettings
AheadLib_WinHttpFreeProxySettings ENDP

AheadLib_WinHttpGetDefaultProxyConfiguration PROC
  jmp pfnAheadLib_WinHttpGetDefaultProxyConfiguration
AheadLib_WinHttpGetDefaultProxyConfiguration ENDP

AheadLib_WinHttpGetIEProxyConfigForCurrentUser PROC
  jmp pfnAheadLib_WinHttpGetIEProxyConfigForCurrentUser
AheadLib_WinHttpGetIEProxyConfigForCurrentUser ENDP

AheadLib_WinHttpGetProxyForUrl PROC
  jmp pfnAheadLib_WinHttpGetProxyForUrl
AheadLib_WinHttpGetProxyForUrl ENDP

AheadLib_WinHttpGetProxyForUrlEx PROC
  jmp pfnAheadLib_WinHttpGetProxyForUrlEx
AheadLib_WinHttpGetProxyForUrlEx ENDP

AheadLib_WinHttpGetProxyForUrlEx2 PROC
  jmp pfnAheadLib_WinHttpGetProxyForUrlEx2
AheadLib_WinHttpGetProxyForUrlEx2 ENDP

AheadLib_WinHttpGetProxyForUrlHvsi PROC
  jmp pfnAheadLib_WinHttpGetProxyForUrlHvsi
AheadLib_WinHttpGetProxyForUrlHvsi ENDP

AheadLib_WinHttpGetProxyResult PROC
  jmp pfnAheadLib_WinHttpGetProxyResult
AheadLib_WinHttpGetProxyResult ENDP

AheadLib_WinHttpGetProxyResultEx PROC
  jmp pfnAheadLib_WinHttpGetProxyResultEx
AheadLib_WinHttpGetProxyResultEx ENDP

AheadLib_WinHttpGetProxySettingsVersion PROC
  jmp pfnAheadLib_WinHttpGetProxySettingsVersion
AheadLib_WinHttpGetProxySettingsVersion ENDP

AheadLib_WinHttpGetTunnelSocket PROC
  jmp pfnAheadLib_WinHttpGetTunnelSocket
AheadLib_WinHttpGetTunnelSocket ENDP

AheadLib_WinHttpOpen PROC
  jmp pfnAheadLib_WinHttpOpen
AheadLib_WinHttpOpen ENDP

AheadLib_WinHttpOpenRequest PROC
  jmp pfnAheadLib_WinHttpOpenRequest
AheadLib_WinHttpOpenRequest ENDP

AheadLib_WinHttpProbeConnectivity PROC
  jmp pfnAheadLib_WinHttpProbeConnectivity
AheadLib_WinHttpProbeConnectivity ENDP

AheadLib_WinHttpQueryAuthSchemes PROC
  jmp pfnAheadLib_WinHttpQueryAuthSchemes
AheadLib_WinHttpQueryAuthSchemes ENDP

AheadLib_WinHttpQueryDataAvailable PROC
  jmp pfnAheadLib_WinHttpQueryDataAvailable
AheadLib_WinHttpQueryDataAvailable ENDP

AheadLib_WinHttpQueryHeaders PROC
  jmp pfnAheadLib_WinHttpQueryHeaders
AheadLib_WinHttpQueryHeaders ENDP

AheadLib_WinHttpQueryOption PROC
  jmp pfnAheadLib_WinHttpQueryOption
AheadLib_WinHttpQueryOption ENDP

AheadLib_WinHttpReadData PROC
  jmp pfnAheadLib_WinHttpReadData
AheadLib_WinHttpReadData ENDP

AheadLib_WinHttpReadProxySettings PROC
  jmp pfnAheadLib_WinHttpReadProxySettings
AheadLib_WinHttpReadProxySettings ENDP

AheadLib_WinHttpReadProxySettingsHvsi PROC
  jmp pfnAheadLib_WinHttpReadProxySettingsHvsi
AheadLib_WinHttpReadProxySettingsHvsi ENDP

AheadLib_WinHttpReceiveResponse PROC
  jmp pfnAheadLib_WinHttpReceiveResponse
AheadLib_WinHttpReceiveResponse ENDP

AheadLib_WinHttpResetAutoProxy PROC
  jmp pfnAheadLib_WinHttpResetAutoProxy
AheadLib_WinHttpResetAutoProxy ENDP

AheadLib_WinHttpSaveProxyCredentials PROC
  jmp pfnAheadLib_WinHttpSaveProxyCredentials
AheadLib_WinHttpSaveProxyCredentials ENDP

AheadLib_WinHttpSendRequest PROC
  jmp pfnAheadLib_WinHttpSendRequest
AheadLib_WinHttpSendRequest ENDP

AheadLib_WinHttpSetCredentials PROC
  jmp pfnAheadLib_WinHttpSetCredentials
AheadLib_WinHttpSetCredentials ENDP

AheadLib_WinHttpSetDefaultProxyConfiguration PROC
  jmp pfnAheadLib_WinHttpSetDefaultProxyConfiguration
AheadLib_WinHttpSetDefaultProxyConfiguration ENDP

AheadLib_WinHttpSetOption PROC
  jmp pfnAheadLib_WinHttpSetOption
AheadLib_WinHttpSetOption ENDP

AheadLib_WinHttpSetStatusCallback PROC
  jmp pfnAheadLib_WinHttpSetStatusCallback
AheadLib_WinHttpSetStatusCallback ENDP

AheadLib_WinHttpSetTimeouts PROC
  jmp pfnAheadLib_WinHttpSetTimeouts
AheadLib_WinHttpSetTimeouts ENDP

AheadLib_WinHttpTimeFromSystemTime PROC
  jmp pfnAheadLib_WinHttpTimeFromSystemTime
AheadLib_WinHttpTimeFromSystemTime ENDP

AheadLib_WinHttpTimeToSystemTime PROC
  jmp pfnAheadLib_WinHttpTimeToSystemTime
AheadLib_WinHttpTimeToSystemTime ENDP

AheadLib_WinHttpWebSocketClose PROC
  jmp pfnAheadLib_WinHttpWebSocketClose
AheadLib_WinHttpWebSocketClose ENDP

AheadLib_WinHttpWebSocketCompleteUpgrade PROC
  jmp pfnAheadLib_WinHttpWebSocketCompleteUpgrade
AheadLib_WinHttpWebSocketCompleteUpgrade ENDP

AheadLib_WinHttpWebSocketQueryCloseStatus PROC
  jmp pfnAheadLib_WinHttpWebSocketQueryCloseStatus
AheadLib_WinHttpWebSocketQueryCloseStatus ENDP

AheadLib_WinHttpWebSocketReceive PROC
  jmp pfnAheadLib_WinHttpWebSocketReceive
AheadLib_WinHttpWebSocketReceive ENDP

AheadLib_WinHttpWebSocketSend PROC
  jmp pfnAheadLib_WinHttpWebSocketSend
AheadLib_WinHttpWebSocketSend ENDP

AheadLib_WinHttpWebSocketShutdown PROC
  jmp pfnAheadLib_WinHttpWebSocketShutdown
AheadLib_WinHttpWebSocketShutdown ENDP

AheadLib_WinHttpWriteData PROC
  jmp pfnAheadLib_WinHttpWriteData
AheadLib_WinHttpWriteData ENDP

AheadLib_WinHttpWriteProxySettings PROC
  jmp pfnAheadLib_WinHttpWriteProxySettings
AheadLib_WinHttpWriteProxySettings ENDP


END
