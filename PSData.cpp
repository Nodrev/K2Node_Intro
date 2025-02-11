// Copyright Nicholas Ferrar 2019


#include "PSData.h"

///Getters and setters
//Setters

bool UPSData::SetFloatByName(UObject * Target, FName VarName, float NewValue, float & OutValue)
{
	if (Target)
	{
		float FoundValue;
		FFloatProperty* ValueProp = FindFProperty<FFloatProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetIntByName(UObject * Target, FName VarName, int NewValue, int & OutValue)
{
	if (Target)
	{
		int FoundValue;
		FIntProperty* ValueProp = FindFProperty<FIntProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetInt64ByName(UObject * Target, FName VarName, int64 NewValue, int64 & OutValue)
{
	//possibly not working
	if (Target)
	{
		int64 FoundValue;
		FInt64Property* ValueProp = FindFProperty<FInt64Property>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetBoolByName(UObject * Target, FName VarName, bool NewValue, bool & OutValue)
{
	if (Target)
	{
		bool FoundValue;
		FBoolProperty* ValueProp = FindFProperty<FBoolProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetNameByName(UObject * Target, FName VarName, FName NewValue, FName & OutValue)
{
	if (Target)
	{
		FName FoundValue;
		FNameProperty* ValueProp = FindFProperty<FNameProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetObjectByName(UObject * Target, FName VarName, UObject* NewValue, UObject* & OutValue)
{
	if (Target)
	{
		UObject* FoundValue = nullptr;
		FObjectProperty* ValueProp = FindFProperty<FObjectProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetClassByName(UObject * Target, FName VarName, class UClass* NewValue, class UClass* & OutValue)
{
	//Probably some weirdness to do here
	/*
	if (Target)
	{
		class UClass FoundValue;
		FClassProperty* ValueProp = FindFProperty<FClassProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	*/
	return false;
}

bool UPSData::SetByteByName(UObject * Target, FName VarName, uint8 NewValue, uint8 & OutValue)
{
	if (Target)
	{
		uint8 FoundValue;
		FByteProperty* ValueProp = FindFProperty<FByteProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetStringByName(UObject * Target, FName VarName, FString NewValue, FString & OutValue)
{
	if (Target)
	{
		FString FoundValue;
		FStrProperty* ValueProp = FindFProperty<FStrProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetTextByName(UObject * Target, FName VarName, FText NewValue, FText & OutValue)
{
	if (Target)
	{
		FText FoundValue;
		FTextProperty* ValueProp = FindFProperty<FTextProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	return false;
}

bool UPSData::SetStructByName(UObject * Target, FName VarName, UScriptStruct* NewValue, UScriptStruct* & OutValue)
{
	//This will need to iterate and shit
	/*
	if (Target)
	{
		UScriptStruct* FoundValue;
		UStructProperty* ValueProp = FindFProperty<UStructProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	*/
	return false;
}

bool UPSData::SetEnumByName(UObject * Target, FName VarName, uint8 NewValue, uint8 & OutValue)
{
	//Some kind of magic here i guess
	/*
	if (Target)
	{
		uint8 FoundValue;
		UEnumProperty* ValueProp = FindFProperty<UEnumProperty>(Target->GetClass(), VarName);
		if (ValueProp)
		{
			ValueProp->SetPropertyValue_InContainer(Target, NewValue); //this actually sets the variable
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);
			OutValue = FoundValue;
			return true;
		}
	}
	*/
	return false;
}

//Getters

bool UPSData::GetFloatByName(UObject * Target, FName VarName, float & OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		float FoundValue;
		FFloatProperty* ValueProp = FindFProperty<FFloatProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetIntByName(UObject * Target, FName VarName, int & OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		int FoundValue;
		FIntProperty* ValueProp = FindFProperty<FIntProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetInt64ByName(UObject * Target, FName VarName, int64 & OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		int64 FoundValue;
		FInt64Property* ValueProp = FindFProperty<FInt64Property>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetBoolByName(UObject * Target, FName VarName, bool &OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		bool FoundValue;
		FBoolProperty* ValueProp = FindFProperty<FBoolProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetNameByName(UObject * Target, FName VarName, FName & OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		FName FoundValue;
		FNameProperty* ValueProp = FindFProperty<FNameProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetObjectByName(UObject * Target, FName VarName, UObject *& OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		UObject* FoundValue;
		FObjectProperty* ValueProp = FindFProperty<FObjectProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetClassByName(UObject * Target, FName VarName, UClass *& OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		UClass* FoundValue;
		FClassProperty* ValueProp = FindFProperty<FClassProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target)->StaticClass();  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetByteByName(UObject * Target, FName VarName, uint8 & OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		uint8 FoundValue;
		FInt8Property* ValueProp = FindFProperty<FInt8Property>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetStringByName(UObject * Target, FName VarName, FString & OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		FString FoundValue;
		FStrProperty* ValueProp = FindFProperty<FStrProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetTextByName(UObject * Target, FName VarName, FText & OutValue)
{
	if (Target) //make sure Target was set in blueprints. 
	{
		FText FoundValue;
		FTextProperty* ValueProp = FindFProperty<FTextProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	return false; // we haven't found variable return false
}

bool UPSData::GetStructByName(UObject * Target, FName VarName, UScriptStruct *& OutValue)
{
	/*
	if (Target) //make sure Target was set in blueprints. 
	{
		UScriptStruct* FoundValue;
		UStructProperty* ValueProp = FindFProperty<UStructProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	*/
	return false; // we haven't found variable return false
}

bool UPSData::GetEnumByName(UObject * Target, FName VarName, uint8 & OutValue)
{
	/*
	if (Target) //make sure Target was set in blueprints. 
	{
		float FoundValue;
		UEnumProperty* ValueProp = FindFProperty<UEnumProperty>(Target->GetClass(), VarName);  // try to find float property in Target named VarName
		if (ValueProp) //if we found variable
		{
			FoundValue = ValueProp->GetPropertyValue_InContainer(Target);  // get the value from FloatProp
			OutValue = FoundValue;  // return float
			return true; // we can return
		}
	}
	*/
	return false; // we haven't found variable return false
}
