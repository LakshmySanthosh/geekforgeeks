/*
Alice has some cards, each card has one number written on it. 
She wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.
Given an integer array hand of size N where hand [ i ] is the value written on the ith card and an integer groupSize, 
return true if she can rearrange the cards, or false otherwise.
*/

bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        multiset<int> s(hand.begin(),hand.end());
        while(s.size()>0)
        {
            int x = *s.begin();
            for(int i=x;i<x+groupSize;i++)
            {
                if(s.find(i)==s.end())
                    return false;
                s.erase(s.find(i));
            }
        }
        return true;
    }
};
