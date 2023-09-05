#include <iostream>
using namespace std;

// Use pass-by-reference when:

// The function is to alter the supplied argument
// The size or complexity of supplied arguments are great so that copying the object(s) would be inefficient
// arguments will always be l-values (values that can be used on the left hand side of an assignment)

// use a reference to update a configuration option.
void toggleOption(bool& option) {
    option = !option;
}

int main() {
    bool autoSave = false;

    // Test toggleOption()
    for (auto i = 0; i != 5; ++i) {
        toggleOption(autoSave);
        cout << "Autosave is " << (autoSave ? "on." : "off.") << endl;
    }

    return 0;
}
