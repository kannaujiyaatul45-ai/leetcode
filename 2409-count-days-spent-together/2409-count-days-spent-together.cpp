
class Solution {
public:
    int toDay(string s) {
        int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

        int month = stoi(s.substr(0, 2));
        int date = stoi(s.substr(3, 2));

        for (int i = 0; i < month - 1; i++) {
            date += days[i];
        }

        return date;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int startA = toDay(arriveAlice);
        int endA = toDay(leaveAlice);
        int startB = toDay(arriveBob);
        int endB = toDay(leaveBob);

        int l = max(startA, startB);
        int r = min(endA, endB);

        return max(0, r - l + 1);
    }
};
