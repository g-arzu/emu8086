
; ADVAPI32 API calls parameters' count

AbortSystemShutdown% =	1
AccessCheck% =	8
AccessCheckAndAuditAlarm% =  11
AccessCheckByType% =  11
AccessCheckByTypeAndAuditAlarm% =  16
AccessCheckByTypeResultList% =	11
AccessCheckByTypeResultListAndAuditAlarm% =  16
AddAccessAllowedAce% =	4
AddAccessAllowedAceEx% =  5
AddAccessAllowedObjectAce% =  7
AddAccessDeniedAce% =  4
AddAccessDeniedAceEx% =  5
AddAccessDeniedObjectAce% =  7
AddAce% =  5
AddAuditAccessAce% =  6
AddAuditAccessAceEx% =	7
AddAuditAccessObjectAce% =  9
AdjustTokenGroups% =  6
AdjustTokenPrivileges% =  6
AllocateAndInitializeSid% =  11
AllocateLocallyUniqueId% =  1
AreAllAccessesGranted% =  2
AreAnyAccessesGranted% =  2
BackupEventLog% =  2
BuildExplicitAccessWithName% =	5
BuildImpersonateExplicitAccessWithName% =  6
BuildImpersonateTrustee% =  2
BuildSecurityDescriptor% =  9
BuildTrusteeWithName% =  2
BuildTrusteeWithSid% =	2
CancelOverlappedAccess% =  1
ChangeServiceConfig2% =  3
ChangeServiceConfig% =	11
ClearEventLog% =  2
CloseEventLog% =  1
CloseRaw% =  1
CloseServiceHandle% =  1
ControlService% =  3
ConvertAccessToSecurityDescriptor% =  5
ConvertSecurityDescriptorToAccess% =  7
ConvertSecurityDescriptorToAccessNamed% =  7
ConvertToAutoInheritPrivateObjectSecurity% =  6
CopySid% =  3
CreatePrivateObjectSecurity% =	6
CreatePrivateObjectSecurityEx% =  8
CreateProcessAsUser% =	11
CreateRestrictedToken% =  9
CreateService% =  13
CryptAcquireContext% =	5
CryptContextAddRef% =  3
CryptCreateHash% =  5
CryptDecrypt% =  6
CryptDeriveKey% =  5
CryptDestroyHash% =  1
CryptDestroyKey% =  1
CryptDuplicateHash% =  4
CryptDuplicateKey% =  4
CryptEncrypt% =  7
CryptEnumProviderTypes% =  6
CryptEnumProviders% =  6
CryptExportKey% =  6
CryptGenKey% =	4
CryptGenRandom% =  3
CryptGetDefaultProvider% =  5
CryptGetHashParam% =  5
CryptGetKeyParam% =  5
CryptGetProvParam% =  5
CryptGetUserKey% =  3
CryptHashData% =  4
CryptHashSessionKey% =	3
CryptImportKey% =  6
CryptReleaseContext% =	2
CryptSetHashParam% =  4
CryptSetKeyParam% =  4
CryptSetProvParam% =  4
CryptSetProvider% =  2
CryptSetProviderEx% =  4
CryptSignHash% =  6
CryptVerifySignature% =  6
DecryptFile% =	2
DeleteAce% =  2
DeleteService% =  1
DeregisterEventSource% =  1
DestroyPrivateObjectSecurity% =  1
DuplicateToken% =  3
DuplicateTokenEx% =  6
ElfBackupEventLogFile% =  2
ElfChangeNotify% =  2
ElfClearEventLogFile% =  2
ElfCloseEventLog% =  1
ElfDeregisterEventSource% =  1
ElfNumberOfRecords% =  2
ElfOldestRecord% =  2
ElfOpenBackupEventLog% =  3
ElfOpenEventLog% =  3
ElfReadEventLog% =  7
ElfRegisterEventSource% =  3
ElfReportEvent% =  12
EncryptFile% =	1
EnumDependentServices% =  6
EnumServicesStatus% =  8
EqualPrefixSid% =  2
EqualSid% =  2
FindFirstFreeAce% =  2
FreeSid% =  1
GetAccessPermissionsForObject% =  9
GetAce% =  3
GetAclInformation% =  4
GetAuditedPermissionsFromAcl% =  4
GetCurrentHwProfile% =	1
GetEffectiveRightsFromAcl% =  3
GetExplicitEntriesFromAcl% =  3
GetFileSecurity% =  5
GetKernelObjectSecurity% =  5
GetLengthSid% =  1
GetMultipleTrustee% =  1
GetMultipleTrusteeOperation% =	1
GetNamedSecurityInfo% =  8
GetNamedSecurityInfoEx% =  9
GetNumberOfEventLogRecords% =  2
GetOldestEventLogRecord% =  2
GetOverlappedAccessResults% =  4
GetPrivateObjectSecurity% =  5
GetSecurityDescriptorControl% =  3
GetSecurityDescriptorDacl% =  4
GetSecurityDescriptorGroup% =  3
GetSecurityDescriptorLength% =	1
GetSecurityDescriptorOwner% =  3
GetSecurityDescriptorSacl% =  4
GetSecurityInfo% =  8
GetSecurityInfoEx% =  9
GetServiceDisplayName% =  4
GetServiceKeyName% =  4
GetSidLengthRequired% =  1
GetSidSubAuthority% =  2
GetSidSubAuthorityCount% =  1
GetTokenInformation% =	5
GetTrusteeName% =  1
GetTrusteeType% =  1
GetUserName% =	2
I_ScSetServiceBits% =  5
ImpersonateLoggedOnUser% =  1
ImpersonateNamedPipeClient% =  1
ImpersonateSelf% =  1
InitializeAcl% =  3
InitializeSecurityDescriptor% =  2
InitializeSid% =  3
InitiateSystemShutdown% =  5
IsTextUnicode% =  3
IsTokenRestricted% =  1
IsValidAcl% =  1
IsValidSecurityDescriptor% =  1
IsValidSid% =  1
LockServiceDatabase% =	1
LogonUser% =  6
LookupAccountName% =  7
LookupAccountSid% =  7
LookupPrivilegeDisplayName% =  5
LookupPrivilegeName% =	4
LookupPrivilegeValue% =  3
LookupSecurityDescriptorParts% =  7
LsaAddAccountRights% =	4
LsaAddPrivilegesToAccount% =  2
LsaClearAuditLog% =  1
LsaClose% =  1
LsaCreateAccount% =  4
LsaCreateSecret% =  4
LsaCreateTrustedDomain% =  4
LsaCreateTrustedDomainEx% =  5
LsaDelete% =  1
LsaDeleteTrustedDomain% =  2
LsaEnumerateAccountRights% =  4
LsaEnumerateAccounts% =  5
LsaEnumerateAccountsWithUserRight% =  4
LsaEnumeratePrivileges% =  5
LsaEnumeratePrivilegesOfAccount% =  2
LsaEnumerateTrustedDomains% =  5
LsaEnumerateTrustedDomainsEx% =  6
LsaFreeMemory% =  1
LsaGetQuotasForAccount% =  2
LsaGetSystemAccessAccount% =  2
LsaGetUserName% =  2
LsaICLookupNames% =  7
LsaICLookupSids% =  7
LsaIGetTrustedDomainAuthInfoBlobs% =  4
LsaISetTrustedDomainAuthInfoBlobs% =  4
LsaLookupNames% =  5
LsaLookupPrivilegeDisplayName% =  4
LsaLookupPrivilegeName% =  3
LsaLookupPrivilegeValue% =  3
LsaLookupSids% =  5
LsaNtStatusToWinError% =  1
LsaOpenAccount% =  4
LsaOpenPolicy% =  4
LsaOpenSecret% =  4
LsaOpenTrustedDomain% =  4
LsaQueryDomainInformationPolicy% =  3
LsaQueryInfoTrustedDomain% =  3
LsaQueryInformationPolicy% =  3
LsaQueryLocalInformationPolicy% =  3
LsaQuerySecret% =  5
LsaQuerySecurityObject% =  3
LsaQueryTrustedDomainInfo% =  4
LsaQueryTrustedDomainInfoByName% =  4
LsaRemoveAccountRights% =  5
LsaRemovePrivilegesFromAccount% =  3
LsaRetrievePrivateData% =  3
LsaSetDomainInformationPolicy% =  3
LsaSetInformationPolicy% =  3
LsaSetInformationTrustedDomain% =  3
LsaSetLocalInformationPolicy% =  3
LsaSetQuotasForAccount% =  2
LsaSetSecret% =  3
LsaSetSecurityObject% =  3
LsaSetSystemAccessAccount% =  2
LsaSetTrustedDomainInfoByName% =  4
LsaSetTrustedDomainInformation% =  4
LsaStorePrivateData% =	3
MakeAbsoluteSD% =  11
MakeSelfRelativeSD% =  3
MapGenericMask% =  2
NotifyBootConfigStatus% =  1
NotifyChangeEventLog% =  2
ObjectCloseAuditAlarm% =  3
ObjectDeleteAuditAlarm% =  3
ObjectOpenAuditAlarm% =  12
ObjectPrivilegeAuditAlarm% =  6
OpenBackupEventLog% =  2
OpenEventLog% =  2
OpenProcessToken% =  3
OpenRaw% =  3
OpenSCManager% =  3
OpenService% =	3
OpenThreadToken% =  4
PrivilegeCheck% =  3
PrivilegedServiceAuditAlarm% =	5
QueryRecoveryAgents% =	3
QueryServiceConfig2% =	5
QueryServiceConfig% =  4
QueryServiceLockStatus% =  4
QueryServiceObjectSecurity% =  5
QueryServiceStatus% =  2
QueryWindows31FilesMigration% =  1
ReadEventLog% =  7
ReadRaw% =  3
RegCloseKey% =	1
RegConnectRegistry% =  3
RegCreateKey% =  3
RegCreateKeyEx% =  9
RegDeleteKey% =  2
RegDeleteValue% =  2
RegEnumKey% =  4
RegEnumKeyEx% =  8
RegEnumValue% =  8
RegFlushKey% =	1
RegGetKeySecurity% =  4
RegLoadKey% =  3
RegNotifyChangeKeyValue% =  5
RegOpenKey% =  3
RegOpenKeyEx% =  5
RegOverridePredefKey% =  2
RegQueryInfoKey% =  12
RegQueryMultipleValues% =  5
RegQueryValue% =  4
RegQueryValueEx% =  6
RegReplaceKey% =  4
RegRestoreKey% =  3
RegSaveKey% =  3
RegSetKeySecurity% =  3
RegSetValue% =	5
RegSetValueEx% =  6
RegUnLoadKey% =  2
RegisterEventSource% =	2
RegisterServiceCtrlHandler% =  2
ReportEvent% =	9
RevertToSelf% =  0
SetAclInformation% =  4
SetEntriesInAccessList% =  6
SetEntriesInAcl% =  4
SetEntriesInAuditList% =  6
SetFileSecurity% =  3
SetKernelObjectSecurity% =  3
SetNamedSecurityInfo% =  7
SetNamedSecurityInfoEx% =  9
SetPrivateObjectSecurity% =  5
SetPrivateObjectSecurityEx% =  6
SetSecurityDescriptorControl% =  3
SetSecurityDescriptorDacl% =  4
SetSecurityDescriptorGroup% =  3
SetSecurityDescriptorOwner% =  3
SetSecurityDescriptorSacl% =  4
SetSecurityInfo% =  7
SetSecurityInfoEx% =  9
SetServiceBits% =  4
SetServiceObjectSecurity% =  3
SetServiceStatus% =  2
SetThreadToken% =  2
SetTokenInformation% =	4
StartService% =  3
StartServiceCtrlDispatcher% =  1
SynchronizeWindows31FilesAndWindowsNTRegistry% =  4
SystemFunction001% =  3
SystemFunction002% =  3
SystemFunction003% =  2
SystemFunction004% =  3
SystemFunction005% =  3
SystemFunction006% =  2
SystemFunction007% =  2
SystemFunction008% =  3
SystemFunction009% =  3
SystemFunction010% =  3
SystemFunction011% =  3
SystemFunction012% =  3
SystemFunction013% =  3
SystemFunction014% =  3
SystemFunction015% =  3
SystemFunction016% =  3
SystemFunction017% =  3
SystemFunction018% =  3
SystemFunction019% =  3
SystemFunction020% =  3
SystemFunction021% =  3
SystemFunction022% =  3
SystemFunction023% =  3
SystemFunction024% =  3
SystemFunction025% =  3
SystemFunction026% =  3
SystemFunction027% =  3
SystemFunction028% =  2
SystemFunction029% =  2
SystemFunction030% =  2
SystemFunction031% =  2
SystemFunction032% =  2
SystemFunction033% =  2
TrusteeAccessToObject% =  6
UnlockServiceDatabase% =  1
WriteRaw% =  3
