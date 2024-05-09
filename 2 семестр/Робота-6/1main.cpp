#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

string fillTemplate(const string& valuesStr, const string& templateStr) {
    map<string, string> valueMap;

    istringstream iss(valuesStr);
    string pair;
    while (getline(iss, pair, ',')) {
        size_t pos = pair.find('=');
        if (pos != string::npos) {
            string name = pair.substr(0, pos);
            string value = pair.substr(pos + 1);
            valueMap[name] = value;
        }
    }

    string result = templateStr;
    size_t pos = 0;
    while ((pos = result.find('[')) != string::npos) {
        size_t endPos = result.find(']', pos);
        if (endPos != string::npos) {
            string placeholder = result.substr(pos + 1, endPos - pos - 1);
            auto it = valueMap.find(placeholder);
            if (it != valueMap.end()) {
                result.replace(pos, endPos - pos + 1, it->second);
            }
            pos = endPos + 1;
        } else {
            break;
        }
    }

    return result;
}

int main() {
    string values, templateStr;
    getline(cin, values);
    getline(cin, templateStr);

    string filledTemplate = fillTemplate(values, templateStr);
    cout << filledTemplate << endl;

    return 0;
}

