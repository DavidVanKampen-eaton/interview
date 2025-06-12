#include "string_score.h"
#include <cctype>
#include <algorithm>

int maximumValue(const std::vector<std::string>& strs) {
    int maxScore = 0;
    
    for (const auto& str : strs) {
        bool isAllDigits = true;
        for (char c : str) {
            if (!std::isdigit(c)) {
                isAllDigits = false;
                break;
            }
        }
        
        int score;
        if (isAllDigits && !str.empty()) {
            score = std::stoi(str);
        } else {
            score = str.length();
        }
        
        maxScore = std::max(maxScore, score);
    }
    
    return maxScore;
}
