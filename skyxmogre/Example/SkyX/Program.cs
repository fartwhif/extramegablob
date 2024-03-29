using System;
using System.Collections.Generic;
using System.Text;

namespace Mogre.Demo.SkyX
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                SkyX app = new SkyX();
                app.Go();
            }
            catch
            {
                // Check if it's an Ogre Exception
                if (Mogre.OgreException.IsThrown)
                    Mogre.Demo.ExampleApplication.Example.ShowOgreException();
                else
                    throw;
            }
        }
    }
}
