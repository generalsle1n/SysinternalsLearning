
using Threadstest;

Thread First = new Thread(new ThreadStart(LongRunning.Wait));
Console.WriteLine("Created first");
Thread Second = new Thread(new ThreadStart(LongRunning.Wait));
Console.WriteLine("Created second");

Console.WriteLine("Start first");
First.Start();
First.Join();
Console.WriteLine("Start second");
Second.Start();
Second.Join();