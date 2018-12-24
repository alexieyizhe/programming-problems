class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        const int COMMENT_DELIM_LEN = 2;
        bool inBlockComment = false;
        vector<string> edited;
        string tmp = "";

        for(auto &line : source) {
            for(int i = 0; i < line.length(); ++i) {
                string commentDelimiter = line.substr(i, COMMENT_DELIM_LEN);
                if(commentDelimiter == "//" && !inBlockComment) {
                    break;
                }
                else if(commentDelimiter == "/*" && !inBlockComment) {
                    inBlockComment = true;
                    i++;
                    continue;
                }
                else if(commentDelimiter == "*/" && inBlockComment) {
                    inBlockComment = false;
                    i++;
                    continue;
                }

                if(!inBlockComment) tmp += line[i];
            }

            if(!inBlockComment) {
                if(tmp.length() > 0) edited.emplace_back(tmp);
                tmp = "";
            }
        }

        return edited;
    }
};
