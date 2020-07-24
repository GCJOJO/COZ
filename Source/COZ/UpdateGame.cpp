#include "UpdateGame.h"

void UUpdateGame::CheckForUpdate(FString Path)
{
	//FWindowsPlatformProcess::ExecProcess(*(Path.ToString()), nullptr, false, false, false);
	/*system("curl file:///D:/COZ/Update/latest.json -o latest.json");
	system("pause")*/
	FString SPath = Path;
	const TCHAR* Path = *SPath;

	FPlatformProcess::ExecProcess(Path, nullptr, 0, 0, 0);
	FPlatformProcess::CreatProc(Path, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);

}