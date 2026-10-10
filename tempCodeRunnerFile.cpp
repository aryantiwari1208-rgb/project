int main()
{
    vector<problem> problems;

    loadProblems(problems);

   string topic;
   while(true)
{
topic = selectTopic();
if(topic == "exit")
{
    cout << "Thank you for using DSA Problem Tracker!" << endl;
    break;
}
displayTopicProblems(problems, topic);
}
}