#include <efi.h>
#include <efilib.h>

#define SEC_TO_USEC(value) ((value) * 1000 * 1000)

EFI_STATUS
EFIAPI
efi_main (
    EFI_HANDLE          ImageHandle,
    EFI_SYSTEM_TABLE    *SystemTable)
{

    InitializeLib (ImageHandle, SystemTable);

    Print (L"Hello, world!\n");
    uefi_call_wrapper (BS->Stall, 1, SEC_TO_USEC (5));

    return (EFI_SUCCESS);
}
