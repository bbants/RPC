package com.eprosima.fastrpc.idl.tree;

import java.util.ArrayList;
import com.eprosima.idl.parser.tree.Operation;

public class Interface extends com.eprosima.idl.parser.tree.Interface
{
    public Interface(String scopeFile, boolean isInScope, String scope, String name)
    {
        super(scopeFile, isInScope, scope, name);
    }

    ////////// DDS block ////////////
    public ArrayList<Operation> getNotOnewayOperations()
    {
        if(m_notOnewayOperations == null)
        {
            m_notOnewayOperations = new ArrayList<Operation>();
            
            for(int count = 0; count < getOperations().size(); ++count)
            {
                if(!getOperations().get(count).isOneway())
                {
                    m_notOnewayOperations.add(getOperations().get(count));
                }
            }
        }
        
        return m_notOnewayOperations;
    }
    ///////// End DDS Block /////////

    ////////// Auth block ////////////
    // TODO Pensar en que la Annotacion no solo tenga un string, sino mas valores.
    
    public String getAuth()
    {
        return getAnnotations().get("AUTH_INTERFACE");
    }

    ///////// End Auth Block /////////
    
    ////////// RESTful block //////////
    
    public String getPath() {
    	return getAnnotations().get("PATH");
    }
    
    public String getPathWithoutFirstBackslace()
    {
        String path = getPath();
        
        if(path != null)
        {
            if(!path.isEmpty() && path.charAt(0) ==  '/')
                path = path.substring(1);
            
            return path;
        }
        
        return null;
    }
    
    public boolean getPathHasBrackets() {
    	if(getPath().contains("{") && getPath().contains("}"))
    		return true;
    	
    	return false;
    }
    
    public ArrayList<Integer> getTemplateParameterPositions()
    {
        ArrayList<Integer> ret = new ArrayList<Integer>();
        int fpos = -1, numTag = 0;
        
        String uri = getPath();
        
        if(uri.length() > 2)
        {
            if(uri.charAt(0) == '/')
                ++fpos;
            
            int lpos = fpos;
            
            do
            {
                if(uri.length() > lpos + 1)
                {
                    if(uri.charAt(lpos + 1) == '{')
                        ret.add(numTag);
                    
                    fpos = lpos + 1;
                }
                else
                    break;
                
                ++numTag;
            }
            while((lpos = uri.indexOf('/', fpos)) != -1);
        }
        
        return ret;
    }
    
    /////// End of RESTful block //////

    private ArrayList<Operation> m_notOnewayOperations = null;
}