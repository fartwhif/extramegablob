﻿using System;
using System.Collections;
using System.Runtime.Serialization;
using Mogre;
using System.IO;
using System.Runtime.InteropServices;
using MogreFramework;

namespace ExtraMegaBlob.References
{
    public sealed class SceneNodes2 : IEnumerable
    {
        private ArrayList allSceneNodes2 = new ArrayList();
        public Boolean Contains(SceneNode a)
        {
            foreach (SceneNode tex in allSceneNodes2)
            {
                if (tex.Name == a.Name)
                {
                    return true;
                }
            }
            return false;
        }
        public SceneNode this[int index]
        {
            get
            {
                return (SceneNode)allSceneNodes2[index];
            }
            set
            {
                allSceneNodes2[index] = value;
            }
        }
        public SceneNode this[String key]
        {
            get
            {
                int i = IndexOf(key);
                if (i < 0)
                    throw new ArgumentOutOfRangeException("key", "\"" + key + "\" is not a valid SceneNode");
                return (SceneNode)allSceneNodes2[i];
            }
            set
            {
                int i = IndexOf(key);
                if (i < 0)
                    throw new ArgumentOutOfRangeException("key", "\"" + key + "\" is not a valid SceneNode");
                allSceneNodes2[i] = value;
            }
        }
        public SceneNodes2()
        {
            allSceneNodes2 = new ArrayList();
        }
        public int Add(SceneNode sn)
        {
            if (IndexOf(sn.Name) > 0) throw new InvalidOperationException("A SceneNode with the name \"" + sn.Name + "\" already exists.");
            lock (allSceneNodes2)
            {
                return allSceneNodes2.Add(((SceneNode)sn));
            }
        }
        public int IndexOf(String Name)
        {
            for (int i = 0; i < allSceneNodes2.Count; i++)
            {
                if (((SceneNode)allSceneNodes2[i]).Name == Name)
                {
                    return i;
                }
            }
            return -1;
        }
        public void RemoveAt(int i)
        {
            lock (allSceneNodes2)
            {
                allSceneNodes2.RemoveAt(i);
            }
        }
        public void RemoveAt(string sceneNodeName)
        {
            RemoveAt(IndexOf(sceneNodeName));
        }
        public Boolean keyExists(String Name)
        {
            for (int i = 0; i < this.Count; i++)
            {
                if (((SceneNode)allSceneNodes2[i]).Name == Name)
                {
                    return true;
                }
            }
            return false;
        }
        public int Count
        {
            get
            {
                return allSceneNodes2.Count;
            }
        }
        IEnumerator IEnumerable.GetEnumerator()
        {
            return new SceneNodeEnumerator(allSceneNodes2);
        }
        public class SceneNodeEnumerator : IEnumerator
        {
            private int cursor = -1;
            private ArrayList _SceneNodes2 = null;
            public SceneNodeEnumerator(ArrayList SceneNodes2)
            {
                _SceneNodes2 = SceneNodes2;
            }
            public bool MoveNext()
            {
                cursor++;
                return (cursor < _SceneNodes2.Count);
            }
            public void Reset()
            {
                cursor = -1;
            }
            public object Current
            {
                get
                {
                    try
                    {
                        return _SceneNodes2[cursor];
                    }
                    catch (IndexOutOfRangeException)
                    {
                        throw new InvalidOperationException("Index out of bounds.");
                    }
                }
            }
        }
        public void shutdown()
        {
            for (int i = 0; i < allSceneNodes2.Count; i++)
            {
                OgreWindow.Instance.mSceneMgr.DestroySceneNode((SceneNode)allSceneNodes2[i]);
            }
            while (this.Count > 0)
            {
                this.RemoveAt(0);
            }
        }
    }
}