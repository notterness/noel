#include <map>
#include <string>

using namespace std;

class MemoryStore {
    map<string, string> users;

public:
    MemoryStore() {
        users["joe"] = "s3cret";
        users["jasper"] = "Password";
    }

    bool authenticate(const string &id, const string &password) {
        map<string, string>::iterator it;
        for (it = users.begin(); it != users.end(); it++) {
            if (it->first == id && it->second == password) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    return 0;
}
