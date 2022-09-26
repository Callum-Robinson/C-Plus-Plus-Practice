#ifndef WARP_DRIVE_OVERHEATING
#define WARP_DRIVE_OVERHEATING

#include <stdexcept>
using namespace std;

// The custom exception inherits the overflow error exception
class WarpDriveOverheating : public overflow_error {
public:
	WarpDriveOverheating() : overflow_error("Above maximum temperature shutdown imminent!") {
	}
};

#endif // !WARP_DRIVE_OVERHEATING

