    for (int i = 0; i < fullName.length(); i++)
    {
        if (fullName[i].compare(" ") == 0)
        {
            email = email + fullName[i];
        }
    }
    cout << email + "@vku.udn.vn";
}