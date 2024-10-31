using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Threadstest
{
    public class LongRunning
    {
        private const int _secondMultiplier = 1000;
        public static async Task<bool> LongRun(int Seconds)
        {
            await Task.Delay(Seconds * _secondMultiplier);
            return true;
        }

        public static void Wait()
        {
            Thread.Sleep(30 * _secondMultiplier);
        }
    }
}
