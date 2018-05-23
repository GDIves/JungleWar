using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DictionaryExtension
{
    public static Tvalue GetValue<Tkey, Tvalue>(this Dictionary<Tkey, Tvalue> dic, Tkey key)
    {
        Tvalue value;
        dic.TryGetValue(key, out value);
        return value;
    }
}
