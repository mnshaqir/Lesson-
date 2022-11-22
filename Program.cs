using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cuboid2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Cuboid aCuboid = new Cuboid(2, 3, 4);

            aCuboid.ShowAllProperties();

            Console.WriteLine("New parameter Height = {0}, Length = {1}, Width = {2}", aCuboid.height, aCuboid.length, aCuboid.width);
            Console.WriteLine("Volume of Cuboid = {0}", aCuboid.Volume());
            Console.WriteLine("Surface Area of Cuboid = {0}", aCuboid.SurfaceArea());
            Console.ReadKey();

        }
    }

    interface Shape3DCalculator
    {
        double Volume();
        double SurfaceArea();

    }

   

}


