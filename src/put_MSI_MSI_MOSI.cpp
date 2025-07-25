/******************************
  Program "put_MSI_MSI_MOSI.m" compiled by "Caching Murphi Release 5.4.9"

  Murphi Last Compiled date: "Feb 11 2025"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9"
#define MURPHI_DATE "Feb 11 2025"
#define PROTOCOL_NAME "put_MSI_MSI_MOSI"
#define BITS_IN_WORLD 8522
#define HASHC

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_Address: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_Address& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_Address& val)
    {
      if (val.defined())
	return ( s << mu_1_Address::values[ int(val) - 1 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_Address (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_Address (void): mu__byte(1, 1, 1) {};
  mu_1_Address (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -1]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 1] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_Address& a, mu_1_Address& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_Address::values[] =
  { "Address_1",NULL };

/*** end scalarset declaration ***/
mu_1_Address mu_1_Address_undefined_var;

class mu_1_ClValue: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_ClValue& val) { return mu__byte::operator=((int) val); };
  mu_1_ClValue (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1_ClValue (void): mu__byte(0, 1, 2) {};
  mu_1_ClValue (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_ClValue mu_1_ClValue_undefined_var;

class mu_1_PermissionType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_PermissionType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_PermissionType& val)
  {
    if (val.defined())
      return ( s << mu_1_PermissionType::values[ int(val) - 2] );
    else return ( s << "Undefined" );
  };

  mu_1_PermissionType (const char *name, int os): mu__byte(2, 5, 3, name, os) {};
  mu_1_PermissionType (void): mu__byte(2, 5, 3) {};
  mu_1_PermissionType (int val): mu__byte(2, 5, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -2]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -2] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_PermissionType::values[] = {"load","store","evict","none",NULL };

/*** end of enum declaration ***/
mu_1_PermissionType mu_1_PermissionType_undefined_var;

class mu_1_MessageType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MessageType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MessageType& val)
  {
    if (val.defined())
      return ( s << mu_1_MessageType::values[ int(val) - 6] );
    else return ( s << "Undefined" );
  };

  mu_1_MessageType (const char *name, int os): mu__byte(6, 47, 6, name, os) {};
  mu_1_MessageType (void): mu__byte(6, 47, 6) {};
  mu_1_MessageType (int val): mu__byte(6, 47, 6, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -6]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -6] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MessageType::values[] = {"GetSL1_2","GetML1_2","PutSL1_2","Inv_AckL1_2","GetM_Ack_DL1_2","GetS_AckL1_2","WBL1_2","PutML1_2","GetM_Ack_ADL1_2","InvL1_2","Put_AckL1_2","Fwd_GetSL1_2","Fwd_GetML1_2","GetSL1_2load","GetML1_2store","GetSL1_1","GetML1_1","PutSL1_1","Inv_AckL1_1","GetM_Ack_DL1_1","GetS_AckL1_1","WBL1_1","PutML1_1","GetM_Ack_ADL1_1","InvL1_1","Put_AckL1_1","Fwd_GetSL1_1","Fwd_GetML1_1","GetSL1_1load","GetML1_1store","GetSL2","GetML2","PutSL2","Inv_AckL2","GetM_Ack_DL2","GetS_AckL2","PutML2","GetM_Ack_ADL2","InvL2","Put_AckL2","Fwd_GetSL2","Fwd_GetML2",NULL };

/*** end of enum declaration ***/
mu_1_MessageType mu_1_MessageType_undefined_var;

class mu_1_s_directoryL2: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_s_directoryL2& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_s_directoryL2& val)
  {
    if (val.defined())
      return ( s << mu_1_s_directoryL2::values[ int(val) - 48] );
    else return ( s << "Undefined" );
  };

  mu_1_s_directoryL2 (const char *name, int os): mu__byte(48, 51, 3, name, os) {};
  mu_1_s_directoryL2 (void): mu__byte(48, 51, 3) {};
  mu_1_s_directoryL2 (int val): mu__byte(48, 51, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -48]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -48] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_s_directoryL2::values[] = {"directoryL2_S","directoryL2_O","directoryL2_M","directoryL2_I",NULL };

/*** end of enum declaration ***/
mu_1_s_directoryL2 mu_1_s_directoryL2_undefined_var;

class mu_1_s_directoryL1_1: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_s_directoryL1_1& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_s_directoryL1_1& val)
  {
    if (val.defined())
      return ( s << mu_1_s_directoryL1_1::values[ int(val) - 52] );
    else return ( s << "Undefined" );
  };

  mu_1_s_directoryL1_1 (const char *name, int os): mu__byte(52, 90, 6, name, os) {};
  mu_1_s_directoryL1_1 (void): mu__byte(52, 90, 6) {};
  mu_1_s_directoryL1_1 (int val): mu__byte(52, 90, 6, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -52]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -52] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_s_directoryL1_1::values[] = {"directoryL1_1_mevict__dM_x_pI_store__C__M","directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S","directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__O","directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M","directoryL1_1_mevict__I__C__S_evict_x_I","directoryL1_1_mevict__I__C__S_evict","directoryL1_1_mevict__I__C__O_evict_x_I","directoryL1_1_mevict__I__C__O_evict","directoryL1_1_mevict__I__C__M_evict_x_I","directoryL1_1_mevict__I__C__M_evict","directoryL1_1_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S","directoryL1_1_mGetSL1_1__M_GetS__C__M","directoryL1_1_mGetSL1_1__I__C__I_load","directoryL1_1_mGetML1_1__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S","directoryL1_1_mGetML1_1__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O","directoryL1_1_mGetML1_1__S__C__S_store_GetM_Ack_AD","directoryL1_1_mGetML1_1__S__C__S_store","directoryL1_1_mGetML1_1__S__C__O_store_GetM_Ack_AD","directoryL1_1_mGetML1_1__S__C__O_store","directoryL1_1_mGetML1_1__I__C__S_store_GetM_Ack_AD","directoryL1_1_mGetML1_1__I__C__S_store","directoryL1_1_mGetML1_1__I__C__O_store_GetM_Ack_AD","directoryL1_1_mGetML1_1__I__C__O_store","directoryL1_1_mGetML1_1__I__C__I_store_GetM_Ack_AD","directoryL1_1_mGetML1_1__I__C__I_store","directoryL1_1_mFwd_GetSL2__dS_x_pI_load__C__M","directoryL1_1_mFwd_GetSL2__dM_GetS_x_pS__C__M","directoryL1_1_mFwd_GetSL2__dM_GetS_x_pI_load__C__M","directoryL1_1_mFwd_GetML2__dM_x_pI_store__C__M","directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O","directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M","directoryL1_1_S__C__S","directoryL1_1_S__C__O","directoryL1_1_S__C__M","directoryL1_1_M__C__M","directoryL1_1_I__C__S","directoryL1_1_I__C__O","directoryL1_1_I__C__M","directoryL1_1_I__C__I",NULL };

/*** end of enum declaration ***/
mu_1_s_directoryL1_1 mu_1_s_directoryL1_1_undefined_var;

class mu_1_s_cacheL1_2: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_s_cacheL1_2& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_s_cacheL1_2& val)
  {
    if (val.defined())
      return ( s << mu_1_s_cacheL1_2::values[ int(val) - 91] );
    else return ( s << "Undefined" );
  };

  mu_1_s_cacheL1_2 (const char *name, int os): mu__byte(91, 102, 4, name, os) {};
  mu_1_s_cacheL1_2 (void): mu__byte(91, 102, 4) {};
  mu_1_s_cacheL1_2 (int val): mu__byte(91, 102, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -91]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -91] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_s_cacheL1_2::values[] = {"cacheL1_2_S_store_GetM_Ack_AD","cacheL1_2_S_store","cacheL1_2_S_evict_x_I","cacheL1_2_S_evict","cacheL1_2_S","cacheL1_2_M_evict_x_I","cacheL1_2_M_evict","cacheL1_2_M","cacheL1_2_I_store_GetM_Ack_AD","cacheL1_2_I_store","cacheL1_2_I_load","cacheL1_2_I",NULL };

/*** end of enum declaration ***/
mu_1_s_cacheL1_2 mu_1_s_cacheL1_2_undefined_var;

class mu_1_s_directoryL1_2: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_s_directoryL1_2& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_s_directoryL1_2& val)
  {
    if (val.defined())
      return ( s << mu_1_s_directoryL1_2::values[ int(val) - 103] );
    else return ( s << "Undefined" );
  };

  mu_1_s_directoryL1_2 (const char *name, int os): mu__byte(103, 141, 6, name, os) {};
  mu_1_s_directoryL1_2 (void): mu__byte(103, 141, 6) {};
  mu_1_s_directoryL1_2 (int val): mu__byte(103, 141, 6, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -103]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -103] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_s_directoryL1_2::values[] = {"directoryL1_2_mevict__dM_x_pI_store__C__M","directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S","directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__O","directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M","directoryL1_2_mevict__I__C__S_evict_x_I","directoryL1_2_mevict__I__C__S_evict","directoryL1_2_mevict__I__C__O_evict_x_I","directoryL1_2_mevict__I__C__O_evict","directoryL1_2_mevict__I__C__M_evict_x_I","directoryL1_2_mevict__I__C__M_evict","directoryL1_2_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S","directoryL1_2_mGetSL1_2__M_GetS__C__M","directoryL1_2_mGetSL1_2__I__C__I_load","directoryL1_2_mGetML1_2__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S","directoryL1_2_mGetML1_2__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O","directoryL1_2_mGetML1_2__S__C__S_store_GetM_Ack_AD","directoryL1_2_mGetML1_2__S__C__S_store","directoryL1_2_mGetML1_2__S__C__O_store_GetM_Ack_AD","directoryL1_2_mGetML1_2__S__C__O_store","directoryL1_2_mGetML1_2__I__C__S_store_GetM_Ack_AD","directoryL1_2_mGetML1_2__I__C__S_store","directoryL1_2_mGetML1_2__I__C__O_store_GetM_Ack_AD","directoryL1_2_mGetML1_2__I__C__O_store","directoryL1_2_mGetML1_2__I__C__I_store_GetM_Ack_AD","directoryL1_2_mGetML1_2__I__C__I_store","directoryL1_2_mFwd_GetSL2__dS_x_pI_load__C__M","directoryL1_2_mFwd_GetSL2__dM_GetS_x_pS__C__M","directoryL1_2_mFwd_GetSL2__dM_GetS_x_pI_load__C__M","directoryL1_2_mFwd_GetML2__dM_x_pI_store__C__M","directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O","directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M","directoryL1_2_S__C__S","directoryL1_2_S__C__O","directoryL1_2_S__C__M","directoryL1_2_M__C__M","directoryL1_2_I__C__S","directoryL1_2_I__C__O","directoryL1_2_I__C__M","directoryL1_2_I__C__I",NULL };

/*** end of enum declaration ***/
mu_1_s_directoryL1_2 mu_1_s_directoryL1_2_undefined_var;

class mu_1_s_cacheL1_1: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_s_cacheL1_1& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_s_cacheL1_1& val)
  {
    if (val.defined())
      return ( s << mu_1_s_cacheL1_1::values[ int(val) - 142] );
    else return ( s << "Undefined" );
  };

  mu_1_s_cacheL1_1 (const char *name, int os): mu__byte(142, 153, 4, name, os) {};
  mu_1_s_cacheL1_1 (void): mu__byte(142, 153, 4) {};
  mu_1_s_cacheL1_1 (int val): mu__byte(142, 153, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -142]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -142] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_s_cacheL1_1::values[] = {"cacheL1_1_S_store_GetM_Ack_AD","cacheL1_1_S_store","cacheL1_1_S_evict_x_I","cacheL1_1_S_evict","cacheL1_1_S","cacheL1_1_M_evict_x_I","cacheL1_1_M_evict","cacheL1_1_M","cacheL1_1_I_store_GetM_Ack_AD","cacheL1_1_I_store","cacheL1_1_I_load","cacheL1_1_I",NULL };

/*** end of enum declaration ***/
mu_1_s_cacheL1_1 mu_1_s_cacheL1_1_undefined_var;

class mu_1_OBJSET_directoryL2: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OBJSET_directoryL2& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OBJSET_directoryL2& val)
  {
    if (val.defined())
      return ( s << mu_1_OBJSET_directoryL2::values[ int(val) - 154] );
    else return ( s << "Undefined" );
  };

  mu_1_OBJSET_directoryL2 (const char *name, int os): mu__byte(154, 154, 1, name, os) {};
  mu_1_OBJSET_directoryL2 (void): mu__byte(154, 154, 1) {};
  mu_1_OBJSET_directoryL2 (int val): mu__byte(154, 154, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -154]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -154] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_OBJSET_directoryL2::values[] = {"directoryL2",NULL };

/*** end of enum declaration ***/
mu_1_OBJSET_directoryL2 mu_1_OBJSET_directoryL2_undefined_var;

class mu_1_OBJSET_directoryL1_1: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OBJSET_directoryL1_1& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OBJSET_directoryL1_1& val)
  {
    if (val.defined())
      return ( s << mu_1_OBJSET_directoryL1_1::values[ int(val) - 155] );
    else return ( s << "Undefined" );
  };

  mu_1_OBJSET_directoryL1_1 (const char *name, int os): mu__byte(155, 155, 1, name, os) {};
  mu_1_OBJSET_directoryL1_1 (void): mu__byte(155, 155, 1) {};
  mu_1_OBJSET_directoryL1_1 (int val): mu__byte(155, 155, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -155]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -155] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_OBJSET_directoryL1_1::values[] = {"directoryL1_1",NULL };

/*** end of enum declaration ***/
mu_1_OBJSET_directoryL1_1 mu_1_OBJSET_directoryL1_1_undefined_var;

class mu_1_OBJSET_cacheL1_2: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OBJSET_cacheL1_2& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OBJSET_cacheL1_2& val)
    {
      if (val.defined())
	return ( s << mu_1_OBJSET_cacheL1_2::values[ int(val) - 156 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_OBJSET_cacheL1_2 (const char *name, int os): mu__byte(156, 157, 2, name, os) {};
  mu_1_OBJSET_cacheL1_2 (void): mu__byte(156, 157, 2) {};
  mu_1_OBJSET_cacheL1_2 (int val): mu__byte(156, 157, 2, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -156]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 156] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_OBJSET_cacheL1_2& a, mu_1_OBJSET_cacheL1_2& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_OBJSET_cacheL1_2::values[] =
  { "OBJSET_cacheL1_2_1","OBJSET_cacheL1_2_2",NULL };

/*** end scalarset declaration ***/
mu_1_OBJSET_cacheL1_2 mu_1_OBJSET_cacheL1_2_undefined_var;

class mu_1_OBJSET_directoryL1_2: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OBJSET_directoryL1_2& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OBJSET_directoryL1_2& val)
  {
    if (val.defined())
      return ( s << mu_1_OBJSET_directoryL1_2::values[ int(val) - 158] );
    else return ( s << "Undefined" );
  };

  mu_1_OBJSET_directoryL1_2 (const char *name, int os): mu__byte(158, 158, 1, name, os) {};
  mu_1_OBJSET_directoryL1_2 (void): mu__byte(158, 158, 1) {};
  mu_1_OBJSET_directoryL1_2 (int val): mu__byte(158, 158, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -158]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -158] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_OBJSET_directoryL1_2::values[] = {"directoryL1_2",NULL };

/*** end of enum declaration ***/
mu_1_OBJSET_directoryL1_2 mu_1_OBJSET_directoryL1_2_undefined_var;

class mu_1_OBJSET_cacheL1_1: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OBJSET_cacheL1_1& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OBJSET_cacheL1_1& val)
    {
      if (val.defined())
	return ( s << mu_1_OBJSET_cacheL1_1::values[ int(val) - 159 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_OBJSET_cacheL1_1 (const char *name, int os): mu__byte(159, 160, 2, name, os) {};
  mu_1_OBJSET_cacheL1_1 (void): mu__byte(159, 160, 2) {};
  mu_1_OBJSET_cacheL1_1 (int val): mu__byte(159, 160, 2, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -159]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 159] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_OBJSET_cacheL1_1& a, mu_1_OBJSET_cacheL1_1& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_OBJSET_cacheL1_1::values[] =
  { "OBJSET_cacheL1_1_1","OBJSET_cacheL1_1_2",NULL };

/*** end scalarset declaration ***/
mu_1_OBJSET_cacheL1_1 mu_1_OBJSET_cacheL1_1_undefined_var;

class mu_1_C1Machines: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_C1Machines& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_C1Machines& val)
    {
      if (val.defined())
	return ( s << mu_1_C1Machines::values[ val.indexvalue() ] );
      else
	return ( s << "Undefined" );
    };

  // note thate lb and ub are not used if we have byte compacted state.
  mu_1_C1Machines (const char *name, int os): mu__byte(0, 6, 3, name, os) {};
  mu_1_C1Machines (void): mu__byte(0, 6, 3) {};
  mu_1_C1Machines (int val): mu__byte(0, 6, 3, "Parameter or function result.", 0)
    { operator=(val); };
  int value() const
  {
    int val = mu__byte::value();
    // val == -1 if value undefined
    // we can return it since no enum/scalarsetid will have value -1
    if (val == -1) return -1;
    if (val <= 0) return val+154;
    if (val <= 1) return val+154;
    if (val <= 3) return val+154;
    if (val <= 4) return val+154;
    if (val <= 6) return val+154;
  }
  inline int value(int val)
  {
    if (val == -1) { undefine(); return -1; }
    if ((val >= 154) && (val <= 154)) return (mu__byte::value(val-154)+154);
    if ((val >= 155) && (val <= 155)) return (mu__byte::value(val-154)+154);
    if ((val >= 156) && (val <= 157)) return (mu__byte::value(val-154)+154);
    if ((val >= 158) && (val <= 158)) return (mu__byte::value(val-154)+154);
    if ((val >= 159) && (val <= 160)) return (mu__byte::value(val-154)+154);
  }
  inline int indexvalue() const
  {
    return mu__byte::value();
  };
  inline int unionassign(int val)
  {
    return mu__byte::value(val);
  };
  const char * Name() { return values[ indexvalue() ]; };
friend int CompareWeight(mu_1_C1Machines& a, mu_1_C1Machines& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ indexvalue() ] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
};
const char *mu_1_C1Machines::values[] = {"directoryL2","directoryL1_1","OBJSET_cacheL1_2_1","OBJSET_cacheL1_2_2","directoryL1_2","OBJSET_cacheL1_1_1","OBJSET_cacheL1_1_2",NULL };

/*** end union declaration ***/
mu_1_C1Machines mu_1_C1Machines_undefined_var;

class mu_1_Machines: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_Machines& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_Machines& val)
    {
      if (val.defined())
	return ( s << mu_1_Machines::values[ val.indexvalue() ] );
      else
	return ( s << "Undefined" );
    };

  // note thate lb and ub are not used if we have byte compacted state.
  mu_1_Machines (const char *name, int os): mu__byte(0, 6, 3, name, os) {};
  mu_1_Machines (void): mu__byte(0, 6, 3) {};
  mu_1_Machines (int val): mu__byte(0, 6, 3, "Parameter or function result.", 0)
    { operator=(val); };
  int value() const
  {
    int val = mu__byte::value();
    // val == -1 if value undefined
    // we can return it since no enum/scalarsetid will have value -1
    if (val == -1) return -1;
    if (val <= 0) return val+154;
    if (val <= 1) return val+154;
    if (val <= 3) return val+154;
    if (val <= 4) return val+154;
    if (val <= 6) return val+154;
  }
  inline int value(int val)
  {
    if (val == -1) { undefine(); return -1; }
    if ((val >= 154) && (val <= 154)) return (mu__byte::value(val-154)+154);
    if ((val >= 155) && (val <= 155)) return (mu__byte::value(val-154)+154);
    if ((val >= 156) && (val <= 157)) return (mu__byte::value(val-154)+154);
    if ((val >= 158) && (val <= 158)) return (mu__byte::value(val-154)+154);
    if ((val >= 159) && (val <= 160)) return (mu__byte::value(val-154)+154);
  }
  inline int indexvalue() const
  {
    return mu__byte::value();
  };
  inline int unionassign(int val)
  {
    return mu__byte::value(val);
  };
  const char * Name() { return values[ indexvalue() ]; };
friend int CompareWeight(mu_1_Machines& a, mu_1_Machines& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ indexvalue() ] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
};
const char *mu_1_Machines::values[] = {"directoryL2","directoryL1_1","OBJSET_cacheL1_2_1","OBJSET_cacheL1_2_2","directoryL1_2","OBJSET_cacheL1_1_1","OBJSET_cacheL1_1_2",NULL };

/*** end union declaration ***/
mu_1_Machines mu_1_Machines_undefined_var;

/*** begin multiset declaration ***/
class mu_1_acc_type_obj_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_acc_type_obj_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1_acc_type_obj_id () : mu__byte(0,2,0) {};
  mu_1_acc_type_obj_id (int val) : mu__byte(0,2,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1_acc_type_obj
{
 public:
  mu_1_PermissionType array[ 3 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 3 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_acc_type_obj (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1_acc_type_obj ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1_acc_type_obj ();
  mu_1_PermissionType& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 2) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1_acc_type_obj& operator= (const mu_1_acc_type_obj& from)
  {
    for (int i = 0; i < 3; i++)
    {
        array[i].value(from.array[i].value());
        valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1_acc_type_obj& a, mu_1_acc_type_obj& b)
  {
    return 0;
  }
friend int Compare(mu_1_acc_type_obj& a, mu_1_acc_type_obj& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 3; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 3; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1_acc_type_obj_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 3; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 3; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_PermissionType &element)
  {
    update_size();
    if (current_size >= 3) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 3; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1_acc_type_obj_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_PermissionType temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 3; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 3; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 3; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1_acc_type_obj::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_acc_type_obj::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_acc_type_obj::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 3; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 3 + os); else array[i].set_self(NULL, 0);
  k = os + i * 3;
  for(i = 0; i < 3; i++)
    valid[i].set_self("", i * 2 + k);
};
mu_1_acc_type_obj::~mu_1_acc_type_obj()
{
}
/*** end multiset declaration ***/
mu_1_acc_type_obj mu_1_acc_type_obj_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_acc_type_obj array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_acc_type_obj& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: Address is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"Address_1", i * 15 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_PermMonitor
{
 public:
  mu_1__type_0 array[ 7 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_PermMonitor (const char *n, int os) { set_self(n, os); };
  mu_1_PermMonitor ( void ) {};
  virtual ~mu_1_PermMonitor ();
  mu_1__type_0& operator[] (int index) /* const */
  {
    if ( ( index >= 154 ) && ( index <= 154 ) )
      return array[ index - (154) ];
    if ( ( index >= 155 ) && ( index <= 155 ) )
      return array[ index - (154) ];
    if ( ( index >= 156 ) && ( index <= 157 ) )
      return array[ index - (154) ];
    if ( ( index >= 158 ) && ( index <= 158 ) )
      return array[ index - (154) ];
    if ( ( index >= 159 ) && ( index <= 160 ) )
      return array[ index - (154) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1_PermMonitor& operator= (const mu_1_PermMonitor& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_PermMonitor& a, mu_1_PermMonitor& b)
  {
    return 0;
  }
friend int Compare(mu_1_PermMonitor& a, mu_1_PermMonitor& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 7; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 7; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_PermMonitor::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_PermMonitor::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_PermMonitor::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directoryL2", i * 15 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directoryL1_1", i * 15 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_1", i * 15 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_2", i * 15 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directoryL1_2", i * 15 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_1", i * 15 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_2", i * 15 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1_PermMonitor::~mu_1_PermMonitor()
{
}
/*** end array declaration ***/
mu_1_PermMonitor mu_1_PermMonitor_undefined_var;

class mu_1__type_1: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_1& val) { return mu__byte::operator=((int) val); };
  mu_1__type_1 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_1 (void): mu__byte(0, 3, 3) {};
  mu_1__type_1 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_2& val) { return mu__byte::operator=((int) val); };
  mu_1__type_2 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_2 (void): mu__byte(0, 3, 3) {};
  mu_1__type_2 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_3& val) { return mu__byte::operator=((int) val); };
  mu_1__type_3 (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1__type_3 (void): mu__byte(0, 4, 3) {};
  mu_1__type_3 (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1_Message
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_Address mu_adr;
  mu_1_MessageType mu_mtype;
  mu_1_Machines mu_src;
  mu_1_Machines mu_dst;
  mu_1_ClValue mu_cl;
  mu_1__type_1 mu_acksRequiredL1_2;
  mu_1__type_2 mu_acksRequiredL1_1;
  mu_1__type_3 mu_acksExpectedL2;
  mu_1_Message ( const char *n, int os ) { set_self(n,os); };
  mu_1_Message ( void ) {};

  virtual ~mu_1_Message(); 
friend int CompareWeight(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = CompareWeight(a.mu_adr, b.mu_adr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_mtype, b.mu_mtype);
    if (w!=0) return w;
    w = CompareWeight(a.mu_src, b.mu_src);
    if (w!=0) return w;
    w = CompareWeight(a.mu_dst, b.mu_dst);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksRequiredL1_2, b.mu_acksRequiredL1_2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksRequiredL1_1, b.mu_acksRequiredL1_1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksExpectedL2, b.mu_acksExpectedL2);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = Compare(a.mu_adr, b.mu_adr);
    if (w!=0) return w;
    w = Compare(a.mu_mtype, b.mu_mtype);
    if (w!=0) return w;
    w = Compare(a.mu_src, b.mu_src);
    if (w!=0) return w;
    w = Compare(a.mu_dst, b.mu_dst);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_acksRequiredL1_2, b.mu_acksRequiredL1_2);
    if (w!=0) return w;
    w = Compare(a.mu_acksRequiredL1_1, b.mu_acksRequiredL1_1);
    if (w!=0) return w;
    w = Compare(a.mu_acksExpectedL2, b.mu_acksExpectedL2);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_adr.MultisetSort();
    mu_mtype.MultisetSort();
    mu_src.MultisetSort();
    mu_dst.MultisetSort();
    mu_cl.MultisetSort();
    mu_acksRequiredL1_2.MultisetSort();
    mu_acksRequiredL1_1.MultisetSort();
    mu_acksExpectedL2.MultisetSort();
  }
  void print_statistic()
  {
    mu_adr.print_statistic();
    mu_mtype.print_statistic();
    mu_src.print_statistic();
    mu_dst.print_statistic();
    mu_cl.print_statistic();
    mu_acksRequiredL1_2.print_statistic();
    mu_acksRequiredL1_1.print_statistic();
    mu_acksExpectedL2.print_statistic();
  }
  void clear() {
    mu_adr.clear();
    mu_mtype.clear();
    mu_src.clear();
    mu_dst.clear();
    mu_cl.clear();
    mu_acksRequiredL1_2.clear();
    mu_acksRequiredL1_1.clear();
    mu_acksExpectedL2.clear();
 };
  void undefine() {
    mu_adr.undefine();
    mu_mtype.undefine();
    mu_src.undefine();
    mu_dst.undefine();
    mu_cl.undefine();
    mu_acksRequiredL1_2.undefine();
    mu_acksRequiredL1_1.undefine();
    mu_acksExpectedL2.undefine();
 };
  void reset() {
    mu_adr.reset();
    mu_mtype.reset();
    mu_src.reset();
    mu_dst.reset();
    mu_cl.reset();
    mu_acksRequiredL1_2.reset();
    mu_acksRequiredL1_1.reset();
    mu_acksExpectedL2.reset();
 };
  void print() {
    mu_adr.print();
    mu_mtype.print();
    mu_src.print();
    mu_dst.print();
    mu_cl.print();
    mu_acksRequiredL1_2.print();
    mu_acksRequiredL1_1.print();
    mu_acksExpectedL2.print();
  };
  void print_diff(state *prevstate) {
    mu_adr.print_diff(prevstate);
    mu_mtype.print_diff(prevstate);
    mu_src.print_diff(prevstate);
    mu_dst.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_acksRequiredL1_2.print_diff(prevstate);
    mu_acksRequiredL1_1.print_diff(prevstate);
    mu_acksExpectedL2.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_adr.to_state(thestate);
    mu_mtype.to_state(thestate);
    mu_src.to_state(thestate);
    mu_dst.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_acksRequiredL1_2.to_state(thestate);
    mu_acksRequiredL1_1.to_state(thestate);
    mu_acksExpectedL2.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_adr.value(from.mu_adr.value());
    mu_mtype.value(from.mu_mtype.value());
    mu_src.value(from.mu_src.value());
    mu_dst.value(from.mu_dst.value());
    mu_cl.value(from.mu_cl.value());
    mu_acksRequiredL1_2.value(from.mu_acksRequiredL1_2.value());
    mu_acksRequiredL1_1.value(from.mu_acksRequiredL1_1.value());
    mu_acksExpectedL2.value(from.mu_acksExpectedL2.value());
    return *this;
  };
};

  void mu_1_Message::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Message::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Message::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_adr.set_self_2(name, ".adr", os + 0 ); else mu_adr.set_self_2(NULL, NULL, 0);
  if (name) mu_mtype.set_self_2(name, ".mtype", os + 1 ); else mu_mtype.set_self_2(NULL, NULL, 0);
  if (name) mu_src.set_self_2(name, ".src", os + 7 ); else mu_src.set_self_2(NULL, NULL, 0);
  if (name) mu_dst.set_self_2(name, ".dst", os + 10 ); else mu_dst.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 13 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_acksRequiredL1_2.set_self_2(name, ".acksRequiredL1_2", os + 15 ); else mu_acksRequiredL1_2.set_self_2(NULL, NULL, 0);
  if (name) mu_acksRequiredL1_1.set_self_2(name, ".acksRequiredL1_1", os + 18 ); else mu_acksRequiredL1_1.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpectedL2.set_self_2(name, ".acksExpectedL2", os + 21 ); else mu_acksExpectedL2.set_self_2(NULL, NULL, 0);
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu__subrange_26: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_26& val) { return mu__byte::operator=((int) val); };
  mu__subrange_26 (const char *name, int os): mu__byte(0, 15, 5, name, os) {};
  mu__subrange_26 (void): mu__byte(0, 15, 5) {};
  mu__subrange_26 (int val): mu__byte(0, 15, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu__subrange_26 mu__subrange_26_undefined_var;

class mu_1__type_4
{
 public:
  mu_1_Message array[ 16 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 15 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 16; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 16; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 24 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1_NET_Ordered
{
 public:
  mu_1__type_4 array[ 7 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_NET_Ordered (const char *n, int os) { set_self(n, os); };
  mu_1_NET_Ordered ( void ) {};
  virtual ~mu_1_NET_Ordered ();
  mu_1__type_4& operator[] (int index) /* const */
  {
    if ( ( index >= 154 ) && ( index <= 154 ) )
      return array[ index - (154) ];
    if ( ( index >= 155 ) && ( index <= 155 ) )
      return array[ index - (154) ];
    if ( ( index >= 156 ) && ( index <= 157 ) )
      return array[ index - (154) ];
    if ( ( index >= 158 ) && ( index <= 158 ) )
      return array[ index - (154) ];
    if ( ( index >= 159 ) && ( index <= 160 ) )
      return array[ index - (154) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1_NET_Ordered& operator= (const mu_1_NET_Ordered& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_NET_Ordered& a, mu_1_NET_Ordered& b)
  {
    return 0;
  }
friend int Compare(mu_1_NET_Ordered& a, mu_1_NET_Ordered& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 7; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 7; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_NET_Ordered::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_NET_Ordered::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_NET_Ordered::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directoryL2", i * 384 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directoryL1_1", i * 384 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_1", i * 384 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_2", i * 384 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directoryL1_2", i * 384 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_1", i * 384 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_2", i * 384 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1_NET_Ordered::~mu_1_NET_Ordered()
{
}
/*** end array declaration ***/
mu_1_NET_Ordered mu_1_NET_Ordered_undefined_var;

class mu_1__type_5: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_5& val) { return mu__byte::operator=((int) val); };
  mu_1__type_5 (const char *name, int os): mu__byte(0, 16, 5, name, os) {};
  mu_1__type_5 (void): mu__byte(0, 16, 5) {};
  mu_1__type_5 (int val): mu__byte(0, 16, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1_NET_Ordered_cnt
{
 public:
  mu_1__type_5 array[ 7 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_NET_Ordered_cnt (const char *n, int os) { set_self(n, os); };
  mu_1_NET_Ordered_cnt ( void ) {};
  virtual ~mu_1_NET_Ordered_cnt ();
  mu_1__type_5& operator[] (int index) /* const */
  {
    if ( ( index >= 154 ) && ( index <= 154 ) )
      return array[ index - (154) ];
    if ( ( index >= 155 ) && ( index <= 155 ) )
      return array[ index - (154) ];
    if ( ( index >= 156 ) && ( index <= 157 ) )
      return array[ index - (154) ];
    if ( ( index >= 158 ) && ( index <= 158 ) )
      return array[ index - (154) ];
    if ( ( index >= 159 ) && ( index <= 160 ) )
      return array[ index - (154) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1_NET_Ordered_cnt& operator= (const mu_1_NET_Ordered_cnt& from)
  {
    for (int i = 0; i < 7; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_NET_Ordered_cnt& a, mu_1_NET_Ordered_cnt& b)
  {
    return 0;
  }
friend int Compare(mu_1_NET_Ordered_cnt& a, mu_1_NET_Ordered_cnt& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 7; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 7; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_NET_Ordered_cnt::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_NET_Ordered_cnt::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_NET_Ordered_cnt::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directoryL2", i * 5 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directoryL1_1", i * 5 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_1", i * 5 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_2", i * 5 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directoryL1_2", i * 5 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_1", i * 5 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_2", i * 5 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1_NET_Ordered_cnt::~mu_1_NET_Ordered_cnt()
{
}
/*** end array declaration ***/
mu_1_NET_Ordered_cnt mu_1_NET_Ordered_cnt_undefined_var;

/*** begin multiset declaration ***/
class mu_1__type_6_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1__type_6_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1__type_6_id () : mu__byte(0,15,0) {};
  mu_1__type_6_id (int val) : mu__byte(0,15,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1__type_6
{
 public:
  mu_1_Message array[ 16 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 16 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1__type_6 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1__type_6 ();
  mu_1_Message& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 15) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 16; i++)
    {
       array[i] = from.array[i];
       valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 16; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 16; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 16; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 16; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 16; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1__type_6_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 16; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 16; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_Message &element)
  {
    update_size();
    if (current_size >= 16) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 16; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1__type_6_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_Message temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 16; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 16; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 16; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 16; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 24 + os); else array[i].set_self(NULL, 0);
  k = os + i * 24;
  for(i = 0; i < 16; i++)
    valid[i].set_self("", i * 2 + k);
};
mu_1__type_6::~mu_1__type_6()
{
}
/*** end multiset declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1_NET_Unordered
{
 public:
  mu_1__type_6 array[ 7 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_NET_Unordered (const char *n, int os) { set_self(n, os); };
  mu_1_NET_Unordered ( void ) {};
  virtual ~mu_1_NET_Unordered ();
  mu_1__type_6& operator[] (int index) /* const */
  {
    if ( ( index >= 154 ) && ( index <= 154 ) )
      return array[ index - (154) ];
    if ( ( index >= 155 ) && ( index <= 155 ) )
      return array[ index - (154) ];
    if ( ( index >= 156 ) && ( index <= 157 ) )
      return array[ index - (154) ];
    if ( ( index >= 158 ) && ( index <= 158 ) )
      return array[ index - (154) ];
    if ( ( index >= 159 ) && ( index <= 160 ) )
      return array[ index - (154) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1_NET_Unordered& operator= (const mu_1_NET_Unordered& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_NET_Unordered& a, mu_1_NET_Unordered& b)
  {
    return 0;
  }
friend int Compare(mu_1_NET_Unordered& a, mu_1_NET_Unordered& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 7; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 7; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_NET_Unordered::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_NET_Unordered::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_NET_Unordered::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directoryL2", i * 416 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directoryL1_1", i * 416 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_1", i * 416 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_2", i * 416 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directoryL1_2", i * 416 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_1", i * 416 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_2", i * 416 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1_NET_Unordered::~mu_1_NET_Unordered()
{
}
/*** end array declaration ***/
mu_1_NET_Unordered mu_1_NET_Unordered_undefined_var;

/*** begin multiset declaration ***/
class mu_1_v_sharersL2_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_v_sharersL2_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1_v_sharersL2_id () : mu__byte(0,3,0) {};
  mu_1_v_sharersL2_id (int val) : mu__byte(0,3,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1_v_sharersL2
{
 public:
  mu_1_Machines array[ 4 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 4 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_v_sharersL2 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1_v_sharersL2 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1_v_sharersL2 ();
  mu_1_Machines& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 3) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1_v_sharersL2& operator= (const mu_1_v_sharersL2& from)
  {
    for (int i = 0; i < 4; i++)
    {
        array[i].value(from.array[i].value());
        valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1_v_sharersL2& a, mu_1_v_sharersL2& b)
  {
    return 0;
  }
friend int Compare(mu_1_v_sharersL2& a, mu_1_v_sharersL2& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 4; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 4; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 4; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 4; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 4; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1_v_sharersL2_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 4; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 4; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_Machines &element)
  {
    update_size();
    if (current_size >= 4) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 4; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1_v_sharersL2_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_Machines temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 4; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 4; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 4; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1_v_sharersL2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_v_sharersL2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_v_sharersL2::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 4; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 3 + os); else array[i].set_self(NULL, 0);
  k = os + i * 3;
  for(i = 0; i < 4; i++)
    valid[i].set_self("", i * 2 + k);
};
mu_1_v_sharersL2::~mu_1_v_sharersL2()
{
}
/*** end multiset declaration ***/
mu_1_v_sharersL2 mu_1_v_sharersL2_undefined_var;

class mu_1_cnt_v_sharersL2: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_cnt_v_sharersL2& val) { return mu__byte::operator=((int) val); };
  mu_1_cnt_v_sharersL2 (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1_cnt_v_sharersL2 (void): mu__byte(0, 4, 3) {};
  mu_1_cnt_v_sharersL2 (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_cnt_v_sharersL2 mu_1_cnt_v_sharersL2_undefined_var;

class mu_1_ENTRY_directoryL2
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_s_directoryL2 mu_State;
  mu_1_ClValue mu_cl;
  mu_1_v_sharersL2 mu_sharersL2;
  mu_1_Machines mu_ownerL2;
  mu_1_ENTRY_directoryL2 ( const char *n, int os ) { set_self(n,os); };
  mu_1_ENTRY_directoryL2 ( void ) {};

  virtual ~mu_1_ENTRY_directoryL2(); 
friend int CompareWeight(mu_1_ENTRY_directoryL2& a, mu_1_ENTRY_directoryL2& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sharersL2, b.mu_sharersL2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ownerL2, b.mu_ownerL2);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ENTRY_directoryL2& a, mu_1_ENTRY_directoryL2& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_sharersL2, b.mu_sharersL2);
    if (w!=0) return w;
    w = Compare(a.mu_ownerL2, b.mu_ownerL2);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_State.MultisetSort();
    mu_cl.MultisetSort();
    mu_sharersL2.MultisetSort();
    mu_ownerL2.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_cl.print_statistic();
    mu_sharersL2.print_statistic();
    mu_ownerL2.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_cl.clear();
    mu_sharersL2.clear();
    mu_ownerL2.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_cl.undefine();
    mu_sharersL2.undefine();
    mu_ownerL2.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_cl.reset();
    mu_sharersL2.reset();
    mu_ownerL2.reset();
 };
  void print() {
    mu_State.print();
    mu_cl.print();
    mu_sharersL2.print();
    mu_ownerL2.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_sharersL2.print_diff(prevstate);
    mu_ownerL2.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_sharersL2.to_state(thestate);
    mu_ownerL2.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ENTRY_directoryL2& operator= (const mu_1_ENTRY_directoryL2& from) {
    mu_State.value(from.mu_State.value());
    mu_cl.value(from.mu_cl.value());
    mu_sharersL2 = from.mu_sharersL2;
    mu_ownerL2.value(from.mu_ownerL2.value());
    return *this;
  };
};

  void mu_1_ENTRY_directoryL2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ENTRY_directoryL2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ENTRY_directoryL2::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 3 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_sharersL2.set_self_2(name, ".sharersL2", os + 5 ); else mu_sharersL2.set_self_2(NULL, NULL, 0);
  if (name) mu_ownerL2.set_self_2(name, ".ownerL2", os + 25 ); else mu_ownerL2.set_self_2(NULL, NULL, 0);
}

mu_1_ENTRY_directoryL2::~mu_1_ENTRY_directoryL2()
{
}

/*** end record declaration ***/
mu_1_ENTRY_directoryL2 mu_1_ENTRY_directoryL2_undefined_var;

class mu_1__type_7
{
 public:
  mu_1_ENTRY_directoryL2 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_1_ENTRY_directoryL2& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: Address is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"Address_1", i * 28 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1_MACH_directoryL2
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_7 mu_cb;
  mu_1_MACH_directoryL2 ( const char *n, int os ) { set_self(n,os); };
  mu_1_MACH_directoryL2 ( void ) {};

  virtual ~mu_1_MACH_directoryL2(); 
friend int CompareWeight(mu_1_MACH_directoryL2& a, mu_1_MACH_directoryL2& b)
  {
    int w;
    w = CompareWeight(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MACH_directoryL2& a, mu_1_MACH_directoryL2& b)
  {
    int w;
    w = Compare(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_cb.MultisetSort();
  }
  void print_statistic()
  {
    mu_cb.print_statistic();
  }
  void clear() {
    mu_cb.clear();
 };
  void undefine() {
    mu_cb.undefine();
 };
  void reset() {
    mu_cb.reset();
 };
  void print() {
    mu_cb.print();
  };
  void print_diff(state *prevstate) {
    mu_cb.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cb.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MACH_directoryL2& operator= (const mu_1_MACH_directoryL2& from) {
    mu_cb = from.mu_cb;
    return *this;
  };
};

  void mu_1_MACH_directoryL2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MACH_directoryL2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MACH_directoryL2::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cb.set_self_2(name, ".cb", os + 0 ); else mu_cb.set_self_2(NULL, NULL, 0);
}

mu_1_MACH_directoryL2::~mu_1_MACH_directoryL2()
{
}

/*** end record declaration ***/
mu_1_MACH_directoryL2 mu_1_MACH_directoryL2_undefined_var;

class mu_1_OBJ_directoryL2
{
 public:
  mu_1_MACH_directoryL2 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_directoryL2 (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_directoryL2 ( void ) {};
  virtual ~mu_1_OBJ_directoryL2 ();
  mu_1_MACH_directoryL2& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 154 ) && ( index <= 154 ) )
      return array[ index - 154 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 154 ];
#endif
  };
  mu_1_OBJ_directoryL2& operator= (const mu_1_OBJ_directoryL2& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_directoryL2& a, mu_1_OBJ_directoryL2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_directoryL2& a, mu_1_OBJ_directoryL2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_OBJ_directoryL2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_directoryL2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1_OBJ_directoryL2::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directoryL2", i * 28 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1_OBJ_directoryL2::~mu_1_OBJ_directoryL2()
{
}
/*** end array declaration ***/
mu_1_OBJ_directoryL2 mu_1_OBJ_directoryL2_undefined_var;

/*** begin multiset declaration ***/
class mu_1_v_sharersL1_1_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_v_sharersL1_1_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1_v_sharersL1_1_id () : mu__byte(0,2,0) {};
  mu_1_v_sharersL1_1_id (int val) : mu__byte(0,2,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1_v_sharersL1_1
{
 public:
  mu_1_Machines array[ 3 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 3 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_v_sharersL1_1 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1_v_sharersL1_1 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1_v_sharersL1_1 ();
  mu_1_Machines& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 2) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1_v_sharersL1_1& operator= (const mu_1_v_sharersL1_1& from)
  {
    for (int i = 0; i < 3; i++)
    {
        array[i].value(from.array[i].value());
        valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1_v_sharersL1_1& a, mu_1_v_sharersL1_1& b)
  {
    return 0;
  }
friend int Compare(mu_1_v_sharersL1_1& a, mu_1_v_sharersL1_1& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 3; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 3; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1_v_sharersL1_1_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 3; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 3; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_Machines &element)
  {
    update_size();
    if (current_size >= 3) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 3; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1_v_sharersL1_1_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_Machines temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 3; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 3; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 3; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1_v_sharersL1_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_v_sharersL1_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_v_sharersL1_1::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 3; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 3 + os); else array[i].set_self(NULL, 0);
  k = os + i * 3;
  for(i = 0; i < 3; i++)
    valid[i].set_self("", i * 2 + k);
};
mu_1_v_sharersL1_1::~mu_1_v_sharersL1_1()
{
}
/*** end multiset declaration ***/
mu_1_v_sharersL1_1 mu_1_v_sharersL1_1_undefined_var;

class mu_1_cnt_v_sharersL1_1: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_cnt_v_sharersL1_1& val) { return mu__byte::operator=((int) val); };
  mu_1_cnt_v_sharersL1_1 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1_cnt_v_sharersL1_1 (void): mu__byte(0, 3, 3) {};
  mu_1_cnt_v_sharersL1_1 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_cnt_v_sharersL1_1 mu_1_cnt_v_sharersL1_1_undefined_var;

class mu_1__type_8: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_8& val) { return mu__byte::operator=((int) val); };
  mu_1__type_8 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_8 (void): mu__byte(0, 3, 3) {};
  mu_1__type_8 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_9& val) { return mu__byte::operator=((int) val); };
  mu_1__type_9 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_9 (void): mu__byte(0, 3, 3) {};
  mu_1__type_9 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_10& val) { return mu__byte::operator=((int) val); };
  mu_1__type_10 (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1__type_10 (void): mu__byte(0, 4, 3) {};
  mu_1__type_10 (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_11& val) { return mu__byte::operator=((int) val); };
  mu_1__type_11 (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1__type_11 (void): mu__byte(0, 4, 3) {};
  mu_1__type_11 (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1_ENTRY_directoryL1_1
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_s_directoryL1_1 mu_State;
  mu_1_ClValue mu_cl;
  mu_1_v_sharersL1_1 mu_sharersL1_1;
  mu_1_Machines mu_ownerL1_1;
  mu_1__type_8 mu_acksReceivedL1_1;
  mu_1__type_9 mu_acksExpectedL1_1;
  mu_1__type_10 mu_acksReceivedL2;
  mu_1__type_11 mu_acksExpectedL2;
  mu_1_Message mu_invalidation_msg;
  mu_1_Message mu_cluster_req_msg;
  mu_1_ENTRY_directoryL1_1 ( const char *n, int os ) { set_self(n,os); };
  mu_1_ENTRY_directoryL1_1 ( void ) {};

  virtual ~mu_1_ENTRY_directoryL1_1(); 
friend int CompareWeight(mu_1_ENTRY_directoryL1_1& a, mu_1_ENTRY_directoryL1_1& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sharersL1_1, b.mu_sharersL1_1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ownerL1_1, b.mu_ownerL1_1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksReceivedL1_1, b.mu_acksReceivedL1_1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksExpectedL1_1, b.mu_acksExpectedL1_1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksReceivedL2, b.mu_acksReceivedL2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksExpectedL2, b.mu_acksExpectedL2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_invalidation_msg, b.mu_invalidation_msg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cluster_req_msg, b.mu_cluster_req_msg);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ENTRY_directoryL1_1& a, mu_1_ENTRY_directoryL1_1& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_sharersL1_1, b.mu_sharersL1_1);
    if (w!=0) return w;
    w = Compare(a.mu_ownerL1_1, b.mu_ownerL1_1);
    if (w!=0) return w;
    w = Compare(a.mu_acksReceivedL1_1, b.mu_acksReceivedL1_1);
    if (w!=0) return w;
    w = Compare(a.mu_acksExpectedL1_1, b.mu_acksExpectedL1_1);
    if (w!=0) return w;
    w = Compare(a.mu_acksReceivedL2, b.mu_acksReceivedL2);
    if (w!=0) return w;
    w = Compare(a.mu_acksExpectedL2, b.mu_acksExpectedL2);
    if (w!=0) return w;
    w = Compare(a.mu_invalidation_msg, b.mu_invalidation_msg);
    if (w!=0) return w;
    w = Compare(a.mu_cluster_req_msg, b.mu_cluster_req_msg);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_State.MultisetSort();
    mu_cl.MultisetSort();
    mu_sharersL1_1.MultisetSort();
    mu_ownerL1_1.MultisetSort();
    mu_acksReceivedL1_1.MultisetSort();
    mu_acksExpectedL1_1.MultisetSort();
    mu_acksReceivedL2.MultisetSort();
    mu_acksExpectedL2.MultisetSort();
    mu_invalidation_msg.MultisetSort();
    mu_cluster_req_msg.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_cl.print_statistic();
    mu_sharersL1_1.print_statistic();
    mu_ownerL1_1.print_statistic();
    mu_acksReceivedL1_1.print_statistic();
    mu_acksExpectedL1_1.print_statistic();
    mu_acksReceivedL2.print_statistic();
    mu_acksExpectedL2.print_statistic();
    mu_invalidation_msg.print_statistic();
    mu_cluster_req_msg.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_cl.clear();
    mu_sharersL1_1.clear();
    mu_ownerL1_1.clear();
    mu_acksReceivedL1_1.clear();
    mu_acksExpectedL1_1.clear();
    mu_acksReceivedL2.clear();
    mu_acksExpectedL2.clear();
    mu_invalidation_msg.clear();
    mu_cluster_req_msg.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_cl.undefine();
    mu_sharersL1_1.undefine();
    mu_ownerL1_1.undefine();
    mu_acksReceivedL1_1.undefine();
    mu_acksExpectedL1_1.undefine();
    mu_acksReceivedL2.undefine();
    mu_acksExpectedL2.undefine();
    mu_invalidation_msg.undefine();
    mu_cluster_req_msg.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_cl.reset();
    mu_sharersL1_1.reset();
    mu_ownerL1_1.reset();
    mu_acksReceivedL1_1.reset();
    mu_acksExpectedL1_1.reset();
    mu_acksReceivedL2.reset();
    mu_acksExpectedL2.reset();
    mu_invalidation_msg.reset();
    mu_cluster_req_msg.reset();
 };
  void print() {
    mu_State.print();
    mu_cl.print();
    mu_sharersL1_1.print();
    mu_ownerL1_1.print();
    mu_acksReceivedL1_1.print();
    mu_acksExpectedL1_1.print();
    mu_acksReceivedL2.print();
    mu_acksExpectedL2.print();
    mu_invalidation_msg.print();
    mu_cluster_req_msg.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_sharersL1_1.print_diff(prevstate);
    mu_ownerL1_1.print_diff(prevstate);
    mu_acksReceivedL1_1.print_diff(prevstate);
    mu_acksExpectedL1_1.print_diff(prevstate);
    mu_acksReceivedL2.print_diff(prevstate);
    mu_acksExpectedL2.print_diff(prevstate);
    mu_invalidation_msg.print_diff(prevstate);
    mu_cluster_req_msg.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_sharersL1_1.to_state(thestate);
    mu_ownerL1_1.to_state(thestate);
    mu_acksReceivedL1_1.to_state(thestate);
    mu_acksExpectedL1_1.to_state(thestate);
    mu_acksReceivedL2.to_state(thestate);
    mu_acksExpectedL2.to_state(thestate);
    mu_invalidation_msg.to_state(thestate);
    mu_cluster_req_msg.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ENTRY_directoryL1_1& operator= (const mu_1_ENTRY_directoryL1_1& from) {
    mu_State.value(from.mu_State.value());
    mu_cl.value(from.mu_cl.value());
    mu_sharersL1_1 = from.mu_sharersL1_1;
    mu_ownerL1_1.value(from.mu_ownerL1_1.value());
    mu_acksReceivedL1_1.value(from.mu_acksReceivedL1_1.value());
    mu_acksExpectedL1_1.value(from.mu_acksExpectedL1_1.value());
    mu_acksReceivedL2.value(from.mu_acksReceivedL2.value());
    mu_acksExpectedL2.value(from.mu_acksExpectedL2.value());
    mu_invalidation_msg = from.mu_invalidation_msg;
    mu_cluster_req_msg = from.mu_cluster_req_msg;
    return *this;
  };
};

  void mu_1_ENTRY_directoryL1_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ENTRY_directoryL1_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ENTRY_directoryL1_1::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 6 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_sharersL1_1.set_self_2(name, ".sharersL1_1", os + 8 ); else mu_sharersL1_1.set_self_2(NULL, NULL, 0);
  if (name) mu_ownerL1_1.set_self_2(name, ".ownerL1_1", os + 23 ); else mu_ownerL1_1.set_self_2(NULL, NULL, 0);
  if (name) mu_acksReceivedL1_1.set_self_2(name, ".acksReceivedL1_1", os + 26 ); else mu_acksReceivedL1_1.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpectedL1_1.set_self_2(name, ".acksExpectedL1_1", os + 29 ); else mu_acksExpectedL1_1.set_self_2(NULL, NULL, 0);
  if (name) mu_acksReceivedL2.set_self_2(name, ".acksReceivedL2", os + 32 ); else mu_acksReceivedL2.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpectedL2.set_self_2(name, ".acksExpectedL2", os + 35 ); else mu_acksExpectedL2.set_self_2(NULL, NULL, 0);
  if (name) mu_invalidation_msg.set_self_2(name, ".invalidation_msg", os + 38 ); else mu_invalidation_msg.set_self_2(NULL, NULL, 0);
  if (name) mu_cluster_req_msg.set_self_2(name, ".cluster_req_msg", os + 62 ); else mu_cluster_req_msg.set_self_2(NULL, NULL, 0);
}

mu_1_ENTRY_directoryL1_1::~mu_1_ENTRY_directoryL1_1()
{
}

/*** end record declaration ***/
mu_1_ENTRY_directoryL1_1 mu_1_ENTRY_directoryL1_1_undefined_var;

class mu_1__type_12
{
 public:
  mu_1_ENTRY_directoryL1_1 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_1_ENTRY_directoryL1_1& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: Address is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_12::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_12::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_12::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"Address_1", i * 86 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1_MACH_directoryL1_1
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_12 mu_cb;
  mu_1_MACH_directoryL1_1 ( const char *n, int os ) { set_self(n,os); };
  mu_1_MACH_directoryL1_1 ( void ) {};

  virtual ~mu_1_MACH_directoryL1_1(); 
friend int CompareWeight(mu_1_MACH_directoryL1_1& a, mu_1_MACH_directoryL1_1& b)
  {
    int w;
    w = CompareWeight(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MACH_directoryL1_1& a, mu_1_MACH_directoryL1_1& b)
  {
    int w;
    w = Compare(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_cb.MultisetSort();
  }
  void print_statistic()
  {
    mu_cb.print_statistic();
  }
  void clear() {
    mu_cb.clear();
 };
  void undefine() {
    mu_cb.undefine();
 };
  void reset() {
    mu_cb.reset();
 };
  void print() {
    mu_cb.print();
  };
  void print_diff(state *prevstate) {
    mu_cb.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cb.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MACH_directoryL1_1& operator= (const mu_1_MACH_directoryL1_1& from) {
    mu_cb = from.mu_cb;
    return *this;
  };
};

  void mu_1_MACH_directoryL1_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MACH_directoryL1_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MACH_directoryL1_1::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cb.set_self_2(name, ".cb", os + 0 ); else mu_cb.set_self_2(NULL, NULL, 0);
}

mu_1_MACH_directoryL1_1::~mu_1_MACH_directoryL1_1()
{
}

/*** end record declaration ***/
mu_1_MACH_directoryL1_1 mu_1_MACH_directoryL1_1_undefined_var;

class mu_1_OBJ_directoryL1_1
{
 public:
  mu_1_MACH_directoryL1_1 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_directoryL1_1 (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_directoryL1_1 ( void ) {};
  virtual ~mu_1_OBJ_directoryL1_1 ();
  mu_1_MACH_directoryL1_1& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 155 ) && ( index <= 155 ) )
      return array[ index - 155 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 155 ];
#endif
  };
  mu_1_OBJ_directoryL1_1& operator= (const mu_1_OBJ_directoryL1_1& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_directoryL1_1& a, mu_1_OBJ_directoryL1_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_directoryL1_1& a, mu_1_OBJ_directoryL1_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_OBJ_directoryL1_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_directoryL1_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1_OBJ_directoryL1_1::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directoryL1_1", i * 86 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1_OBJ_directoryL1_1::~mu_1_OBJ_directoryL1_1()
{
}
/*** end array declaration ***/
mu_1_OBJ_directoryL1_1 mu_1_OBJ_directoryL1_1_undefined_var;

class mu_1__type_13: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_13& val) { return mu__byte::operator=((int) val); };
  mu_1__type_13 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_13 (void): mu__byte(0, 3, 3) {};
  mu_1__type_13 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_14& val) { return mu__byte::operator=((int) val); };
  mu_1__type_14 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_14 (void): mu__byte(0, 3, 3) {};
  mu_1__type_14 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1_ENTRY_cacheL1_2
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_s_cacheL1_2 mu_State;
  mu_1_ClValue mu_cl;
  mu_1__type_13 mu_acksReceivedL1_2;
  mu_1__type_14 mu_acksExpectedL1_2;
  mu_1_ENTRY_cacheL1_2 ( const char *n, int os ) { set_self(n,os); };
  mu_1_ENTRY_cacheL1_2 ( void ) {};

  virtual ~mu_1_ENTRY_cacheL1_2(); 
friend int CompareWeight(mu_1_ENTRY_cacheL1_2& a, mu_1_ENTRY_cacheL1_2& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksReceivedL1_2, b.mu_acksReceivedL1_2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksExpectedL1_2, b.mu_acksExpectedL1_2);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ENTRY_cacheL1_2& a, mu_1_ENTRY_cacheL1_2& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_acksReceivedL1_2, b.mu_acksReceivedL1_2);
    if (w!=0) return w;
    w = Compare(a.mu_acksExpectedL1_2, b.mu_acksExpectedL1_2);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_State.MultisetSort();
    mu_cl.MultisetSort();
    mu_acksReceivedL1_2.MultisetSort();
    mu_acksExpectedL1_2.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_cl.print_statistic();
    mu_acksReceivedL1_2.print_statistic();
    mu_acksExpectedL1_2.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_cl.clear();
    mu_acksReceivedL1_2.clear();
    mu_acksExpectedL1_2.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_cl.undefine();
    mu_acksReceivedL1_2.undefine();
    mu_acksExpectedL1_2.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_cl.reset();
    mu_acksReceivedL1_2.reset();
    mu_acksExpectedL1_2.reset();
 };
  void print() {
    mu_State.print();
    mu_cl.print();
    mu_acksReceivedL1_2.print();
    mu_acksExpectedL1_2.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_acksReceivedL1_2.print_diff(prevstate);
    mu_acksExpectedL1_2.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_acksReceivedL1_2.to_state(thestate);
    mu_acksExpectedL1_2.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ENTRY_cacheL1_2& operator= (const mu_1_ENTRY_cacheL1_2& from) {
    mu_State.value(from.mu_State.value());
    mu_cl.value(from.mu_cl.value());
    mu_acksReceivedL1_2.value(from.mu_acksReceivedL1_2.value());
    mu_acksExpectedL1_2.value(from.mu_acksExpectedL1_2.value());
    return *this;
  };
};

  void mu_1_ENTRY_cacheL1_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ENTRY_cacheL1_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ENTRY_cacheL1_2::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 4 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_acksReceivedL1_2.set_self_2(name, ".acksReceivedL1_2", os + 6 ); else mu_acksReceivedL1_2.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpectedL1_2.set_self_2(name, ".acksExpectedL1_2", os + 9 ); else mu_acksExpectedL1_2.set_self_2(NULL, NULL, 0);
}

mu_1_ENTRY_cacheL1_2::~mu_1_ENTRY_cacheL1_2()
{
}

/*** end record declaration ***/
mu_1_ENTRY_cacheL1_2 mu_1_ENTRY_cacheL1_2_undefined_var;

class mu_1__type_15
{
 public:
  mu_1_ENTRY_cacheL1_2 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_15 (const char *n, int os) { set_self(n, os); };
  mu_1__type_15 ( void ) {};
  virtual ~mu_1__type_15 ();
  mu_1_ENTRY_cacheL1_2& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: Address is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_15& operator= (const mu_1__type_15& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_15::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_15::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_15::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"Address_1", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1_MACH_cacheL1_2
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_15 mu_cb;
  mu_1_MACH_cacheL1_2 ( const char *n, int os ) { set_self(n,os); };
  mu_1_MACH_cacheL1_2 ( void ) {};

  virtual ~mu_1_MACH_cacheL1_2(); 
friend int CompareWeight(mu_1_MACH_cacheL1_2& a, mu_1_MACH_cacheL1_2& b)
  {
    int w;
    w = CompareWeight(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MACH_cacheL1_2& a, mu_1_MACH_cacheL1_2& b)
  {
    int w;
    w = Compare(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_cb.MultisetSort();
  }
  void print_statistic()
  {
    mu_cb.print_statistic();
  }
  void clear() {
    mu_cb.clear();
 };
  void undefine() {
    mu_cb.undefine();
 };
  void reset() {
    mu_cb.reset();
 };
  void print() {
    mu_cb.print();
  };
  void print_diff(state *prevstate) {
    mu_cb.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cb.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MACH_cacheL1_2& operator= (const mu_1_MACH_cacheL1_2& from) {
    mu_cb = from.mu_cb;
    return *this;
  };
};

  void mu_1_MACH_cacheL1_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MACH_cacheL1_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MACH_cacheL1_2::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cb.set_self_2(name, ".cb", os + 0 ); else mu_cb.set_self_2(NULL, NULL, 0);
}

mu_1_MACH_cacheL1_2::~mu_1_MACH_cacheL1_2()
{
}

/*** end record declaration ***/
mu_1_MACH_cacheL1_2 mu_1_MACH_cacheL1_2_undefined_var;

class mu_1_OBJ_cacheL1_2
{
 public:
  mu_1_MACH_cacheL1_2 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_cacheL1_2 (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_cacheL1_2 ( void ) {};
  virtual ~mu_1_OBJ_cacheL1_2 ();
  mu_1_MACH_cacheL1_2& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 156 ) && ( index <= 157 ) )
      return array[ index - 156 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: OBJSET_cacheL1_2 is internally represented from 157 to 156.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 156 ];
#endif
  };
  mu_1_OBJ_cacheL1_2& operator= (const mu_1_OBJ_cacheL1_2& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_cacheL1_2& a, mu_1_OBJ_cacheL1_2& b)
  {
    return 0;
  }
friend int Compare(mu_1_OBJ_cacheL1_2& a, mu_1_OBJ_cacheL1_2& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_OBJ_cacheL1_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_cacheL1_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_OBJ_cacheL1_2::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_1", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_2_2", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1_OBJ_cacheL1_2::~mu_1_OBJ_cacheL1_2()
{
}
/*** end array declaration ***/
mu_1_OBJ_cacheL1_2 mu_1_OBJ_cacheL1_2_undefined_var;

/*** begin multiset declaration ***/
class mu_1_v_sharersL1_2_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_v_sharersL1_2_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1_v_sharersL1_2_id () : mu__byte(0,2,0) {};
  mu_1_v_sharersL1_2_id (int val) : mu__byte(0,2,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1_v_sharersL1_2
{
 public:
  mu_1_Machines array[ 3 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 3 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_v_sharersL1_2 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1_v_sharersL1_2 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1_v_sharersL1_2 ();
  mu_1_Machines& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 2) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1_v_sharersL1_2& operator= (const mu_1_v_sharersL1_2& from)
  {
    for (int i = 0; i < 3; i++)
    {
        array[i].value(from.array[i].value());
        valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1_v_sharersL1_2& a, mu_1_v_sharersL1_2& b)
  {
    return 0;
  }
friend int Compare(mu_1_v_sharersL1_2& a, mu_1_v_sharersL1_2& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 3; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 3; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 3; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1_v_sharersL1_2_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 3; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 3; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_Machines &element)
  {
    update_size();
    if (current_size >= 3) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 3; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1_v_sharersL1_2_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_Machines temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 3; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 3; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 3; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1_v_sharersL1_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_v_sharersL1_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_v_sharersL1_2::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 3; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 3 + os); else array[i].set_self(NULL, 0);
  k = os + i * 3;
  for(i = 0; i < 3; i++)
    valid[i].set_self("", i * 2 + k);
};
mu_1_v_sharersL1_2::~mu_1_v_sharersL1_2()
{
}
/*** end multiset declaration ***/
mu_1_v_sharersL1_2 mu_1_v_sharersL1_2_undefined_var;

class mu_1_cnt_v_sharersL1_2: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_cnt_v_sharersL1_2& val) { return mu__byte::operator=((int) val); };
  mu_1_cnt_v_sharersL1_2 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1_cnt_v_sharersL1_2 (void): mu__byte(0, 3, 3) {};
  mu_1_cnt_v_sharersL1_2 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_cnt_v_sharersL1_2 mu_1_cnt_v_sharersL1_2_undefined_var;

class mu_1__type_16: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_16& val) { return mu__byte::operator=((int) val); };
  mu_1__type_16 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_16 (void): mu__byte(0, 3, 3) {};
  mu_1__type_16 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_16 mu_1__type_16_undefined_var;

class mu_1__type_17: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_17& val) { return mu__byte::operator=((int) val); };
  mu_1__type_17 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_17 (void): mu__byte(0, 3, 3) {};
  mu_1__type_17 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_17 mu_1__type_17_undefined_var;

class mu_1__type_18: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_18& val) { return mu__byte::operator=((int) val); };
  mu_1__type_18 (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1__type_18 (void): mu__byte(0, 4, 3) {};
  mu_1__type_18 (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_18 mu_1__type_18_undefined_var;

class mu_1__type_19: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_19& val) { return mu__byte::operator=((int) val); };
  mu_1__type_19 (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1__type_19 (void): mu__byte(0, 4, 3) {};
  mu_1__type_19 (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_19 mu_1__type_19_undefined_var;

class mu_1_ENTRY_directoryL1_2
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_s_directoryL1_2 mu_State;
  mu_1_ClValue mu_cl;
  mu_1_v_sharersL1_2 mu_sharersL1_2;
  mu_1_Machines mu_ownerL1_2;
  mu_1__type_16 mu_acksReceivedL1_2;
  mu_1__type_17 mu_acksExpectedL1_2;
  mu_1__type_18 mu_acksReceivedL2;
  mu_1__type_19 mu_acksExpectedL2;
  mu_1_Message mu_invalidation_msg;
  mu_1_Message mu_cluster_req_msg;
  mu_1_ENTRY_directoryL1_2 ( const char *n, int os ) { set_self(n,os); };
  mu_1_ENTRY_directoryL1_2 ( void ) {};

  virtual ~mu_1_ENTRY_directoryL1_2(); 
friend int CompareWeight(mu_1_ENTRY_directoryL1_2& a, mu_1_ENTRY_directoryL1_2& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sharersL1_2, b.mu_sharersL1_2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ownerL1_2, b.mu_ownerL1_2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksReceivedL1_2, b.mu_acksReceivedL1_2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksExpectedL1_2, b.mu_acksExpectedL1_2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksReceivedL2, b.mu_acksReceivedL2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksExpectedL2, b.mu_acksExpectedL2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_invalidation_msg, b.mu_invalidation_msg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cluster_req_msg, b.mu_cluster_req_msg);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ENTRY_directoryL1_2& a, mu_1_ENTRY_directoryL1_2& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_sharersL1_2, b.mu_sharersL1_2);
    if (w!=0) return w;
    w = Compare(a.mu_ownerL1_2, b.mu_ownerL1_2);
    if (w!=0) return w;
    w = Compare(a.mu_acksReceivedL1_2, b.mu_acksReceivedL1_2);
    if (w!=0) return w;
    w = Compare(a.mu_acksExpectedL1_2, b.mu_acksExpectedL1_2);
    if (w!=0) return w;
    w = Compare(a.mu_acksReceivedL2, b.mu_acksReceivedL2);
    if (w!=0) return w;
    w = Compare(a.mu_acksExpectedL2, b.mu_acksExpectedL2);
    if (w!=0) return w;
    w = Compare(a.mu_invalidation_msg, b.mu_invalidation_msg);
    if (w!=0) return w;
    w = Compare(a.mu_cluster_req_msg, b.mu_cluster_req_msg);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_State.MultisetSort();
    mu_cl.MultisetSort();
    mu_sharersL1_2.MultisetSort();
    mu_ownerL1_2.MultisetSort();
    mu_acksReceivedL1_2.MultisetSort();
    mu_acksExpectedL1_2.MultisetSort();
    mu_acksReceivedL2.MultisetSort();
    mu_acksExpectedL2.MultisetSort();
    mu_invalidation_msg.MultisetSort();
    mu_cluster_req_msg.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_cl.print_statistic();
    mu_sharersL1_2.print_statistic();
    mu_ownerL1_2.print_statistic();
    mu_acksReceivedL1_2.print_statistic();
    mu_acksExpectedL1_2.print_statistic();
    mu_acksReceivedL2.print_statistic();
    mu_acksExpectedL2.print_statistic();
    mu_invalidation_msg.print_statistic();
    mu_cluster_req_msg.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_cl.clear();
    mu_sharersL1_2.clear();
    mu_ownerL1_2.clear();
    mu_acksReceivedL1_2.clear();
    mu_acksExpectedL1_2.clear();
    mu_acksReceivedL2.clear();
    mu_acksExpectedL2.clear();
    mu_invalidation_msg.clear();
    mu_cluster_req_msg.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_cl.undefine();
    mu_sharersL1_2.undefine();
    mu_ownerL1_2.undefine();
    mu_acksReceivedL1_2.undefine();
    mu_acksExpectedL1_2.undefine();
    mu_acksReceivedL2.undefine();
    mu_acksExpectedL2.undefine();
    mu_invalidation_msg.undefine();
    mu_cluster_req_msg.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_cl.reset();
    mu_sharersL1_2.reset();
    mu_ownerL1_2.reset();
    mu_acksReceivedL1_2.reset();
    mu_acksExpectedL1_2.reset();
    mu_acksReceivedL2.reset();
    mu_acksExpectedL2.reset();
    mu_invalidation_msg.reset();
    mu_cluster_req_msg.reset();
 };
  void print() {
    mu_State.print();
    mu_cl.print();
    mu_sharersL1_2.print();
    mu_ownerL1_2.print();
    mu_acksReceivedL1_2.print();
    mu_acksExpectedL1_2.print();
    mu_acksReceivedL2.print();
    mu_acksExpectedL2.print();
    mu_invalidation_msg.print();
    mu_cluster_req_msg.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_sharersL1_2.print_diff(prevstate);
    mu_ownerL1_2.print_diff(prevstate);
    mu_acksReceivedL1_2.print_diff(prevstate);
    mu_acksExpectedL1_2.print_diff(prevstate);
    mu_acksReceivedL2.print_diff(prevstate);
    mu_acksExpectedL2.print_diff(prevstate);
    mu_invalidation_msg.print_diff(prevstate);
    mu_cluster_req_msg.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_sharersL1_2.to_state(thestate);
    mu_ownerL1_2.to_state(thestate);
    mu_acksReceivedL1_2.to_state(thestate);
    mu_acksExpectedL1_2.to_state(thestate);
    mu_acksReceivedL2.to_state(thestate);
    mu_acksExpectedL2.to_state(thestate);
    mu_invalidation_msg.to_state(thestate);
    mu_cluster_req_msg.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ENTRY_directoryL1_2& operator= (const mu_1_ENTRY_directoryL1_2& from) {
    mu_State.value(from.mu_State.value());
    mu_cl.value(from.mu_cl.value());
    mu_sharersL1_2 = from.mu_sharersL1_2;
    mu_ownerL1_2.value(from.mu_ownerL1_2.value());
    mu_acksReceivedL1_2.value(from.mu_acksReceivedL1_2.value());
    mu_acksExpectedL1_2.value(from.mu_acksExpectedL1_2.value());
    mu_acksReceivedL2.value(from.mu_acksReceivedL2.value());
    mu_acksExpectedL2.value(from.mu_acksExpectedL2.value());
    mu_invalidation_msg = from.mu_invalidation_msg;
    mu_cluster_req_msg = from.mu_cluster_req_msg;
    return *this;
  };
};

  void mu_1_ENTRY_directoryL1_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ENTRY_directoryL1_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ENTRY_directoryL1_2::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 6 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_sharersL1_2.set_self_2(name, ".sharersL1_2", os + 8 ); else mu_sharersL1_2.set_self_2(NULL, NULL, 0);
  if (name) mu_ownerL1_2.set_self_2(name, ".ownerL1_2", os + 23 ); else mu_ownerL1_2.set_self_2(NULL, NULL, 0);
  if (name) mu_acksReceivedL1_2.set_self_2(name, ".acksReceivedL1_2", os + 26 ); else mu_acksReceivedL1_2.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpectedL1_2.set_self_2(name, ".acksExpectedL1_2", os + 29 ); else mu_acksExpectedL1_2.set_self_2(NULL, NULL, 0);
  if (name) mu_acksReceivedL2.set_self_2(name, ".acksReceivedL2", os + 32 ); else mu_acksReceivedL2.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpectedL2.set_self_2(name, ".acksExpectedL2", os + 35 ); else mu_acksExpectedL2.set_self_2(NULL, NULL, 0);
  if (name) mu_invalidation_msg.set_self_2(name, ".invalidation_msg", os + 38 ); else mu_invalidation_msg.set_self_2(NULL, NULL, 0);
  if (name) mu_cluster_req_msg.set_self_2(name, ".cluster_req_msg", os + 62 ); else mu_cluster_req_msg.set_self_2(NULL, NULL, 0);
}

mu_1_ENTRY_directoryL1_2::~mu_1_ENTRY_directoryL1_2()
{
}

/*** end record declaration ***/
mu_1_ENTRY_directoryL1_2 mu_1_ENTRY_directoryL1_2_undefined_var;

class mu_1__type_20
{
 public:
  mu_1_ENTRY_directoryL1_2 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_20 (const char *n, int os) { set_self(n, os); };
  mu_1__type_20 ( void ) {};
  virtual ~mu_1__type_20 ();
  mu_1_ENTRY_directoryL1_2& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: Address is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_20& operator= (const mu_1__type_20& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_20::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_20::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_20::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"Address_1", i * 86 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_20::~mu_1__type_20()
{
}
/*** end array declaration ***/
mu_1__type_20 mu_1__type_20_undefined_var;

class mu_1_MACH_directoryL1_2
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_20 mu_cb;
  mu_1_MACH_directoryL1_2 ( const char *n, int os ) { set_self(n,os); };
  mu_1_MACH_directoryL1_2 ( void ) {};

  virtual ~mu_1_MACH_directoryL1_2(); 
friend int CompareWeight(mu_1_MACH_directoryL1_2& a, mu_1_MACH_directoryL1_2& b)
  {
    int w;
    w = CompareWeight(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MACH_directoryL1_2& a, mu_1_MACH_directoryL1_2& b)
  {
    int w;
    w = Compare(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_cb.MultisetSort();
  }
  void print_statistic()
  {
    mu_cb.print_statistic();
  }
  void clear() {
    mu_cb.clear();
 };
  void undefine() {
    mu_cb.undefine();
 };
  void reset() {
    mu_cb.reset();
 };
  void print() {
    mu_cb.print();
  };
  void print_diff(state *prevstate) {
    mu_cb.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cb.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MACH_directoryL1_2& operator= (const mu_1_MACH_directoryL1_2& from) {
    mu_cb = from.mu_cb;
    return *this;
  };
};

  void mu_1_MACH_directoryL1_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MACH_directoryL1_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MACH_directoryL1_2::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cb.set_self_2(name, ".cb", os + 0 ); else mu_cb.set_self_2(NULL, NULL, 0);
}

mu_1_MACH_directoryL1_2::~mu_1_MACH_directoryL1_2()
{
}

/*** end record declaration ***/
mu_1_MACH_directoryL1_2 mu_1_MACH_directoryL1_2_undefined_var;

class mu_1_OBJ_directoryL1_2
{
 public:
  mu_1_MACH_directoryL1_2 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_directoryL1_2 (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_directoryL1_2 ( void ) {};
  virtual ~mu_1_OBJ_directoryL1_2 ();
  mu_1_MACH_directoryL1_2& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 158 ) && ( index <= 158 ) )
      return array[ index - 158 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 158 ];
#endif
  };
  mu_1_OBJ_directoryL1_2& operator= (const mu_1_OBJ_directoryL1_2& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_directoryL1_2& a, mu_1_OBJ_directoryL1_2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_directoryL1_2& a, mu_1_OBJ_directoryL1_2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_OBJ_directoryL1_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_directoryL1_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1_OBJ_directoryL1_2::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directoryL1_2", i * 86 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1_OBJ_directoryL1_2::~mu_1_OBJ_directoryL1_2()
{
}
/*** end array declaration ***/
mu_1_OBJ_directoryL1_2 mu_1_OBJ_directoryL1_2_undefined_var;

class mu_1__type_21: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_21& val) { return mu__byte::operator=((int) val); };
  mu_1__type_21 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_21 (void): mu__byte(0, 3, 3) {};
  mu_1__type_21 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_21 mu_1__type_21_undefined_var;

class mu_1__type_22: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_22& val) { return mu__byte::operator=((int) val); };
  mu_1__type_22 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_22 (void): mu__byte(0, 3, 3) {};
  mu_1__type_22 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_22 mu_1__type_22_undefined_var;

class mu_1_ENTRY_cacheL1_1
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_s_cacheL1_1 mu_State;
  mu_1_ClValue mu_cl;
  mu_1__type_21 mu_acksReceivedL1_1;
  mu_1__type_22 mu_acksExpectedL1_1;
  mu_1_ENTRY_cacheL1_1 ( const char *n, int os ) { set_self(n,os); };
  mu_1_ENTRY_cacheL1_1 ( void ) {};

  virtual ~mu_1_ENTRY_cacheL1_1(); 
friend int CompareWeight(mu_1_ENTRY_cacheL1_1& a, mu_1_ENTRY_cacheL1_1& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksReceivedL1_1, b.mu_acksReceivedL1_1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksExpectedL1_1, b.mu_acksExpectedL1_1);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ENTRY_cacheL1_1& a, mu_1_ENTRY_cacheL1_1& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_acksReceivedL1_1, b.mu_acksReceivedL1_1);
    if (w!=0) return w;
    w = Compare(a.mu_acksExpectedL1_1, b.mu_acksExpectedL1_1);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_State.MultisetSort();
    mu_cl.MultisetSort();
    mu_acksReceivedL1_1.MultisetSort();
    mu_acksExpectedL1_1.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_cl.print_statistic();
    mu_acksReceivedL1_1.print_statistic();
    mu_acksExpectedL1_1.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_cl.clear();
    mu_acksReceivedL1_1.clear();
    mu_acksExpectedL1_1.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_cl.undefine();
    mu_acksReceivedL1_1.undefine();
    mu_acksExpectedL1_1.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_cl.reset();
    mu_acksReceivedL1_1.reset();
    mu_acksExpectedL1_1.reset();
 };
  void print() {
    mu_State.print();
    mu_cl.print();
    mu_acksReceivedL1_1.print();
    mu_acksExpectedL1_1.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_acksReceivedL1_1.print_diff(prevstate);
    mu_acksExpectedL1_1.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_acksReceivedL1_1.to_state(thestate);
    mu_acksExpectedL1_1.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ENTRY_cacheL1_1& operator= (const mu_1_ENTRY_cacheL1_1& from) {
    mu_State.value(from.mu_State.value());
    mu_cl.value(from.mu_cl.value());
    mu_acksReceivedL1_1.value(from.mu_acksReceivedL1_1.value());
    mu_acksExpectedL1_1.value(from.mu_acksExpectedL1_1.value());
    return *this;
  };
};

  void mu_1_ENTRY_cacheL1_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ENTRY_cacheL1_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ENTRY_cacheL1_1::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 4 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_acksReceivedL1_1.set_self_2(name, ".acksReceivedL1_1", os + 6 ); else mu_acksReceivedL1_1.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpectedL1_1.set_self_2(name, ".acksExpectedL1_1", os + 9 ); else mu_acksExpectedL1_1.set_self_2(NULL, NULL, 0);
}

mu_1_ENTRY_cacheL1_1::~mu_1_ENTRY_cacheL1_1()
{
}

/*** end record declaration ***/
mu_1_ENTRY_cacheL1_1 mu_1_ENTRY_cacheL1_1_undefined_var;

class mu_1__type_23
{
 public:
  mu_1_ENTRY_cacheL1_1 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_23 (const char *n, int os) { set_self(n, os); };
  mu_1__type_23 ( void ) {};
  virtual ~mu_1__type_23 ();
  mu_1_ENTRY_cacheL1_1& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: Address is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_23& operator= (const mu_1__type_23& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_23::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_23::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_23::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"Address_1", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_23::~mu_1__type_23()
{
}
/*** end array declaration ***/
mu_1__type_23 mu_1__type_23_undefined_var;

class mu_1_MACH_cacheL1_1
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_23 mu_cb;
  mu_1_MACH_cacheL1_1 ( const char *n, int os ) { set_self(n,os); };
  mu_1_MACH_cacheL1_1 ( void ) {};

  virtual ~mu_1_MACH_cacheL1_1(); 
friend int CompareWeight(mu_1_MACH_cacheL1_1& a, mu_1_MACH_cacheL1_1& b)
  {
    int w;
    w = CompareWeight(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MACH_cacheL1_1& a, mu_1_MACH_cacheL1_1& b)
  {
    int w;
    w = Compare(a.mu_cb, b.mu_cb);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_cb.MultisetSort();
  }
  void print_statistic()
  {
    mu_cb.print_statistic();
  }
  void clear() {
    mu_cb.clear();
 };
  void undefine() {
    mu_cb.undefine();
 };
  void reset() {
    mu_cb.reset();
 };
  void print() {
    mu_cb.print();
  };
  void print_diff(state *prevstate) {
    mu_cb.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cb.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MACH_cacheL1_1& operator= (const mu_1_MACH_cacheL1_1& from) {
    mu_cb = from.mu_cb;
    return *this;
  };
};

  void mu_1_MACH_cacheL1_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MACH_cacheL1_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MACH_cacheL1_1::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cb.set_self_2(name, ".cb", os + 0 ); else mu_cb.set_self_2(NULL, NULL, 0);
}

mu_1_MACH_cacheL1_1::~mu_1_MACH_cacheL1_1()
{
}

/*** end record declaration ***/
mu_1_MACH_cacheL1_1 mu_1_MACH_cacheL1_1_undefined_var;

class mu_1_OBJ_cacheL1_1
{
 public:
  mu_1_MACH_cacheL1_1 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_cacheL1_1 (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_cacheL1_1 ( void ) {};
  virtual ~mu_1_OBJ_cacheL1_1 ();
  mu_1_MACH_cacheL1_1& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 159 ) && ( index <= 160 ) )
      return array[ index - 159 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: OBJSET_cacheL1_1 is internally represented from 160 to 159.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 159 ];
#endif
  };
  mu_1_OBJ_cacheL1_1& operator= (const mu_1_OBJ_cacheL1_1& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_cacheL1_1& a, mu_1_OBJ_cacheL1_1& b)
  {
    return 0;
  }
friend int Compare(mu_1_OBJ_cacheL1_1& a, mu_1_OBJ_cacheL1_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_OBJ_cacheL1_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_cacheL1_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_OBJ_cacheL1_1::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_1", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"OBJSET_cacheL1_1_2", i * 12 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1_OBJ_cacheL1_1::~mu_1_OBJ_cacheL1_1()
{
}
/*** end array declaration ***/
mu_1_OBJ_cacheL1_1 mu_1_OBJ_cacheL1_1_undefined_var;

class mu_1__type_24: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_24& val) { return mu__byte::operator=((int) val); };
  mu_1__type_24 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_24 (void): mu__byte(0, 3, 3) {};
  mu_1__type_24 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_24 mu_1__type_24_undefined_var;

class mu_1__type_25: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_25& val) { return mu__byte::operator=((int) val); };
  mu_1__type_25 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_25 (void): mu__byte(0, 3, 3) {};
  mu_1__type_25 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_25 mu_1__type_25_undefined_var;

class mu_1__type_26: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_26& val) { return mu__byte::operator=((int) val); };
  mu_1__type_26 (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1__type_26 (void): mu__byte(0, 4, 3) {};
  mu_1__type_26 (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_26 mu_1__type_26_undefined_var;

class mu_1__type_27: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_27& val) { return mu__byte::operator=((int) val); };
  mu_1__type_27 (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1__type_27 (void): mu__byte(0, 4, 3) {};
  mu_1__type_27 (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1__type_27 mu_1__type_27_undefined_var;

const int mu_ENABLE_QS = 0;
const int mu_VAL_COUNT = 1;
const int mu_ADR_COUNT = 1;
const int mu_O_NET_MAX = 16;
const int mu_U_NET_MAX = 16;
const int mu_NrCachesL1_2 = 3;
const int mu_NrCachesL1_1 = 3;
const int mu_NrCachesL2 = 4;
const int mu_Address_1 = 1;
const int mu_load = 2;
const int mu_store = 3;
const int mu_evict = 4;
const int mu_none = 5;
const int mu_GetSL1_2 = 6;
const int mu_GetML1_2 = 7;
const int mu_PutSL1_2 = 8;
const int mu_Inv_AckL1_2 = 9;
const int mu_GetM_Ack_DL1_2 = 10;
const int mu_GetS_AckL1_2 = 11;
const int mu_WBL1_2 = 12;
const int mu_PutML1_2 = 13;
const int mu_GetM_Ack_ADL1_2 = 14;
const int mu_InvL1_2 = 15;
const int mu_Put_AckL1_2 = 16;
const int mu_Fwd_GetSL1_2 = 17;
const int mu_Fwd_GetML1_2 = 18;
const int mu_GetSL1_2load = 19;
const int mu_GetML1_2store = 20;
const int mu_GetSL1_1 = 21;
const int mu_GetML1_1 = 22;
const int mu_PutSL1_1 = 23;
const int mu_Inv_AckL1_1 = 24;
const int mu_GetM_Ack_DL1_1 = 25;
const int mu_GetS_AckL1_1 = 26;
const int mu_WBL1_1 = 27;
const int mu_PutML1_1 = 28;
const int mu_GetM_Ack_ADL1_1 = 29;
const int mu_InvL1_1 = 30;
const int mu_Put_AckL1_1 = 31;
const int mu_Fwd_GetSL1_1 = 32;
const int mu_Fwd_GetML1_1 = 33;
const int mu_GetSL1_1load = 34;
const int mu_GetML1_1store = 35;
const int mu_GetSL2 = 36;
const int mu_GetML2 = 37;
const int mu_PutSL2 = 38;
const int mu_Inv_AckL2 = 39;
const int mu_GetM_Ack_DL2 = 40;
const int mu_GetS_AckL2 = 41;
const int mu_PutML2 = 42;
const int mu_GetM_Ack_ADL2 = 43;
const int mu_InvL2 = 44;
const int mu_Put_AckL2 = 45;
const int mu_Fwd_GetSL2 = 46;
const int mu_Fwd_GetML2 = 47;
const int mu_directoryL2_S = 48;
const int mu_directoryL2_O = 49;
const int mu_directoryL2_M = 50;
const int mu_directoryL2_I = 51;
const int mu_directoryL1_1_mevict__dM_x_pI_store__C__M = 52;
const int mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S = 53;
const int mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__O = 54;
const int mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M = 55;
const int mu_directoryL1_1_mevict__I__C__S_evict_x_I = 56;
const int mu_directoryL1_1_mevict__I__C__S_evict = 57;
const int mu_directoryL1_1_mevict__I__C__O_evict_x_I = 58;
const int mu_directoryL1_1_mevict__I__C__O_evict = 59;
const int mu_directoryL1_1_mevict__I__C__M_evict_x_I = 60;
const int mu_directoryL1_1_mevict__I__C__M_evict = 61;
const int mu_directoryL1_1_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S = 62;
const int mu_directoryL1_1_mGetSL1_1__M_GetS__C__M = 63;
const int mu_directoryL1_1_mGetSL1_1__I__C__I_load = 64;
const int mu_directoryL1_1_mGetML1_1__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S = 65;
const int mu_directoryL1_1_mGetML1_1__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O = 66;
const int mu_directoryL1_1_mGetML1_1__S__C__S_store_GetM_Ack_AD = 67;
const int mu_directoryL1_1_mGetML1_1__S__C__S_store = 68;
const int mu_directoryL1_1_mGetML1_1__S__C__O_store_GetM_Ack_AD = 69;
const int mu_directoryL1_1_mGetML1_1__S__C__O_store = 70;
const int mu_directoryL1_1_mGetML1_1__I__C__S_store_GetM_Ack_AD = 71;
const int mu_directoryL1_1_mGetML1_1__I__C__S_store = 72;
const int mu_directoryL1_1_mGetML1_1__I__C__O_store_GetM_Ack_AD = 73;
const int mu_directoryL1_1_mGetML1_1__I__C__O_store = 74;
const int mu_directoryL1_1_mGetML1_1__I__C__I_store_GetM_Ack_AD = 75;
const int mu_directoryL1_1_mGetML1_1__I__C__I_store = 76;
const int mu_directoryL1_1_mFwd_GetSL2__dS_x_pI_load__C__M = 77;
const int mu_directoryL1_1_mFwd_GetSL2__dM_GetS_x_pS__C__M = 78;
const int mu_directoryL1_1_mFwd_GetSL2__dM_GetS_x_pI_load__C__M = 79;
const int mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store__C__M = 80;
const int mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O = 81;
const int mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M = 82;
const int mu_directoryL1_1_S__C__S = 83;
const int mu_directoryL1_1_S__C__O = 84;
const int mu_directoryL1_1_S__C__M = 85;
const int mu_directoryL1_1_M__C__M = 86;
const int mu_directoryL1_1_I__C__S = 87;
const int mu_directoryL1_1_I__C__O = 88;
const int mu_directoryL1_1_I__C__M = 89;
const int mu_directoryL1_1_I__C__I = 90;
const int mu_cacheL1_2_S_store_GetM_Ack_AD = 91;
const int mu_cacheL1_2_S_store = 92;
const int mu_cacheL1_2_S_evict_x_I = 93;
const int mu_cacheL1_2_S_evict = 94;
const int mu_cacheL1_2_S = 95;
const int mu_cacheL1_2_M_evict_x_I = 96;
const int mu_cacheL1_2_M_evict = 97;
const int mu_cacheL1_2_M = 98;
const int mu_cacheL1_2_I_store_GetM_Ack_AD = 99;
const int mu_cacheL1_2_I_store = 100;
const int mu_cacheL1_2_I_load = 101;
const int mu_cacheL1_2_I = 102;
const int mu_directoryL1_2_mevict__dM_x_pI_store__C__M = 103;
const int mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S = 104;
const int mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__O = 105;
const int mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M = 106;
const int mu_directoryL1_2_mevict__I__C__S_evict_x_I = 107;
const int mu_directoryL1_2_mevict__I__C__S_evict = 108;
const int mu_directoryL1_2_mevict__I__C__O_evict_x_I = 109;
const int mu_directoryL1_2_mevict__I__C__O_evict = 110;
const int mu_directoryL1_2_mevict__I__C__M_evict_x_I = 111;
const int mu_directoryL1_2_mevict__I__C__M_evict = 112;
const int mu_directoryL1_2_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S = 113;
const int mu_directoryL1_2_mGetSL1_2__M_GetS__C__M = 114;
const int mu_directoryL1_2_mGetSL1_2__I__C__I_load = 115;
const int mu_directoryL1_2_mGetML1_2__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S = 116;
const int mu_directoryL1_2_mGetML1_2__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O = 117;
const int mu_directoryL1_2_mGetML1_2__S__C__S_store_GetM_Ack_AD = 118;
const int mu_directoryL1_2_mGetML1_2__S__C__S_store = 119;
const int mu_directoryL1_2_mGetML1_2__S__C__O_store_GetM_Ack_AD = 120;
const int mu_directoryL1_2_mGetML1_2__S__C__O_store = 121;
const int mu_directoryL1_2_mGetML1_2__I__C__S_store_GetM_Ack_AD = 122;
const int mu_directoryL1_2_mGetML1_2__I__C__S_store = 123;
const int mu_directoryL1_2_mGetML1_2__I__C__O_store_GetM_Ack_AD = 124;
const int mu_directoryL1_2_mGetML1_2__I__C__O_store = 125;
const int mu_directoryL1_2_mGetML1_2__I__C__I_store_GetM_Ack_AD = 126;
const int mu_directoryL1_2_mGetML1_2__I__C__I_store = 127;
const int mu_directoryL1_2_mFwd_GetSL2__dS_x_pI_load__C__M = 128;
const int mu_directoryL1_2_mFwd_GetSL2__dM_GetS_x_pS__C__M = 129;
const int mu_directoryL1_2_mFwd_GetSL2__dM_GetS_x_pI_load__C__M = 130;
const int mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store__C__M = 131;
const int mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O = 132;
const int mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M = 133;
const int mu_directoryL1_2_S__C__S = 134;
const int mu_directoryL1_2_S__C__O = 135;
const int mu_directoryL1_2_S__C__M = 136;
const int mu_directoryL1_2_M__C__M = 137;
const int mu_directoryL1_2_I__C__S = 138;
const int mu_directoryL1_2_I__C__O = 139;
const int mu_directoryL1_2_I__C__M = 140;
const int mu_directoryL1_2_I__C__I = 141;
const int mu_cacheL1_1_S_store_GetM_Ack_AD = 142;
const int mu_cacheL1_1_S_store = 143;
const int mu_cacheL1_1_S_evict_x_I = 144;
const int mu_cacheL1_1_S_evict = 145;
const int mu_cacheL1_1_S = 146;
const int mu_cacheL1_1_M_evict_x_I = 147;
const int mu_cacheL1_1_M_evict = 148;
const int mu_cacheL1_1_M = 149;
const int mu_cacheL1_1_I_store_GetM_Ack_AD = 150;
const int mu_cacheL1_1_I_store = 151;
const int mu_cacheL1_1_I_load = 152;
const int mu_cacheL1_1_I = 153;
const int mu_directoryL2 = 154;
const int mu_directoryL1_1 = 155;
const int mu_OBJSET_cacheL1_2_1 = 156;
const int mu_OBJSET_cacheL1_2_2 = 157;
const int mu_directoryL1_2 = 158;
const int mu_OBJSET_cacheL1_1_1 = 159;
const int mu_OBJSET_cacheL1_1_2 = 160;
/*** Variable declaration ***/
mu_1_NET_Ordered mu_fwd("fwd",0);

/*** Variable declaration ***/
mu_1_NET_Ordered_cnt mu_cnt_fwd("cnt_fwd",2688);

/*** Variable declaration ***/
mu_1_NET_Ordered mu_resp("resp",2723);

/*** Variable declaration ***/
mu_1_NET_Ordered_cnt mu_cnt_resp("cnt_resp",5411);

/*** Variable declaration ***/
mu_1_NET_Ordered mu_req("req",5446);

/*** Variable declaration ***/
mu_1_NET_Ordered_cnt mu_cnt_req("cnt_req",8134);

/*** Variable declaration ***/
mu_1_PermMonitor mu_g_perm("g_perm",8169);

/*** Variable declaration ***/
mu_1_OBJ_directoryL2 mu_i_directoryL2("i_directoryL2",8274);

/*** Variable declaration ***/
mu_1_OBJ_directoryL1_1 mu_i_directoryL1_1("i_directoryL1_1",8302);

/*** Variable declaration ***/
mu_1_OBJ_cacheL1_2 mu_i_cacheL1_2("i_cacheL1_2",8388);

/*** Variable declaration ***/
mu_1_OBJ_directoryL1_2 mu_i_directoryL1_2("i_directoryL1_2",8412);

/*** Variable declaration ***/
mu_1_OBJ_cacheL1_1 mu_i_cacheL1_1("i_cacheL1_1",8498);

void mu_ResetMachine_directoryL2()
{
{
for(int mu_i = 154; mu_i <= 154; mu_i++) {
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
mu_i_directoryL2[mu_i].mu_cb[mu_a].mu_State = mu_directoryL2_I;
mu_i_directoryL2[mu_i].mu_cb[mu_a].mu_cl = 0;
mu_i_directoryL2[mu_i].mu_cb[mu_a].mu_sharersL2.undefine();
mu_i_directoryL2[mu_i].mu_cb[mu_a].mu_ownerL2.undefine();
};
};
};
};
};
/*** end procedure declaration ***/

void mu_ResetMachine_directoryL1_1()
{
{
for(int mu_i = 155; mu_i <= 155; mu_i++) {
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_State = mu_directoryL1_1_I__C__I;
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_cl = 0;
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_sharersL1_1.undefine();
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_ownerL1_1.undefine();
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_invalidation_msg.undefine();
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_cluster_req_msg.undefine();
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_acksReceivedL1_1 = 0;
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_acksExpectedL1_1 = 0;
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_acksReceivedL2 = 0;
mu_i_directoryL1_1[mu_i].mu_cb[mu_a].mu_acksExpectedL2 = 0;
};
};
};
};
};
/*** end procedure declaration ***/

void mu_ResetMachine_cacheL1_2()
{
{
for(int mu_i = 156; mu_i <= 157; mu_i++) {
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
mu_i_cacheL1_2[mu_i].mu_cb[mu_a].mu_State = mu_cacheL1_2_I;
mu_i_cacheL1_2[mu_i].mu_cb[mu_a].mu_cl = 0;
mu_i_cacheL1_2[mu_i].mu_cb[mu_a].mu_acksReceivedL1_2 = 0;
mu_i_cacheL1_2[mu_i].mu_cb[mu_a].mu_acksExpectedL1_2 = 0;
};
};
};
};
};
/*** end procedure declaration ***/

void mu_ResetMachine_directoryL1_2()
{
{
for(int mu_i = 158; mu_i <= 158; mu_i++) {
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_State = mu_directoryL1_2_I__C__I;
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_cl = 0;
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_sharersL1_2.undefine();
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_ownerL1_2.undefine();
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_invalidation_msg.undefine();
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_cluster_req_msg.undefine();
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_acksReceivedL1_2 = 0;
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_acksExpectedL1_2 = 0;
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_acksReceivedL2 = 0;
mu_i_directoryL1_2[mu_i].mu_cb[mu_a].mu_acksExpectedL2 = 0;
};
};
};
};
};
/*** end procedure declaration ***/

void mu_ResetMachine_cacheL1_1()
{
{
for(int mu_i = 159; mu_i <= 160; mu_i++) {
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
mu_i_cacheL1_1[mu_i].mu_cb[mu_a].mu_State = mu_cacheL1_1_I;
mu_i_cacheL1_1[mu_i].mu_cb[mu_a].mu_cl = 0;
mu_i_cacheL1_1[mu_i].mu_cb[mu_a].mu_acksReceivedL1_1 = 0;
mu_i_cacheL1_1[mu_i].mu_cb[mu_a].mu_acksExpectedL1_1 = 0;
};
};
};
};
};
/*** end procedure declaration ***/

void mu_ResetMachine_()
{
mu_ResetMachine_directoryL2 (  );
mu_ResetMachine_directoryL1_1 (  );
mu_ResetMachine_cacheL1_2 (  );
mu_ResetMachine_directoryL1_2 (  );
mu_ResetMachine_cacheL1_1 (  );
};
/*** end procedure declaration ***/

void mu_Clear_perm(const mu_1_Address& mu_adr, const mu_1_Machines& mu_m)
{
{
  mu_1_acc_type_obj& mu_l_perm_set = mu_g_perm[mu_m][mu_adr];
mu_l_perm_set.undefine();
}
};
/*** end procedure declaration ***/

void mu_Set_perm(const mu_1_PermissionType& mu_acc_type, const mu_1_Address& mu_adr, const mu_1_Machines& mu_m)
{
{
  mu_1_acc_type_obj& mu_l_perm_set = mu_g_perm[mu_m][mu_adr];
/*** begin multisetcount 0 declaration ***/
  int mu__intexpr28 = 0;
  {
  mu_1_acc_type_obj_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_l_perm_set.valid[(int)mu_i].value())
	{
	  if ( (mu_l_perm_set[mu_i]) == (mu_acc_type) ) mu__intexpr28++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 0 declaration ***/
if ( (mu__intexpr28) == (0) )
{
mu_l_perm_set.multisetadd(mu_acc_type);
}
}
};
/*** end procedure declaration ***/

void mu_Reset_perm()
{
{
for(int mu_m = 154; mu_m <= 160; mu_m++)
  if (( ( mu_m >= 159 ) && ( mu_m <= 160 ) )|| ( ( mu_m >= 158 ) && ( mu_m <= 158 ) )|| ( ( mu_m >= 156 ) && ( mu_m <= 157 ) )|| ( ( mu_m >= 155 ) && ( mu_m <= 155 ) )|| ( ( mu_m >= 154 ) && ( mu_m <= 154 ) )) {
{
for(int mu_adr = 1; mu_adr <= 1; mu_adr++) {
mu_Clear_perm ( mu_adr, mu_m );
};
};
};
};
};
/*** end procedure declaration ***/

void mu_AddElement_sharersL2(mu_1_v_sharersL2& mu_sv, const mu_1_Machines& mu_n)
{
/*** begin multisetcount 1 declaration ***/
  int mu__intexpr29 = 0;
  {
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr29++;
	}
      if (mu_i == 4-1) break;
    }
  }
/*** end multisetcount 1 declaration ***/
if ( (mu__intexpr29) == (0) )
{
mu_sv.multisetadd(mu_n);
}
};
/*** end procedure declaration ***/

void mu_RemoveElement_sharersL2(mu_1_v_sharersL2& mu_sv, const mu_1_Machines& mu_n)
{
/*** begin multisetcount 2 declaration ***/
  int mu__intexpr30 = 0;
  {
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr30++;
	}
      if (mu_i == 4-1) break;
    }
  }
/*** end multisetcount 2 declaration ***/
if ( (mu__intexpr30) == (1) )
{
/*** end multisetremove 0 declaration ***/
  mu_1_v_sharersL2_id mu__idexpr31;
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) { mu__idexpr31 = mu_i; mu_sv.multisetremove(mu__idexpr31); };
	}
      if (mu_i == 4-1) break;
    }
/*** end multisetremove 0 declaration ***/
}
};
/*** end procedure declaration ***/

void mu_ClearVector_sharersL2(mu_1_v_sharersL2& mu_sv)
{
/*** end multisetremove 1 declaration ***/
  mu_1_v_sharersL2_id mu__idexpr32;
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) { mu__idexpr32 = mu_i; mu_sv.multisetremove(mu__idexpr32); };
	}
      if (mu_i == 4-1) break;
    }
/*** end multisetremove 1 declaration ***/
};
/*** end procedure declaration ***/

mu_0_boolean mu_IsElement_sharersL2(mu_1_v_sharersL2& mu_sv,const mu_1_Machines& mu_n)
{
/*** begin multisetcount 3 declaration ***/
  int mu__intexpr33 = 0;
  {
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr33++;
	}
      if (mu_i == 4-1) break;
    }
  }
/*** end multisetcount 3 declaration ***/
if ( (mu__intexpr33) == (1) )
{
return mu_true;
}
else
{
/*** begin multisetcount 4 declaration ***/
  int mu__intexpr34 = 0;
  {
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr34++;
	}
      if (mu_i == 4-1) break;
    }
  }
/*** end multisetcount 4 declaration ***/
if ( (mu__intexpr34) == (0) )
{
return mu_false;
}
else
{
Error.Error("Error: Multiple Entries of Sharer in SV multiset");
}
}
return mu_false;
	Error.Error("The end of function IsElement_sharersL2 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_HasElement_sharersL2(mu_1_v_sharersL2& mu_sv,const mu_1_Machines& mu_n)
{
/*** begin multisetcount 5 declaration ***/
  int mu__intexpr35 = 0;
  {
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) mu__intexpr35++;
	}
      if (mu_i == 4-1) break;
    }
  }
/*** end multisetcount 5 declaration ***/
if ( (mu__intexpr35) == (0) )
{
return mu_false;
}
return mu_true;
	Error.Error("The end of function HasElement_sharersL2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_cnt_v_sharersL2 mu_VectorCount_sharersL2(mu_1_v_sharersL2& mu_sv)
{
/*** begin multisetcount 6 declaration ***/
  int mu__intexpr36 = 0;
  {
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) mu__intexpr36++;
	}
      if (mu_i == 4-1) break;
    }
  }
/*** end multisetcount 6 declaration ***/
return mu__intexpr36;
	Error.Error("The end of function VectorCount_sharersL2 reached without returning values.");
};
/*** end function declaration ***/

void mu_AddElement_sharersL1_1(mu_1_v_sharersL1_1& mu_sv, const mu_1_Machines& mu_n)
{
/*** begin multisetcount 7 declaration ***/
  int mu__intexpr37 = 0;
  {
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr37++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 7 declaration ***/
if ( (mu__intexpr37) == (0) )
{
mu_sv.multisetadd(mu_n);
}
};
/*** end procedure declaration ***/

void mu_RemoveElement_sharersL1_1(mu_1_v_sharersL1_1& mu_sv, const mu_1_Machines& mu_n)
{
/*** begin multisetcount 8 declaration ***/
  int mu__intexpr38 = 0;
  {
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr38++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 8 declaration ***/
if ( (mu__intexpr38) == (1) )
{
/*** end multisetremove 2 declaration ***/
  mu_1_v_sharersL1_1_id mu__idexpr39;
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) { mu__idexpr39 = mu_i; mu_sv.multisetremove(mu__idexpr39); };
	}
      if (mu_i == 3-1) break;
    }
/*** end multisetremove 2 declaration ***/
}
};
/*** end procedure declaration ***/

void mu_ClearVector_sharersL1_1(mu_1_v_sharersL1_1& mu_sv)
{
/*** end multisetremove 3 declaration ***/
  mu_1_v_sharersL1_1_id mu__idexpr40;
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) { mu__idexpr40 = mu_i; mu_sv.multisetremove(mu__idexpr40); };
	}
      if (mu_i == 3-1) break;
    }
/*** end multisetremove 3 declaration ***/
};
/*** end procedure declaration ***/

mu_0_boolean mu_IsElement_sharersL1_1(mu_1_v_sharersL1_1& mu_sv,const mu_1_Machines& mu_n)
{
/*** begin multisetcount 9 declaration ***/
  int mu__intexpr41 = 0;
  {
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr41++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 9 declaration ***/
if ( (mu__intexpr41) == (1) )
{
return mu_true;
}
else
{
/*** begin multisetcount 10 declaration ***/
  int mu__intexpr42 = 0;
  {
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr42++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 10 declaration ***/
if ( (mu__intexpr42) == (0) )
{
return mu_false;
}
else
{
Error.Error("Error: Multiple Entries of Sharer in SV multiset");
}
}
return mu_false;
	Error.Error("The end of function IsElement_sharersL1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_HasElement_sharersL1_1(mu_1_v_sharersL1_1& mu_sv,const mu_1_Machines& mu_n)
{
/*** begin multisetcount 11 declaration ***/
  int mu__intexpr43 = 0;
  {
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) mu__intexpr43++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 11 declaration ***/
if ( (mu__intexpr43) == (0) )
{
return mu_false;
}
return mu_true;
	Error.Error("The end of function HasElement_sharersL1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_cnt_v_sharersL1_1 mu_VectorCount_sharersL1_1(mu_1_v_sharersL1_1& mu_sv)
{
/*** begin multisetcount 12 declaration ***/
  int mu__intexpr44 = 0;
  {
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) mu__intexpr44++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 12 declaration ***/
return mu__intexpr44;
	Error.Error("The end of function VectorCount_sharersL1_1 reached without returning values.");
};
/*** end function declaration ***/

void mu_AddElement_sharersL1_2(mu_1_v_sharersL1_2& mu_sv, const mu_1_Machines& mu_n)
{
/*** begin multisetcount 13 declaration ***/
  int mu__intexpr45 = 0;
  {
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr45++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 13 declaration ***/
if ( (mu__intexpr45) == (0) )
{
mu_sv.multisetadd(mu_n);
}
};
/*** end procedure declaration ***/

void mu_RemoveElement_sharersL1_2(mu_1_v_sharersL1_2& mu_sv, const mu_1_Machines& mu_n)
{
/*** begin multisetcount 14 declaration ***/
  int mu__intexpr46 = 0;
  {
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr46++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 14 declaration ***/
if ( (mu__intexpr46) == (1) )
{
/*** end multisetremove 4 declaration ***/
  mu_1_v_sharersL1_2_id mu__idexpr47;
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) { mu__idexpr47 = mu_i; mu_sv.multisetremove(mu__idexpr47); };
	}
      if (mu_i == 3-1) break;
    }
/*** end multisetremove 4 declaration ***/
}
};
/*** end procedure declaration ***/

void mu_ClearVector_sharersL1_2(mu_1_v_sharersL1_2& mu_sv)
{
/*** end multisetremove 5 declaration ***/
  mu_1_v_sharersL1_2_id mu__idexpr48;
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) { mu__idexpr48 = mu_i; mu_sv.multisetremove(mu__idexpr48); };
	}
      if (mu_i == 3-1) break;
    }
/*** end multisetremove 5 declaration ***/
};
/*** end procedure declaration ***/

mu_0_boolean mu_IsElement_sharersL1_2(mu_1_v_sharersL1_2& mu_sv,const mu_1_Machines& mu_n)
{
/*** begin multisetcount 15 declaration ***/
  int mu__intexpr49 = 0;
  {
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr49++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 15 declaration ***/
if ( (mu__intexpr49) == (1) )
{
return mu_true;
}
else
{
/*** begin multisetcount 16 declaration ***/
  int mu__intexpr50 = 0;
  {
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr50++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 16 declaration ***/
if ( (mu__intexpr50) == (0) )
{
return mu_false;
}
else
{
Error.Error("Error: Multiple Entries of Sharer in SV multiset");
}
}
return mu_false;
	Error.Error("The end of function IsElement_sharersL1_2 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_HasElement_sharersL1_2(mu_1_v_sharersL1_2& mu_sv,const mu_1_Machines& mu_n)
{
/*** begin multisetcount 17 declaration ***/
  int mu__intexpr51 = 0;
  {
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) mu__intexpr51++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 17 declaration ***/
if ( (mu__intexpr51) == (0) )
{
return mu_false;
}
return mu_true;
	Error.Error("The end of function HasElement_sharersL1_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_cnt_v_sharersL1_2 mu_VectorCount_sharersL1_2(mu_1_v_sharersL1_2& mu_sv)
{
/*** begin multisetcount 18 declaration ***/
  int mu__intexpr52 = 0;
  {
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) mu__intexpr52++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 18 declaration ***/
return mu__intexpr52;
	Error.Error("The end of function VectorCount_sharersL1_2 reached without returning values.");
};
/*** end function declaration ***/

void mu_Send_fwd(mu_1_Message& mu_msg, const mu_1_Machines& mu_src)
{
if ( !((mu_cnt_fwd[mu_msg.mu_dst]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many messages");
mu_fwd[mu_msg.mu_dst][mu_cnt_fwd[mu_msg.mu_dst]] = mu_msg;
mu_cnt_fwd[mu_msg.mu_dst] = (mu_cnt_fwd[mu_msg.mu_dst]) + (1);
};
/*** end procedure declaration ***/

void mu_Pop_fwd(const mu_1_Machines& mu_dst)
{
if ( !((mu_cnt_fwd[mu_dst]) > (0)) ) Error.Error("Assertion failed: Trying to advance empty Q");
{
int mu__ub53 = (mu_cnt_fwd[mu_dst]) - (1);
for (int mu_i = 0; mu_i <= mu__ub53; mu_i += 1) {
if ( (mu_i) < ((mu_cnt_fwd[mu_dst]) - (1)) )
{
mu_fwd[mu_dst][mu_i] = mu_fwd[mu_dst][(mu_i) + (1)];
}
else
{
mu_fwd[mu_dst][mu_i].undefine();
}
};
};
mu_cnt_fwd[mu_dst] = (mu_cnt_fwd[mu_dst]) - (1);
};
/*** end procedure declaration ***/

void mu_Send_resp(mu_1_Message& mu_msg, const mu_1_Machines& mu_src)
{
if ( !((mu_cnt_resp[mu_msg.mu_dst]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many messages");
mu_resp[mu_msg.mu_dst][mu_cnt_resp[mu_msg.mu_dst]] = mu_msg;
mu_cnt_resp[mu_msg.mu_dst] = (mu_cnt_resp[mu_msg.mu_dst]) + (1);
};
/*** end procedure declaration ***/

void mu_Pop_resp(const mu_1_Machines& mu_dst)
{
if ( !((mu_cnt_resp[mu_dst]) > (0)) ) Error.Error("Assertion failed: Trying to advance empty Q");
{
int mu__ub54 = (mu_cnt_resp[mu_dst]) - (1);
for (int mu_i = 0; mu_i <= mu__ub54; mu_i += 1) {
if ( (mu_i) < ((mu_cnt_resp[mu_dst]) - (1)) )
{
mu_resp[mu_dst][mu_i] = mu_resp[mu_dst][(mu_i) + (1)];
}
else
{
mu_resp[mu_dst][mu_i].undefine();
}
};
};
mu_cnt_resp[mu_dst] = (mu_cnt_resp[mu_dst]) - (1);
};
/*** end procedure declaration ***/

void mu_Send_req(mu_1_Message& mu_msg, const mu_1_Machines& mu_src)
{
if ( !((mu_cnt_req[mu_msg.mu_dst]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many messages");
mu_req[mu_msg.mu_dst][mu_cnt_req[mu_msg.mu_dst]] = mu_msg;
mu_cnt_req[mu_msg.mu_dst] = (mu_cnt_req[mu_msg.mu_dst]) + (1);
};
/*** end procedure declaration ***/

void mu_Pop_req(const mu_1_Machines& mu_dst)
{
if ( !((mu_cnt_req[mu_dst]) > (0)) ) Error.Error("Assertion failed: Trying to advance empty Q");
{
int mu__ub55 = (mu_cnt_req[mu_dst]) - (1);
for (int mu_i = 0; mu_i <= mu__ub55; mu_i += 1) {
if ( (mu_i) < ((mu_cnt_req[mu_dst]) - (1)) )
{
mu_req[mu_dst][mu_i] = mu_req[mu_dst][(mu_i) + (1)];
}
else
{
mu_req[mu_dst][mu_i].undefine();
}
};
};
mu_cnt_req[mu_dst] = (mu_cnt_req[mu_dst]) - (1);
};
/*** end procedure declaration ***/

void mu_Multicast_fwd_v_sharersL2(mu_1_Message& mu_msg, mu_1_v_sharersL2& mu_dst_vect, const mu_1_Machines& mu_src)
{
{
for(int mu_n = 154; mu_n <= 160; mu_n++)
  if (( ( mu_n >= 159 ) && ( mu_n <= 160 ) )|| ( ( mu_n >= 158 ) && ( mu_n <= 158 ) )|| ( ( mu_n >= 156 ) && ( mu_n <= 157 ) )|| ( ( mu_n >= 155 ) && ( mu_n <= 155 ) )|| ( ( mu_n >= 154 ) && ( mu_n <= 154 ) )) {
if ( (mu_n) != (mu_msg.mu_src) )
{
/*** begin multisetcount 19 declaration ***/
  int mu__intexpr56 = 0;
  {
  mu_1_v_sharersL2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_dst_vect.valid[(int)mu_i].value())
	{
	  if ( (mu_dst_vect[mu_i]) == (mu_n) ) mu__intexpr56++;
	}
      if (mu_i == 4-1) break;
    }
  }
/*** end multisetcount 19 declaration ***/
if ( (mu__intexpr56) == (1) )
{
mu_msg.mu_dst = mu_n;
mu_Send_fwd ( mu_msg, mu_src );
}
}
};
};
};
/*** end procedure declaration ***/

void mu_Multicast_fwd_v_sharersL1_1(mu_1_Message& mu_msg, mu_1_v_sharersL1_1& mu_dst_vect, const mu_1_Machines& mu_src)
{
{
for(int mu_n = 154; mu_n <= 160; mu_n++)
  if (( ( mu_n >= 159 ) && ( mu_n <= 160 ) )|| ( ( mu_n >= 158 ) && ( mu_n <= 158 ) )|| ( ( mu_n >= 156 ) && ( mu_n <= 157 ) )|| ( ( mu_n >= 155 ) && ( mu_n <= 155 ) )|| ( ( mu_n >= 154 ) && ( mu_n <= 154 ) )) {
if ( (mu_n) != (mu_msg.mu_src) )
{
/*** begin multisetcount 20 declaration ***/
  int mu__intexpr57 = 0;
  {
  mu_1_v_sharersL1_1_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_dst_vect.valid[(int)mu_i].value())
	{
	  if ( (mu_dst_vect[mu_i]) == (mu_n) ) mu__intexpr57++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 20 declaration ***/
if ( (mu__intexpr57) == (1) )
{
mu_msg.mu_dst = mu_n;
mu_Send_fwd ( mu_msg, mu_src );
}
}
};
};
};
/*** end procedure declaration ***/

void mu_Multicast_fwd_v_sharersL1_2(mu_1_Message& mu_msg, mu_1_v_sharersL1_2& mu_dst_vect, const mu_1_Machines& mu_src)
{
{
for(int mu_n = 154; mu_n <= 160; mu_n++)
  if (( ( mu_n >= 159 ) && ( mu_n <= 160 ) )|| ( ( mu_n >= 158 ) && ( mu_n <= 158 ) )|| ( ( mu_n >= 156 ) && ( mu_n <= 157 ) )|| ( ( mu_n >= 155 ) && ( mu_n <= 155 ) )|| ( ( mu_n >= 154 ) && ( mu_n <= 154 ) )) {
if ( (mu_n) != (mu_msg.mu_src) )
{
/*** begin multisetcount 21 declaration ***/
  int mu__intexpr58 = 0;
  {
  mu_1_v_sharersL1_2_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_dst_vect.valid[(int)mu_i].value())
	{
	  if ( (mu_dst_vect[mu_i]) == (mu_n) ) mu__intexpr58++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 21 declaration ***/
if ( (mu__intexpr58) == (1) )
{
mu_msg.mu_dst = mu_n;
mu_Send_fwd ( mu_msg, mu_src );
}
}
};
};
};
/*** end procedure declaration ***/

mu_0_boolean mu_resp_network_ready()
{
{
for(int mu_dst = 154; mu_dst <= 160; mu_dst++)
  if (( ( mu_dst >= 159 ) && ( mu_dst <= 160 ) )|| ( ( mu_dst >= 158 ) && ( mu_dst <= 158 ) )|| ( ( mu_dst >= 156 ) && ( mu_dst <= 157 ) )|| ( ( mu_dst >= 155 ) && ( mu_dst <= 155 ) )|| ( ( mu_dst >= 154 ) && ( mu_dst <= 154 ) )) {
if ( (mu_cnt_resp[mu_dst]) >= (9) )
{
return mu_false;
}
};
};
return mu_true;
	Error.Error("The end of function resp_network_ready reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_req_network_ready()
{
{
for(int mu_dst = 154; mu_dst <= 160; mu_dst++)
  if (( ( mu_dst >= 159 ) && ( mu_dst <= 160 ) )|| ( ( mu_dst >= 158 ) && ( mu_dst <= 158 ) )|| ( ( mu_dst >= 156 ) && ( mu_dst <= 157 ) )|| ( ( mu_dst >= 155 ) && ( mu_dst <= 155 ) )|| ( ( mu_dst >= 154 ) && ( mu_dst <= 154 ) )) {
if ( (mu_cnt_req[mu_dst]) >= (9) )
{
return mu_false;
}
};
};
return mu_true;
	Error.Error("The end of function req_network_ready reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_fwd_network_ready()
{
{
for(int mu_dst = 154; mu_dst <= 160; mu_dst++)
  if (( ( mu_dst >= 159 ) && ( mu_dst <= 160 ) )|| ( ( mu_dst >= 158 ) && ( mu_dst <= 158 ) )|| ( ( mu_dst >= 156 ) && ( mu_dst <= 157 ) )|| ( ( mu_dst >= 155 ) && ( mu_dst <= 155 ) )|| ( ( mu_dst >= 154 ) && ( mu_dst <= 154 ) )) {
if ( (mu_cnt_fwd[mu_dst]) >= (9) )
{
return mu_false;
}
};
};
return mu_true;
	Error.Error("The end of function fwd_network_ready reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_network_ready()
{
if ( !(mu_resp_network_ready(  )) )
{
return mu_false;
}
if ( !(mu_resp_network_ready(  )) )
{
return mu_false;
}
if ( !(mu_req_network_ready(  )) )
{
return mu_false;
}
if ( !(mu_fwd_network_ready(  )) )
{
return mu_false;
}
if ( !(mu_req_network_ready(  )) )
{
return mu_false;
}
if ( !(mu_req_network_ready(  )) )
{
return mu_false;
}
if ( !(mu_resp_network_ready(  )) )
{
return mu_false;
}
if ( !(mu_fwd_network_ready(  )) )
{
return mu_false;
}
if ( !(mu_fwd_network_ready(  )) )
{
return mu_false;
}
return mu_true;
	Error.Error("The end of function network_ready reached without returning values.");
};
/*** end function declaration ***/

void mu_Reset_NET_()
{
mu_resp.undefine();
{
for(int mu_dst = 154; mu_dst <= 160; mu_dst++)
  if (( ( mu_dst >= 159 ) && ( mu_dst <= 160 ) )|| ( ( mu_dst >= 158 ) && ( mu_dst <= 158 ) )|| ( ( mu_dst >= 156 ) && ( mu_dst <= 157 ) )|| ( ( mu_dst >= 155 ) && ( mu_dst <= 155 ) )|| ( ( mu_dst >= 154 ) && ( mu_dst <= 154 ) )) {
mu_cnt_resp[mu_dst] = 0;
};
};
mu_fwd.undefine();
{
for(int mu_dst = 154; mu_dst <= 160; mu_dst++)
  if (( ( mu_dst >= 159 ) && ( mu_dst <= 160 ) )|| ( ( mu_dst >= 158 ) && ( mu_dst <= 158 ) )|| ( ( mu_dst >= 156 ) && ( mu_dst <= 157 ) )|| ( ( mu_dst >= 155 ) && ( mu_dst <= 155 ) )|| ( ( mu_dst >= 154 ) && ( mu_dst <= 154 ) )) {
mu_cnt_fwd[mu_dst] = 0;
};
};
mu_req.undefine();
{
for(int mu_dst = 154; mu_dst <= 160; mu_dst++)
  if (( ( mu_dst >= 159 ) && ( mu_dst <= 160 ) )|| ( ( mu_dst >= 158 ) && ( mu_dst <= 158 ) )|| ( ( mu_dst >= 156 ) && ( mu_dst <= 157 ) )|| ( ( mu_dst >= 155 ) && ( mu_dst <= 155 ) )|| ( ( mu_dst >= 154 ) && ( mu_dst <= 154 ) )) {
mu_cnt_req[mu_dst] = 0;
};
};
};
/*** end procedure declaration ***/

mu_1_Message mu_RequestL1_2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
return mu_Message;
	Error.Error("The end of function RequestL1_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_AckL1_2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
return mu_Message;
	Error.Error("The end of function AckL1_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespL1_2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1_ClValue& mu_cl)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
if (mu_cl.isundefined())
  mu_Message.mu_cl.undefine();
else
  mu_Message.mu_cl = mu_cl;
return mu_Message;
	Error.Error("The end of function RespL1_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespAckL1_2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1_ClValue& mu_cl,const mu_1__type_24& mu_acksRequiredL1_2)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
if (mu_cl.isundefined())
  mu_Message.mu_cl.undefine();
else
  mu_Message.mu_cl = mu_cl;
if (mu_acksRequiredL1_2.isundefined())
  mu_Message.mu_acksRequiredL1_2.undefine();
else
  mu_Message.mu_acksRequiredL1_2 = mu_acksRequiredL1_2;
return mu_Message;
	Error.Error("The end of function RespAckL1_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RequestL1_1(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
return mu_Message;
	Error.Error("The end of function RequestL1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_AckL1_1(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
return mu_Message;
	Error.Error("The end of function AckL1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespL1_1(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1_ClValue& mu_cl)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
if (mu_cl.isundefined())
  mu_Message.mu_cl.undefine();
else
  mu_Message.mu_cl = mu_cl;
return mu_Message;
	Error.Error("The end of function RespL1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespAckL1_1(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1_ClValue& mu_cl,const mu_1__type_25& mu_acksRequiredL1_1)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
if (mu_cl.isundefined())
  mu_Message.mu_cl.undefine();
else
  mu_Message.mu_cl = mu_cl;
if (mu_acksRequiredL1_1.isundefined())
  mu_Message.mu_acksRequiredL1_1.undefine();
else
  mu_Message.mu_acksRequiredL1_1 = mu_acksRequiredL1_1;
return mu_Message;
	Error.Error("The end of function RespAckL1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RequestL2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
return mu_Message;
	Error.Error("The end of function RequestL2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_AckL2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
return mu_Message;
	Error.Error("The end of function AckL2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespAckL2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1__type_26& mu_acksExpectedL2)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
if (mu_acksExpectedL2.isundefined())
  mu_Message.mu_acksExpectedL2.undefine();
else
  mu_Message.mu_acksExpectedL2 = mu_acksExpectedL2;
return mu_Message;
	Error.Error("The end of function RespAckL2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespDataL2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1_ClValue& mu_cl)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
if (mu_cl.isundefined())
  mu_Message.mu_cl.undefine();
else
  mu_Message.mu_cl = mu_cl;
return mu_Message;
	Error.Error("The end of function RespDataL2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespDataAckL2(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1_ClValue& mu_cl,const mu_1__type_27& mu_acksExpectedL2)
{
/*** Variable declaration ***/
mu_1_Message mu_Message("Message",0);

if (mu_adr.isundefined())
  mu_Message.mu_adr.undefine();
else
  mu_Message.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_Message.mu_mtype.undefine();
else
  mu_Message.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_Message.mu_src.undefine();
else
  mu_Message.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_Message.mu_dst.undefine();
else
  mu_Message.mu_dst = mu_dst;
if (mu_cl.isundefined())
  mu_Message.mu_cl.undefine();
else
  mu_Message.mu_cl = mu_cl;
if (mu_acksExpectedL2.isundefined())
  mu_Message.mu_acksExpectedL2.undefine();
else
  mu_Message.mu_acksExpectedL2 = mu_acksExpectedL2;
return mu_Message;
	Error.Error("The end of function RespDataAckL2 reached without returning values.");
};
/*** end function declaration ***/

void mu_FSM_Access_cacheL1_1_I_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_msg = mu_RequestL1_1( mu_adr, mu_GetSL1_1, (int)mu_m, (int)mu_directoryL1_1 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I_load;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_1_I_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_msg = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_directoryL1_1 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_State = mu_cacheL1_1_I_store;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_1_M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_msg = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_directoryL1_1, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M_evict;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_1_M_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_1& mu_m)
{
{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_1_M_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_1& mu_m)
{
{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_1_S_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_msg = mu_RequestL1_1( mu_adr, mu_PutSL1_1, (int)mu_m, (int)mu_directoryL1_1 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S_evict;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_1_S_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_1& mu_m)
{
{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_1_S_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_msg = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_directoryL1_1 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_State = mu_cacheL1_1_S_store;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_2_I_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_msg = mu_RequestL1_2( mu_adr, mu_GetSL1_2, (int)mu_m, (int)mu_directoryL1_2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I_load;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_2_I_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_msg = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_directoryL1_2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_State = mu_cacheL1_2_I_store;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_2_M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_msg = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_directoryL1_2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M_evict;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_2_M_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_2& mu_m)
{
{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_2_M_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_2& mu_m)
{
{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_2_S_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_msg = mu_RequestL1_2( mu_adr, mu_PutSL1_2, (int)mu_m, (int)mu_directoryL1_2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S_evict;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_2_S_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_2& mu_m)
{
{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_cacheL1_2_S_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cacheL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_msg = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_directoryL1_2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_State = mu_cacheL1_2_S_store;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_1_I__C__M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_1("msg_GetML1_1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_DL1_1("msg_GetM_Ack_DL1_1",24);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutML1_1("msg_PutML1_1",48);

/*** Variable declaration ***/
mu_1_Message mu_msg_Put_AckL1_1("msg_Put_AckL1_1",72);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",96);

{
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg_GetM_Ack_DL1_1 = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_1.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__M_evict;
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_1_I__C__O_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_1("msg_GetML1_1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_DL1_1("msg_GetM_Ack_DL1_1",24);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutML1_1("msg_PutML1_1",48);

/*** Variable declaration ***/
mu_1_Message mu_msg_Put_AckL1_1("msg_Put_AckL1_1",72);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",96);

{
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg_GetM_Ack_DL1_1 = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_1.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__O_evict;
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_1_I__C__S_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_1("msg_GetML1_1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_DL1_1("msg_GetM_Ack_DL1_1",24);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutML1_1("msg_PutML1_1",48);

/*** Variable declaration ***/
mu_1_Message mu_msg_Put_AckL1_1("msg_Put_AckL1_1",72);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",96);

{
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg_GetM_Ack_DL1_1 = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_1.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RequestL2( mu_adr, mu_PutSL2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__S_evict;
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_1_M__C__M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_1("msg_GetML1_1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",24);

{
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg = mu_RequestL1_1( mu_adr, mu_Fwd_GetML1_1, mu_msg_GetML1_1.mu_src, mu_cbe.mu_ownerL1_1 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_State = mu_directoryL1_1_mevict__dM_x_pI_store__C__M;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_1_S__C__M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_1("msg_GetML1_1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_ADL1_1("msg_GetM_Ack_ADL1_1",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",48);

{
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_msg_GetML1_1.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_1 = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_msg_GetML1_1.mu_src, mu_msg_GetML1_1.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_1.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_msg_GetM_Ack_ADL1_1.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_cbe.mu_State = mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_1_S__C__O_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_1("msg_GetML1_1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_ADL1_1("msg_GetM_Ack_ADL1_1",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",48);

{
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_msg_GetML1_1.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_1 = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_msg_GetML1_1.mu_src, mu_msg_GetML1_1.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_1.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_msg_GetM_Ack_ADL1_1.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_cbe.mu_State = mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__O;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_1_S__C__S_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_1("msg_GetML1_1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_ADL1_1("msg_GetM_Ack_ADL1_1",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",48);

{
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_msg_GetML1_1.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_1 = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_msg_GetML1_1.mu_src, mu_msg_GetML1_1.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_1.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_msg_GetM_Ack_ADL1_1.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_cbe.mu_State = mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_2_I__C__M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_2("msg_GetML1_2",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_DL1_2("msg_GetM_Ack_DL1_2",24);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutML1_2("msg_PutML1_2",48);

/*** Variable declaration ***/
mu_1_Message mu_msg_Put_AckL1_2("msg_Put_AckL1_2",72);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",96);

{
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg_GetM_Ack_DL1_2 = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_2.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__M_evict;
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_2_I__C__O_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_2("msg_GetML1_2",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_DL1_2("msg_GetM_Ack_DL1_2",24);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutML1_2("msg_PutML1_2",48);

/*** Variable declaration ***/
mu_1_Message mu_msg_Put_AckL1_2("msg_Put_AckL1_2",72);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",96);

{
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg_GetM_Ack_DL1_2 = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_2.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__O_evict;
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_2_I__C__S_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_2("msg_GetML1_2",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_DL1_2("msg_GetM_Ack_DL1_2",24);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutML1_2("msg_PutML1_2",48);

/*** Variable declaration ***/
mu_1_Message mu_msg_Put_AckL1_2("msg_Put_AckL1_2",72);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",96);

{
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg_GetM_Ack_DL1_2 = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_2.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RequestL2( mu_adr, mu_PutSL2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__S_evict;
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_2_M__C__M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_2("msg_GetML1_2",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",24);

{
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg = mu_RequestL1_2( mu_adr, mu_Fwd_GetML1_2, mu_msg_GetML1_2.mu_src, mu_cbe.mu_ownerL1_2 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_State = mu_directoryL1_2_mevict__dM_x_pI_store__C__M;
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_2_S__C__M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_2("msg_GetML1_2",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_ADL1_2("msg_GetM_Ack_ADL1_2",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",48);

{
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_msg_GetML1_2.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_2 = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_msg_GetML1_2.mu_src, mu_msg_GetML1_2.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_2.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_msg_GetM_Ack_ADL1_2.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_cbe.mu_State = mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_2_S__C__O_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_2("msg_GetML1_2",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_ADL1_2("msg_GetM_Ack_ADL1_2",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",48);

{
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_msg_GetML1_2.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_2 = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_msg_GetML1_2.mu_src, mu_msg_GetML1_2.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_2.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_msg_GetM_Ack_ADL1_2.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_cbe.mu_State = mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__O;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_FSM_Access_directoryL1_2_S__C__S_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_directoryL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_2("msg_GetML1_2",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_ADL1_2("msg_GetM_Ack_ADL1_2",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",48);

{
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_msg_GetML1_2.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_2 = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_msg_GetML1_2.mu_src, mu_msg_GetML1_2.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_2.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_msg_GetM_Ack_ADL1_2.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_cbe.mu_State = mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S;
}
}
}
}
};
/*** end procedure declaration ***/

mu_0_boolean mu_FSM_MSG_directoryL2(mu_1_Message& mu_inmsg,const mu_1_OBJSET_directoryL2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  const int mu_adr = mu_inmsg.mu_adr;
{
  mu_1_ENTRY_directoryL2& mu_cbe = mu_i_directoryL2[mu_m].mu_cb[mu_adr];
switch ((int) mu_cbe.mu_State) {
case mu_directoryL2_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL2_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
break;
case mu_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_AddElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_S;
return mu_true;
break;
case mu_PutML2:
mu_msg = mu_AckL2( mu_adr, mu_Put_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
break;
case mu_PutSL2:
mu_msg = mu_AckL2( mu_adr, mu_Put_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL2_M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL2_M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML2:
mu_msg = mu_RequestL2( mu_adr, mu_Fwd_GetML2, mu_inmsg.mu_src, mu_cbe.mu_ownerL2 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
break;
case mu_GetSL2:
mu_msg = mu_RequestL2( mu_adr, mu_Fwd_GetSL2, mu_inmsg.mu_src, mu_cbe.mu_ownerL2 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_AddElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_O;
return mu_true;
break;
case mu_PutML2:
mu_msg = mu_AckL2( mu_adr, mu_Put_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
if ( !((mu_cbe.mu_ownerL2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
if ( (mu_cbe.mu_ownerL2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
break;
case mu_PutSL2:
mu_msg = mu_AckL2( mu_adr, mu_Put_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
if ( (mu_cbe.mu_ownerL2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
if ( !((mu_cbe.mu_ownerL2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL2_O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL2_O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML2:
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
if ( (mu_cbe.mu_ownerL2) == (mu_inmsg.mu_src) )
{
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 ) );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) != (0)) )
{
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_ClearVector_sharersL2 ( mu_cbe.mu_sharersL2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) != (0) )
{
mu_msg = mu_AckL2( mu_adr, mu_InvL2, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_sharersL2 ( mu_msg, mu_cbe.mu_sharersL2, (int)mu_m );
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_ClearVector_sharersL2 ( mu_cbe.mu_sharersL2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
}
if ( !((mu_cbe.mu_ownerL2) == (mu_inmsg.mu_src)) )
{
mu_msg = mu_RespAckL2( mu_adr, mu_Fwd_GetML2, mu_inmsg.mu_src, mu_cbe.mu_ownerL2, (int)mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 ) );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) != (0)) )
{
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_ClearVector_sharersL2 ( mu_cbe.mu_sharersL2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) != (0) )
{
mu_msg = mu_AckL2( mu_adr, mu_InvL2, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_sharersL2 ( mu_msg, mu_cbe.mu_sharersL2, (int)mu_m );
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_ClearVector_sharersL2 ( mu_cbe.mu_sharersL2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
}
break;
case mu_GetSL2:
mu_msg = mu_RequestL2( mu_adr, mu_Fwd_GetSL2, mu_inmsg.mu_src, mu_cbe.mu_ownerL2 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_AddElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_O;
return mu_true;
break;
case mu_PutML2:
mu_msg = mu_AckL2( mu_adr, mu_Put_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
if ( (mu_cbe.mu_ownerL2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_S;
return mu_true;
}
}
if ( !((mu_cbe.mu_ownerL2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_O;
return mu_true;
}
break;
case mu_PutSL2:
mu_msg = mu_AckL2( mu_adr, mu_Put_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_O;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL2_S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL2_S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML2:
if ( mu_IsElement_sharersL2( mu_cbe.mu_sharersL2, mu_inmsg.mu_src ) )
{
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) != (0) )
{
mu_msg = mu_AckL2( mu_adr, mu_InvL2, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_sharersL2 ( mu_msg, mu_cbe.mu_sharersL2, (int)mu_m );
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_ClearVector_sharersL2 ( mu_cbe.mu_sharersL2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) != (0)) )
{
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_ClearVector_sharersL2 ( mu_cbe.mu_sharersL2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
}
if ( !(mu_IsElement_sharersL2( mu_cbe.mu_sharersL2, mu_inmsg.mu_src )) )
{
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) != (0)) )
{
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_ClearVector_sharersL2 ( mu_cbe.mu_sharersL2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) != (0) )
{
mu_msg = mu_AckL2( mu_adr, mu_InvL2, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_sharersL2 ( mu_msg, mu_cbe.mu_sharersL2, (int)mu_m );
mu_cbe.mu_ownerL2 = mu_inmsg.mu_src;
mu_ClearVector_sharersL2 ( mu_cbe.mu_sharersL2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_M;
return mu_true;
}
}
break;
case mu_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_AddElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_S;
return mu_true;
break;
case mu_PutML2:
mu_msg = mu_AckL2( mu_adr, mu_Put_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_S;
return mu_true;
}
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
break;
case mu_PutSL2:
mu_msg = mu_AckL2( mu_adr, mu_Put_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL2 ( mu_cbe.mu_sharersL2, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_S;
return mu_true;
}
if ( (mu_VectorCount_sharersL2( mu_cbe.mu_sharersL2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL2_I;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
}
}
}
return mu_false;
	Error.Error("The end of function FSM_MSG_directoryL2 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_FSM_MSG_directoryL1_1(mu_1_Message& mu_inmsg,const mu_1_OBJSET_directoryL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_1("msg_GetML1_1",24);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_DL1_1("msg_GetM_Ack_DL1_1",48);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutML1_1("msg_PutML1_1",72);

/*** Variable declaration ***/
mu_1_Message mu_msg_Put_AckL1_1("msg_Put_AckL1_1",96);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetSL1_1("msg_GetSL1_1",120);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetS_AckL1_1("msg_GetS_AckL1_1",144);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutSL1_1("msg_PutSL1_1",168);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_ADL1_1("msg_GetM_Ack_ADL1_1",192);

{
  const int mu_adr = mu_inmsg.mu_adr;
{
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
switch ((int) mu_cbe.mu_State) {
case mu_directoryL1_1_I__C__I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_I__C__I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__I_store;
return mu_true;
break;
case mu_GetSL1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetSL2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetSL1_1__I__C__I_load;
return mu_true;
break;
case mu_PutML1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
if ( (mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
break;
case mu_PutSL1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_I__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_I__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg_GetM_Ack_DL1_1 = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_1.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_1 = mu_RequestL1_1( mu_adr, mu_GetSL1_1, (int)mu_m, (int)mu_m );
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_GetSL1_1.mu_src );
mu_msg_GetS_AckL1_1 = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_msg_GetSL1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_cl = mu_msg_GetS_AckL1_1.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_1 = mu_RequestL1_1( mu_adr, mu_PutSL1_1, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutSL1_1.mu_src );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_PutSL1_1.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
break;
case mu_GetML1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
break;
case mu_GetSL1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__M;
return mu_true;
break;
case mu_PutML1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__M;
return mu_true;
}
if ( (mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__M;
return mu_true;
}
break;
case mu_PutSL1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_I__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_I__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg_GetM_Ack_DL1_1 = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_1.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl, (int)mu_cbe.mu_invalidation_msg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_1 = mu_RequestL1_1( mu_adr, mu_GetSL1_1, (int)mu_m, (int)mu_m );
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_GetSL1_1.mu_src );
mu_msg_GetS_AckL1_1 = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_msg_GetSL1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_cl = mu_msg_GetS_AckL1_1.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_1 = mu_RequestL1_1( mu_adr, mu_PutSL1_1, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutSL1_1.mu_src );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_PutSL1_1.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
break;
case mu_GetML1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__O_store;
return mu_true;
break;
case mu_GetSL1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__O;
return mu_true;
break;
case mu_PutML1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( (mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
if ( !((mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
break;
case mu_PutSL1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_I__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_I__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__S_store;
return mu_true;
break;
case mu_GetSL1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__S;
return mu_true;
break;
case mu_InvL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg_GetM_Ack_DL1_1 = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_1.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
break;
case mu_PutML1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__S;
return mu_true;
}
if ( (mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__S;
return mu_true;
}
break;
case mu_PutSL1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__S;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_M__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_M__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg = mu_RequestL1_1( mu_adr, mu_Fwd_GetML1_1, mu_msg_GetML1_1.mu_src, mu_cbe.mu_ownerL1_1 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store__C__M;
return mu_true;
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_1 = mu_RequestL1_1( mu_adr, mu_GetSL1_1, (int)mu_m, (int)mu_m );
mu_msg = mu_RequestL1_1( mu_adr, mu_Fwd_GetSL1_1, mu_msg_GetSL1_1.mu_src, mu_cbe.mu_ownerL1_1 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_GetSL1_1.mu_src );
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_ownerL1_1 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetSL2__dM_GetS_x_pI_load__C__M;
return mu_true;
break;
case mu_GetML1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL1_1( mu_adr, mu_Fwd_GetML1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_ownerL1_1 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
break;
case mu_GetSL1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL1_1( mu_adr, mu_Fwd_GetSL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_ownerL1_1 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_ownerL1_1 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetSL1_1__M_GetS__C__M;
return mu_true;
break;
case mu_PutML1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__M;
return mu_true;
}
break;
case mu_PutSL1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( (mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__M;
return mu_true;
}
if ( !((mu_cbe.mu_ownerL1_1) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_S__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_S__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_msg_GetML1_1.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_1 = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_msg_GetML1_1.mu_src, mu_msg_GetML1_1.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_1.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_msg_GetM_Ack_ADL1_1.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M;
return mu_true;
}
}
}
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_1 = mu_RequestL1_1( mu_adr, mu_GetSL1_1, (int)mu_m, (int)mu_m );
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_GetSL1_1.mu_src );
mu_msg_GetS_AckL1_1 = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_msg_GetSL1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_cl = mu_msg_GetS_AckL1_1.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_1 = mu_RequestL1_1( mu_adr, mu_PutSL1_1, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutSL1_1.mu_src );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_PutSL1_1.mu_src );
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__O;
return mu_true;
}
break;
case mu_GetML1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
if ( mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
break;
case mu_GetSL1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__M;
return mu_true;
break;
case mu_PutML1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__M;
return mu_true;
}
break;
case mu_PutSL1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_S__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_S__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_msg_GetML1_1.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_1 = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_msg_GetML1_1.mu_src, mu_msg_GetML1_1.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_1.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_msg_GetM_Ack_ADL1_1.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
}
}
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_1 = mu_RequestL1_1( mu_adr, mu_GetSL1_1, (int)mu_m, (int)mu_m );
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_GetSL1_1.mu_src );
mu_msg_GetS_AckL1_1 = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_msg_GetSL1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_cl = mu_msg_GetS_AckL1_1.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_1 = mu_RequestL1_1( mu_adr, mu_PutSL1_1, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutSL1_1.mu_src );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_PutSL1_1.mu_src );
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__O;
return mu_true;
}
break;
case mu_GetML1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__O_store;
return mu_true;
break;
case mu_GetSL1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__O;
return mu_true;
break;
case mu_PutML1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__O;
return mu_true;
}
break;
case mu_PutSL1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_S__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_S__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__S_store;
return mu_true;
break;
case mu_GetSL1_1:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__S;
return mu_true;
break;
case mu_InvL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_msg_GetML1_1.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_1 = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_msg_GetML1_1.mu_src, mu_msg_GetML1_1.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_1.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_msg_GetM_Ack_ADL1_1.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
}
}
break;
case mu_PutML1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__S;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__S;
return mu_true;
}
break;
case mu_PutSL1_1:
mu_msg = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__S;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl, (int)mu_cbe.mu_invalidation_msg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mFwd_GetML2__dM_x_pI_store__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_DL1_1:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
break;
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetML2__dM_x_pI_store__C__M;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mFwd_GetSL2__dM_GetS_x_pI_load__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mFwd_GetSL2__dM_GetS_x_pI_load__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_AckL1_1:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetSL2__dM_GetS_x_pS__C__M;
return mu_true;
break;
case mu_WBL1_1:
if ( (mu_inmsg.mu_src) == (mu_cbe.mu_ownerL1_1) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mFwd_GetSL2__dS_x_pI_load__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mFwd_GetSL2__dM_GetS_x_pS__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mFwd_GetSL2__dM_GetS_x_pS__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_WBL1_1:
if ( (mu_inmsg.mu_src) == (mu_cbe.mu_ownerL1_1) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg_PutSL1_1 = mu_RequestL1_1( mu_adr, mu_PutSL1_1, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutSL1_1.mu_src );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_PutSL1_1.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__O;
return mu_true;
}
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mFwd_GetSL2__dS_x_pI_load__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mFwd_GetSL2__dS_x_pI_load__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_AckL1_1:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_1 = mu_RequestL1_1( mu_adr, mu_PutSL1_1, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutSL1_1.mu_src );
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_msg_PutSL1_1.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__O;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__I__C__I_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__I__C__I_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__I_store_GetM_Ack_AD;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__I_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__I__C__I_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__I__C__I_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__I_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__I__C__O_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__I__C__O_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg_GetM_Ack_DL1_1 = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_1.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl, (int)mu_cbe.mu_invalidation_msg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__I_store;
return mu_true;
}
break;
case mu_Fwd_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__O_store;
return mu_true;
break;
case mu_GetM_Ack_ADL2:
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__O_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__O_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__I__C__O_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__I__C__O_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__O_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__I__C__S_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__I__C__S_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL2:
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__S_store_GetM_Ack_AD;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
break;
case mu_InvL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_msg_GetM_Ack_DL1_1 = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_1.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__I_store;
return mu_true;
}
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__S_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__I__C__S_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__I__C__S_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__S_store_GetM_Ack_AD;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__S__C__O_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__S__C__O_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_msg_GetML1_1.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_1 = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_msg_GetML1_1.mu_src, mu_msg_GetML1_1.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_1.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_msg_GetM_Ack_ADL1_1.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
}
}
break;
case mu_Fwd_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__O_store;
return mu_true;
break;
case mu_GetM_Ack_ADL2:
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__O_store_GetM_Ack_AD;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__O_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__S__C__O_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__S__C__O_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__O_store_GetM_Ack_AD;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__S__C__S_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__S__C__S_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL2:
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
if ( mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__S_store_GetM_Ack_AD;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
break;
case mu_InvL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_1 = mu_RequestL1_1( mu_adr, mu_GetML1_1, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_1 = 0;
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_msg_GetML1_1.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_1 = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_msg_GetML1_1.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_msg_GetML1_1.mu_src, mu_msg_GetML1_1.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_msg_GetML1_1.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_1.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_msg_GetM_Ack_ADL1_1.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
}
}
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__S_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__S__C__S_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__S__C__S_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
if ( !(mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_1( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
if ( (mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0) )
{
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 )) == (0)) )
{
mu_msg = mu_RespAckL1_1( mu_adr, mu_GetM_Ack_ADL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_1( mu_cbe.mu_sharersL1_1 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_1( mu_adr, mu_InvL1_1, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_1 ( mu_msg, mu_cbe.mu_sharersL1_1, (int)mu_m );
mu_cbe.mu_ownerL1_1 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_1 ( mu_cbe.mu_sharersL1_1 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_M__C__M;
return mu_true;
}
}
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__S__C__S_store_GetM_Ack_AD;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl, (int)mu_cbe.mu_invalidation_msg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__I_store;
return mu_true;
}
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetML1_1__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetML1_1__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetML1_1__I__C__I_store;
return mu_true;
}
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetSL1_1__I__C__I_load:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetSL1_1__I__C__I_load";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_AckL2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_AddElement_sharersL1_1 ( mu_cbe.mu_sharersL1_1, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__S;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mGetSL1_1__M_GetS__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mGetSL1_1__M_GetS__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_WBL1_1:
if ( !((mu_inmsg.mu_src) == (mu_cbe.mu_ownerL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mGetSL1_1__M_GetS__C__M;
return mu_true;
}
if ( (mu_inmsg.mu_src) == (mu_cbe.mu_ownerL1_1) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_S__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__I__C__M_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__I__C__M_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__M_evict_x_I;
return mu_true;
break;
case mu_Fwd_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__O_evict;
return mu_true;
break;
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__I__C__M_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__I__C__M_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__I__C__O_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__I__C__O_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl, (int)mu_inmsg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__O_evict_x_I;
return mu_true;
break;
case mu_Fwd_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__O_evict;
return mu_true;
break;
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__I__C__O_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__I__C__O_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__I__C__S_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__I__C__S_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_InvL2:
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__S_evict_x_I;
return mu_true;
break;
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__I__C__S_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__I__C__S_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__M_evict;
return mu_true;
}
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__O_evict;
return mu_true;
}
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RequestL2( mu_adr, mu_PutSL2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__S_evict;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_1_mevict__dM_x_pI_store__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_1_mevict__dM_x_pI_store__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_DL1_1:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_1 = mu_RespL1_1( mu_adr, mu_PutML1_1, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_1 = mu_AckL1_1( mu_adr, mu_Put_AckL1_1, (int)mu_m, mu_msg_PutML1_1.mu_src );
if ( (mu_cbe.mu_ownerL1_1) == (mu_msg_PutML1_1.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_1.mu_cl;
mu_cbe.mu_ownerL1_1.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__I__C__M_evict;
return mu_true;
}
break;
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_1_mevict__dM_x_pI_store__C__M;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
}
}
}
return mu_false;
	Error.Error("The end of function FSM_MSG_directoryL1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_FSM_MSG_cacheL1_2(mu_1_Message& mu_inmsg,const mu_1_OBJSET_cacheL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  const int mu_adr = mu_inmsg.mu_adr;
{
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
switch ((int) mu_cbe.mu_State) {
case mu_cacheL1_2_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_I_load:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_I_load";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_AckL1_2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_I_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_I_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL1_2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_inmsg.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M;
return mu_true;
}
break;
case mu_GetM_Ack_DL1_2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M;
return mu_true;
break;
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_I_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_I_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M;
return mu_true;
}
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I_store_GetM_Ack_AD;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML1_2:
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I;
return mu_true;
break;
case mu_Fwd_GetSL1_2:
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_RespL1_2( mu_adr, mu_WBL1_2, (int)mu_m, (int)mu_directoryL1_2, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_M_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_M_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML1_2:
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M_evict_x_I;
return mu_true;
break;
case mu_Fwd_GetSL1_2:
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_RespL1_2( mu_adr, mu_WBL1_2, (int)mu_m, (int)mu_directoryL1_2, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S_evict;
return mu_true;
break;
case mu_Put_AckL1_2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_M_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_M_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL1_2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_InvL1_2:
mu_msg = mu_RespL1_2( mu_adr, mu_Inv_AckL1_2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_S_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_S_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_InvL1_2:
mu_msg = mu_RespL1_2( mu_adr, mu_Inv_AckL1_2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S_evict_x_I;
return mu_true;
break;
case mu_Put_AckL1_2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_S_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_S_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL1_2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_S_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_S_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL1_2:
mu_cbe.mu_acksExpectedL1_2 = mu_inmsg.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M;
return mu_true;
}
break;
case mu_GetM_Ack_DL1_2:
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M;
return mu_true;
break;
case mu_InvL1_2:
mu_msg = mu_RespL1_2( mu_adr, mu_Inv_AckL1_2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_I_store;
return mu_true;
break;
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_2_S_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_2_S_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_S_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_2_M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
}
}
}
return mu_false;
	Error.Error("The end of function FSM_MSG_cacheL1_2 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_FSM_MSG_directoryL1_2(mu_1_Message& mu_inmsg,const mu_1_OBJSET_directoryL1_2& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetML1_2("msg_GetML1_2",24);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_DL1_2("msg_GetM_Ack_DL1_2",48);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutML1_2("msg_PutML1_2",72);

/*** Variable declaration ***/
mu_1_Message mu_msg_Put_AckL1_2("msg_Put_AckL1_2",96);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetSL1_2("msg_GetSL1_2",120);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetS_AckL1_2("msg_GetS_AckL1_2",144);

/*** Variable declaration ***/
mu_1_Message mu_msg_PutSL1_2("msg_PutSL1_2",168);

/*** Variable declaration ***/
mu_1_Message mu_msg_GetM_Ack_ADL1_2("msg_GetM_Ack_ADL1_2",192);

{
  const int mu_adr = mu_inmsg.mu_adr;
{
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
switch ((int) mu_cbe.mu_State) {
case mu_directoryL1_2_I__C__I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_I__C__I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__I_store;
return mu_true;
break;
case mu_GetSL1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetSL2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetSL1_2__I__C__I_load;
return mu_true;
break;
case mu_PutML1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
if ( (mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
break;
case mu_PutSL1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_I__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_I__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg_GetM_Ack_DL1_2 = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_2.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_2 = mu_RequestL1_2( mu_adr, mu_GetSL1_2, (int)mu_m, (int)mu_m );
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_GetSL1_2.mu_src );
mu_msg_GetS_AckL1_2 = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_msg_GetSL1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_cl = mu_msg_GetS_AckL1_2.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_2 = mu_RequestL1_2( mu_adr, mu_PutSL1_2, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutSL1_2.mu_src );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_PutSL1_2.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
break;
case mu_GetML1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
break;
case mu_GetSL1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__M;
return mu_true;
break;
case mu_PutML1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__M;
return mu_true;
}
if ( (mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__M;
return mu_true;
}
break;
case mu_PutSL1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_I__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_I__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg_GetM_Ack_DL1_2 = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_2.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl, (int)mu_cbe.mu_invalidation_msg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_2 = mu_RequestL1_2( mu_adr, mu_GetSL1_2, (int)mu_m, (int)mu_m );
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_GetSL1_2.mu_src );
mu_msg_GetS_AckL1_2 = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_msg_GetSL1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_cl = mu_msg_GetS_AckL1_2.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_2 = mu_RequestL1_2( mu_adr, mu_PutSL1_2, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutSL1_2.mu_src );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_PutSL1_2.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
break;
case mu_GetML1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__O_store;
return mu_true;
break;
case mu_GetSL1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__O;
return mu_true;
break;
case mu_PutML1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( !((mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
if ( (mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
break;
case mu_PutSL1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_I__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_I__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__S_store;
return mu_true;
break;
case mu_GetSL1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__S;
return mu_true;
break;
case mu_InvL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg_GetM_Ack_DL1_2 = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_2.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
break;
case mu_PutML1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( (mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__S;
return mu_true;
}
if ( !((mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__S;
return mu_true;
}
break;
case mu_PutSL1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__S;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_M__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_M__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg = mu_RequestL1_2( mu_adr, mu_Fwd_GetML1_2, mu_msg_GetML1_2.mu_src, mu_cbe.mu_ownerL1_2 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store__C__M;
return mu_true;
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_2 = mu_RequestL1_2( mu_adr, mu_GetSL1_2, (int)mu_m, (int)mu_m );
mu_msg = mu_RequestL1_2( mu_adr, mu_Fwd_GetSL1_2, mu_msg_GetSL1_2.mu_src, mu_cbe.mu_ownerL1_2 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_GetSL1_2.mu_src );
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_ownerL1_2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetSL2__dM_GetS_x_pI_load__C__M;
return mu_true;
break;
case mu_GetML1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL1_2( mu_adr, mu_Fwd_GetML1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_ownerL1_2 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
break;
case mu_GetSL1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL1_2( mu_adr, mu_Fwd_GetSL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_ownerL1_2 );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_ownerL1_2 );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetSL1_2__M_GetS__C__M;
return mu_true;
break;
case mu_PutML1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( (mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__M;
return mu_true;
}
if ( !((mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
break;
case mu_PutSL1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
if ( (mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__M;
return mu_true;
}
if ( !((mu_cbe.mu_ownerL1_2) == (mu_inmsg.mu_src)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_S__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_S__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_msg_GetML1_2.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_2 = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_msg_GetML1_2.mu_src, mu_msg_GetML1_2.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_2.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_msg_GetM_Ack_ADL1_2.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M;
return mu_true;
}
}
}
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_2 = mu_RequestL1_2( mu_adr, mu_GetSL1_2, (int)mu_m, (int)mu_m );
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_GetSL1_2.mu_src );
mu_msg_GetS_AckL1_2 = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_msg_GetSL1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_cl = mu_msg_GetS_AckL1_2.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_2 = mu_RequestL1_2( mu_adr, mu_PutSL1_2, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutSL1_2.mu_src );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_PutSL1_2.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__O;
return mu_true;
}
break;
case mu_GetML1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
break;
case mu_GetSL1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__M;
return mu_true;
break;
case mu_PutML1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__M;
return mu_true;
}
break;
case mu_PutSL1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_S__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_S__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_msg_GetML1_2.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_2 = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_msg_GetML1_2.mu_src, mu_msg_GetML1_2.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_2.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_msg_GetM_Ack_ADL1_2.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
}
}
break;
case mu_Fwd_GetSL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetSL1_2 = mu_RequestL1_2( mu_adr, mu_GetSL1_2, (int)mu_m, (int)mu_m );
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_GetSL1_2.mu_src );
mu_msg_GetS_AckL1_2 = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_msg_GetSL1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_cl = mu_msg_GetS_AckL1_2.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_2 = mu_RequestL1_2( mu_adr, mu_PutSL1_2, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutSL1_2.mu_src );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_PutSL1_2.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__O;
return mu_true;
}
break;
case mu_GetML1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__O_store;
return mu_true;
break;
case mu_GetSL1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__O;
return mu_true;
break;
case mu_PutML1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__O;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
break;
case mu_PutSL1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_S__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_S__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetML1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_msg = mu_RequestL2( mu_adr, mu_GetML2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_cbe.mu_acksReceivedL2 = 0;
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__S_store;
return mu_true;
break;
case mu_GetSL1_2:
mu_cbe.mu_cluster_req_msg = mu_inmsg;
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__S;
return mu_true;
break;
case mu_InvL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_msg_GetML1_2.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_2 = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_msg_GetML1_2.mu_src, mu_msg_GetML1_2.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_2.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_msg_GetM_Ack_ADL1_2.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
}
}
break;
case mu_PutML1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__S;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__S;
return mu_true;
}
break;
case mu_PutSL1_2:
mu_msg = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg, (int)mu_m );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_inmsg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__S;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl, (int)mu_cbe.mu_invalidation_msg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mFwd_GetML2__dM_x_pI_store__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_DL1_2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
break;
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetML2__dM_x_pI_store__C__M;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mFwd_GetSL2__dM_GetS_x_pI_load__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mFwd_GetSL2__dM_GetS_x_pI_load__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_AckL1_2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetSL2__dM_GetS_x_pS__C__M;
return mu_true;
break;
case mu_WBL1_2:
if ( (mu_inmsg.mu_src) == (mu_cbe.mu_ownerL1_2) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mFwd_GetSL2__dS_x_pI_load__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mFwd_GetSL2__dM_GetS_x_pS__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mFwd_GetSL2__dM_GetS_x_pS__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_WBL1_2:
if ( (mu_inmsg.mu_src) == (mu_cbe.mu_ownerL1_2) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg_PutSL1_2 = mu_RequestL1_2( mu_adr, mu_PutSL1_2, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutSL1_2.mu_src );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_PutSL1_2.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__O;
return mu_true;
}
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mFwd_GetSL2__dS_x_pI_load__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mFwd_GetSL2__dS_x_pI_load__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_AckL1_2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_msg_PutSL1_2 = mu_RequestL1_2( mu_adr, mu_PutSL1_2, (int)mu_m, (int)mu_m );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutSL1_2.mu_src );
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_msg_PutSL1_2.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__O;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__I__C__I_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__I__C__I_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__I_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__I_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__I__C__I_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__I__C__I_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__I_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__I__C__O_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__I__C__O_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg_GetM_Ack_DL1_2 = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_2.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl, (int)mu_cbe.mu_invalidation_msg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__I_store;
return mu_true;
}
break;
case mu_Fwd_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__O_store;
return mu_true;
break;
case mu_GetM_Ack_ADL2:
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__O_store_GetM_Ack_AD;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__O_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__I__C__O_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__I__C__O_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__O_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__I__C__S_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__I__C__S_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL2:
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__S_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
break;
case mu_InvL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_msg_GetM_Ack_DL1_2 = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_cbe.mu_cl = mu_msg_GetM_Ack_DL1_2.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__I_store;
return mu_true;
}
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__S_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__I__C__S_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__I__C__S_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__S_store_GetM_Ack_AD;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__S__C__O_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__S__C__O_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_msg_GetML1_2.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_2 = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_msg_GetML1_2.mu_src, mu_msg_GetML1_2.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_2.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_msg_GetM_Ack_ADL1_2.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
}
}
break;
case mu_Fwd_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__O_store;
return mu_true;
break;
case mu_GetM_Ack_ADL2:
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
if ( mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__O_store_GetM_Ack_AD;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__O_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__S__C__O_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__S__C__O_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__O_store_GetM_Ack_AD;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__S__C__S_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__S__C__S_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL2:
mu_cbe.mu_acksExpectedL2 = mu_inmsg.mu_acksExpectedL2;
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__S_store_GetM_Ack_AD;
return mu_true;
}
break;
case mu_GetM_Ack_DL2:
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
if ( mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
break;
case mu_InvL2:
mu_cbe.mu_invalidation_msg = mu_inmsg;
mu_msg_GetML1_2 = mu_RequestL1_2( mu_adr, mu_GetML1_2, (int)mu_m, (int)mu_m );
mu_cbe.mu_acksReceivedL1_2 = 0;
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_msg_GetML1_2.mu_src )) )
{
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg_GetM_Ack_ADL1_2 = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_msg_GetML1_2.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_msg_GetML1_2.mu_src, mu_msg_GetML1_2.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_msg_GetML1_2.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cl = mu_msg_GetM_Ack_ADL1_2.mu_cl;
mu_cbe.mu_acksExpectedL1_2 = mu_msg_GetM_Ack_ADL1_2.mu_acksRequiredL1_2;
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
}
}
break;
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__S_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__S__C__S_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__S__C__S_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL2:
mu_cbe.mu_acksReceivedL2 = (mu_cbe.mu_acksReceivedL2) + (1);
if ( (mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2) )
{
if ( mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src ) )
{
mu_RemoveElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
if ( !(mu_IsElement_sharersL1_2( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src )) )
{
if ( (mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0) )
{
mu_msg = mu_RespL1_2( mu_adr, mu_GetM_Ack_DL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
if ( !((mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 )) == (0)) )
{
mu_msg = mu_RespAckL1_2( mu_adr, mu_GetM_Ack_ADL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl, (int)mu_VectorCount_sharersL1_2( mu_cbe.mu_sharersL1_2 ) );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_AckL1_2( mu_adr, mu_InvL1_2, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cluster_req_msg.mu_src );
mu_Multicast_fwd_v_sharersL1_2 ( mu_msg, mu_cbe.mu_sharersL1_2, (int)mu_m );
mu_cbe.mu_ownerL1_2 = mu_cbe.mu_cluster_req_msg.mu_src;
mu_ClearVector_sharersL1_2 ( mu_cbe.mu_sharersL1_2 );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_M__C__M;
return mu_true;
}
}
}
if ( !((mu_cbe.mu_acksExpectedL2) == (mu_cbe.mu_acksReceivedL2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__S__C__S_store_GetM_Ack_AD;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src, mu_cbe.mu_cl, (int)mu_cbe.mu_invalidation_msg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__I_store;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__mFwd_GetML2__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetML1_2__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetML1_2__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__I__C__I_store;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetML1_2__mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetSL1_2__I__C__I_load:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetSL1_2__I__C__I_load";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_AckL2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_AddElement_sharersL1_2 ( mu_cbe.mu_sharersL1_2, mu_cbe.mu_cluster_req_msg.mu_src );
mu_msg = mu_RespL1_2( mu_adr, mu_GetS_AckL1_2, (int)mu_m, mu_cbe.mu_cluster_req_msg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__S;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mGetSL1_2__M_GetS__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mGetSL1_2__M_GetS__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_WBL1_2:
if ( !((mu_inmsg.mu_src) == (mu_cbe.mu_ownerL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mGetSL1_2__M_GetS__C__M;
return mu_true;
}
if ( (mu_inmsg.mu_src) == (mu_cbe.mu_ownerL1_2) )
{
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_cbe.mu_cluster_req_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_S__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_cbe.mu_invalidation_msg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_cbe.mu_invalidation_msg.undefine();
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mInvL2__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__I__C__M_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__I__C__M_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetM_Ack_DL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__M_evict_x_I;
return mu_true;
break;
case mu_Fwd_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__O_evict;
return mu_true;
break;
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__I__C__M_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__I__C__M_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__I__C__O_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__I__C__O_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML2:
mu_msg = mu_RespDataAckL2( mu_adr, mu_GetM_Ack_ADL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl, (int)mu_inmsg.mu_acksExpectedL2 );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__O_evict_x_I;
return mu_true;
break;
case mu_Fwd_GetSL2:
mu_msg = mu_RespDataL2( mu_adr, mu_GetS_AckL2, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__O_evict;
return mu_true;
break;
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__I__C__O_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__I__C__O_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__I__C__S_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__I__C__S_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_InvL2:
mu_msg = mu_AckL2( mu_adr, mu_Inv_AckL2, (int)mu_m, mu_inmsg.mu_src );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__S_evict_x_I;
return mu_true;
break;
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__I__C__S_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__I__C__S_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL2:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_I__C__I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__M_evict;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__O:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__O";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__O;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__O_evict;
return mu_true;
}
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
if ( (mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2) )
{
mu_cbe.mu_acksReceivedL1_2 = 0;
mu_cbe.mu_acksExpectedL1_2 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RequestL2( mu_adr, mu_PutSL2, (int)mu_m, (int)mu_directoryL2 );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__S_evict;
return mu_true;
}
}
if ( !((mu_cbe.mu_acksExpectedL1_2) == (mu_cbe.mu_acksReceivedL1_2)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directoryL1_2_mevict__dM_x_pI_store__C__M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: directoryL1_2_mevict__dM_x_pI_store__C__M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_DL1_2:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_msg_PutML1_2 = mu_RespL1_2( mu_adr, mu_PutML1_2, (int)mu_m, (int)mu_m, mu_cbe.mu_cl );
mu_msg_Put_AckL1_2 = mu_AckL1_2( mu_adr, mu_Put_AckL1_2, (int)mu_m, mu_msg_PutML1_2.mu_src );
if ( (mu_cbe.mu_ownerL1_2) == (mu_msg_PutML1_2.mu_src) )
{
mu_cbe.mu_cl = mu_msg_PutML1_2.mu_cl;
mu_cbe.mu_ownerL1_2.undefine();
mu_msg = mu_RespDataL2( mu_adr, mu_PutML2, (int)mu_m, (int)mu_directoryL2, mu_cbe.mu_cl );
mu_Send_req ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__I__C__M_evict;
return mu_true;
}
break;
case mu_Inv_AckL1_2:
mu_cbe.mu_acksReceivedL1_2 = (mu_cbe.mu_acksReceivedL1_2) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_directoryL1_2_mevict__dM_x_pI_store__C__M;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
}
}
}
return mu_false;
	Error.Error("The end of function FSM_MSG_directoryL1_2 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_FSM_MSG_cacheL1_1(mu_1_Message& mu_inmsg,const mu_1_OBJSET_cacheL1_1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  const int mu_adr = mu_inmsg.mu_adr;
{
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
switch ((int) mu_cbe.mu_State) {
case mu_cacheL1_1_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_I_load:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_I_load";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_AckL1_1:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_I_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_I_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL1_1:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_cbe.mu_acksExpectedL1_1 = mu_inmsg.mu_acksRequiredL1_1;
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M;
return mu_true;
}
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I_store_GetM_Ack_AD;
return mu_true;
}
break;
case mu_GetM_Ack_DL1_1:
mu_cbe.mu_cl = mu_inmsg.mu_cl;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M;
return mu_true;
break;
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_I_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_I_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_M:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_M";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML1_1:
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I;
return mu_true;
break;
case mu_Fwd_GetSL1_1:
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_RespL1_1( mu_adr, mu_WBL1_1, (int)mu_m, (int)mu_directoryL1_1, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_M_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_M_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetML1_1:
mu_msg = mu_RespL1_1( mu_adr, mu_GetM_Ack_DL1_1, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M_evict_x_I;
return mu_true;
break;
case mu_Fwd_GetSL1_1:
mu_msg = mu_RespL1_1( mu_adr, mu_GetS_AckL1_1, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_msg = mu_RespL1_1( mu_adr, mu_WBL1_1, (int)mu_m, (int)mu_directoryL1_1, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S_evict;
return mu_true;
break;
case mu_Put_AckL1_1:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_M_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_M_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL1_1:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_S:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_S";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_InvL1_1:
mu_msg = mu_RespL1_1( mu_adr, mu_Inv_AckL1_1, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_S_evict:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_S_evict";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_InvL1_1:
mu_msg = mu_RespL1_1( mu_adr, mu_Inv_AckL1_1, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S_evict_x_I;
return mu_true;
break;
case mu_Put_AckL1_1:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_S_evict_x_I:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_S_evict_x_I";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Put_AckL1_1:
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_S_store:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_S_store";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_ADL1_1:
mu_cbe.mu_acksExpectedL1_1 = mu_inmsg.mu_acksRequiredL1_1;
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M;
return mu_true;
}
break;
case mu_GetM_Ack_DL1_1:
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M;
return mu_true;
break;
case mu_InvL1_1:
mu_msg = mu_RespL1_1( mu_adr, mu_Inv_AckL1_1, (int)mu_m, mu_inmsg.mu_src, mu_cbe.mu_cl );
mu_Send_resp ( mu_msg, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_I_store;
return mu_true;
break;
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S_store;
return mu_true;
break;
default:
return mu_false;
break;
}
break;
case mu_cacheL1_1_S_store_GetM_Ack_AD:
cout << "SS_PRINT:  ";
cout << ( mu_inmsg.mu_mtype );
cout << "  CASE: cacheL1_1_S_store_GetM_Ack_AD";
cout << "\n";
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_AckL1_1:
mu_cbe.mu_acksReceivedL1_1 = (mu_cbe.mu_acksReceivedL1_1) + (1);
if ( !((mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1)) )
{
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_S_store_GetM_Ack_AD;
return mu_true;
}
if ( (mu_cbe.mu_acksExpectedL1_1) == (mu_cbe.mu_acksReceivedL1_1) )
{
mu_cbe.mu_acksReceivedL1_1 = 0;
mu_cbe.mu_acksExpectedL1_1 = 0;
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Clear_perm ( mu_adr, (int)mu_m );
mu_Set_perm ( mu_store, mu_adr, (int)mu_m );
mu_Set_perm ( mu_load, mu_adr, (int)mu_m );
mu_cbe.mu_State = mu_cacheL1_1_M;
return mu_true;
}
break;
default:
return mu_false;
break;
}
break;
}
}
}
return mu_false;
	Error.Error("The end of function FSM_MSG_cacheL1_1 reached without returning values.");
};
/*** end function declaration ***/

void mu_System_Reset()
{
mu_Reset_perm (  );
mu_Reset_NET_ (  );
mu_ResetMachine_ (  );
};
/*** end procedure declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_fwd.clear();
  mu_cnt_fwd.clear();
  mu_resp.clear();
  mu_cnt_resp.clear();
  mu_req.clear();
  mu_cnt_req.clear();
  mu_g_perm.clear();
  mu_i_directoryL2.clear();
  mu_i_directoryL1_1.clear();
  mu_i_cacheL1_2.clear();
  mu_i_directoryL1_2.clear();
  mu_i_cacheL1_1.clear();
}
void world_class::undefine()
{
  mu_fwd.undefine();
  mu_cnt_fwd.undefine();
  mu_resp.undefine();
  mu_cnt_resp.undefine();
  mu_req.undefine();
  mu_cnt_req.undefine();
  mu_g_perm.undefine();
  mu_i_directoryL2.undefine();
  mu_i_directoryL1_1.undefine();
  mu_i_cacheL1_2.undefine();
  mu_i_directoryL1_2.undefine();
  mu_i_cacheL1_1.undefine();
}
void world_class::reset()
{
  mu_fwd.reset();
  mu_cnt_fwd.reset();
  mu_resp.reset();
  mu_cnt_resp.reset();
  mu_req.reset();
  mu_cnt_req.reset();
  mu_g_perm.reset();
  mu_i_directoryL2.reset();
  mu_i_directoryL1_1.reset();
  mu_i_cacheL1_2.reset();
  mu_i_directoryL1_2.reset();
  mu_i_cacheL1_1.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_fwd.print();
  mu_cnt_fwd.print();
  mu_resp.print();
  mu_cnt_resp.print();
  mu_req.print();
  mu_cnt_req.print();
  mu_g_perm.print();
  mu_i_directoryL2.print();
  mu_i_directoryL1_1.print();
  mu_i_cacheL1_2.print();
  mu_i_directoryL1_2.print();
  mu_i_cacheL1_1.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_fwd.print_statistic();
  mu_cnt_fwd.print_statistic();
  mu_resp.print_statistic();
  mu_cnt_resp.print_statistic();
  mu_req.print_statistic();
  mu_cnt_req.print_statistic();
  mu_g_perm.print_statistic();
  mu_i_directoryL2.print_statistic();
  mu_i_directoryL1_1.print_statistic();
  mu_i_cacheL1_2.print_statistic();
  mu_i_directoryL1_2.print_statistic();
  mu_i_cacheL1_1.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_fwd.print_diff(prevstate);
    mu_cnt_fwd.print_diff(prevstate);
    mu_resp.print_diff(prevstate);
    mu_cnt_resp.print_diff(prevstate);
    mu_req.print_diff(prevstate);
    mu_cnt_req.print_diff(prevstate);
    mu_g_perm.print_diff(prevstate);
    mu_i_directoryL2.print_diff(prevstate);
    mu_i_directoryL1_1.print_diff(prevstate);
    mu_i_cacheL1_2.print_diff(prevstate);
    mu_i_directoryL1_2.print_diff(prevstate);
    mu_i_cacheL1_1.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_fwd.to_state( newstate );
  mu_cnt_fwd.to_state( newstate );
  mu_resp.to_state( newstate );
  mu_cnt_resp.to_state( newstate );
  mu_req.to_state( newstate );
  mu_cnt_req.to_state( newstate );
  mu_g_perm.to_state( newstate );
  mu_i_directoryL2.to_state( newstate );
  mu_i_directoryL1_1.to_state( newstate );
  mu_i_cacheL1_2.to_state( newstate );
  mu_i_directoryL1_2.to_state( newstate );
  mu_i_cacheL1_1.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    return tsprintf("Receive req, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
  mu_1_Message& mu_msg = mu_req[mu_dst][0];
    return (mu_cnt_req[mu_dst]) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    while (what_rule < 7 )
      {
	if ( ( TRUE  ) ) {
  mu_1_Message& mu_msg = mu_req[mu_dst][0];
	      if ((mu_cnt_req[mu_dst]) > (0)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
  mu_1_Message& mu_msg = mu_req[mu_dst][0];
if ( (mu_dst>=158 && mu_dst<=158) )
{
if ( mu_FSM_MSG_directoryL1_2( mu_msg, (int)mu_dst ) )
{
mu_Pop_req ( mu_dst );
}
}
else
{
if ( (mu_dst>=155 && mu_dst<=155) )
{
if ( mu_FSM_MSG_directoryL1_1( mu_msg, (int)mu_dst ) )
{
mu_Pop_req ( mu_dst );
}
}
else
{
if ( (mu_dst>=159 && mu_dst<=160) )
{
if ( mu_FSM_MSG_cacheL1_1( mu_msg, (int)mu_dst ) )
{
mu_Pop_req ( mu_dst );
}
}
else
{
if ( (mu_dst>=156 && mu_dst<=157) )
{
if ( mu_FSM_MSG_cacheL1_2( mu_msg, (int)mu_dst ) )
{
mu_Pop_req ( mu_dst );
}
}
else
{
if ( (mu_dst>=154 && mu_dst<=154) )
{
if ( mu_FSM_MSG_directoryL2( mu_msg, (int)mu_dst ) )
{
mu_Pop_req ( mu_dst );
}
}
else
{
Error.Error("Error: unknown machine");
}
}
}
}
}
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    return tsprintf("Receive fwd, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
  mu_1_Message& mu_msg = mu_fwd[mu_dst][0];
    return (mu_cnt_fwd[mu_dst]) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 7;
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    while (what_rule < 14 )
      {
	if ( ( TRUE  ) ) {
  mu_1_Message& mu_msg = mu_fwd[mu_dst][0];
	      if ((mu_cnt_fwd[mu_dst]) > (0)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 7;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
  mu_1_Message& mu_msg = mu_fwd[mu_dst][0];
if ( (mu_dst>=158 && mu_dst<=158) )
{
if ( mu_FSM_MSG_directoryL1_2( mu_msg, (int)mu_dst ) )
{
mu_Pop_fwd ( mu_dst );
}
}
else
{
if ( (mu_dst>=155 && mu_dst<=155) )
{
if ( mu_FSM_MSG_directoryL1_1( mu_msg, (int)mu_dst ) )
{
mu_Pop_fwd ( mu_dst );
}
}
else
{
if ( (mu_dst>=159 && mu_dst<=160) )
{
if ( mu_FSM_MSG_cacheL1_1( mu_msg, (int)mu_dst ) )
{
mu_Pop_fwd ( mu_dst );
}
}
else
{
if ( (mu_dst>=156 && mu_dst<=157) )
{
if ( mu_FSM_MSG_cacheL1_2( mu_msg, (int)mu_dst ) )
{
mu_Pop_fwd ( mu_dst );
}
}
else
{
if ( (mu_dst>=154 && mu_dst<=154) )
{
if ( mu_FSM_MSG_directoryL2( mu_msg, (int)mu_dst ) )
{
mu_Pop_fwd ( mu_dst );
}
}
else
{
Error.Error("Error: unknown machine");
}
}
}
}
}
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    return tsprintf("Receive resp, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
  mu_1_Message& mu_msg = mu_resp[mu_dst][0];
    return (mu_cnt_resp[mu_dst]) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 14;
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    while (what_rule < 21 )
      {
	if ( ( TRUE  ) ) {
  mu_1_Message& mu_msg = mu_resp[mu_dst][0];
	      if ((mu_cnt_resp[mu_dst]) > (0)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 14;
    mu_dst.unionassign(r % 7);
    r = r / 7;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Machines mu_dst;
    mu_dst.unionassign(r % 7);
    r = r / 7;
  mu_1_Message& mu_msg = mu_resp[mu_dst][0];
if ( (mu_dst>=158 && mu_dst<=158) )
{
if ( mu_FSM_MSG_directoryL1_2( mu_msg, (int)mu_dst ) )
{
mu_Pop_resp ( mu_dst );
}
}
else
{
if ( (mu_dst>=155 && mu_dst<=155) )
{
if ( mu_FSM_MSG_directoryL1_1( mu_msg, (int)mu_dst ) )
{
mu_Pop_resp ( mu_dst );
}
}
else
{
if ( (mu_dst>=159 && mu_dst<=160) )
{
if ( mu_FSM_MSG_cacheL1_1( mu_msg, (int)mu_dst ) )
{
mu_Pop_resp ( mu_dst );
}
}
else
{
if ( (mu_dst>=156 && mu_dst<=157) )
{
if ( mu_FSM_MSG_cacheL1_2( mu_msg, (int)mu_dst ) )
{
mu_Pop_resp ( mu_dst );
}
}
else
{
if ( (mu_dst>=154 && mu_dst<=154) )
{
if ( mu_FSM_MSG_directoryL2( mu_msg, (int)mu_dst ) )
{
mu_Pop_resp ( mu_dst );
}
}
else
{
Error.Error("Error: unknown machine");
}
}
}
}
}
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    return tsprintf("cacheL1_1_S_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr59;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_S))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr59;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 21;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    while (what_rule < 23 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr60;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_S))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr60) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 21;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_1_S_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    return tsprintf("cacheL1_1_S_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
    return (mu_cbe.mu_State) == (mu_cacheL1_1_S);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 23;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    while (what_rule < 25 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
	      if ((mu_cbe.mu_State) == (mu_cacheL1_1_S)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 23;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_1_S_load ( mu_adr, mu_m );
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    return tsprintf("cacheL1_1_S_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr61;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_S))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr61;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 25;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    while (what_rule < 27 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr62;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_S))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr62) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 25;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_1_S_store ( mu_adr, mu_m );
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    return tsprintf("cacheL1_1_M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr63;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_M))) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr63;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 27;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    while (what_rule < 29 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr64;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_M))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr64) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 27;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_1_M_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    return tsprintf("cacheL1_1_M_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
    return (mu_cbe.mu_State) == (mu_cacheL1_1_M);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 29;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    while (what_rule < 31 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
	      if ((mu_cbe.mu_State) == (mu_cacheL1_1_M)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 29;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_1_M_load ( mu_adr, mu_m );
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    return tsprintf("cacheL1_1_M_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
    return (mu_cbe.mu_State) == (mu_cacheL1_1_M);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 31;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    while (what_rule < 33 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
	      if ((mu_cbe.mu_State) == (mu_cacheL1_1_M)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 31;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_1_M_store ( mu_adr, mu_m );
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    return tsprintf("cacheL1_1_I_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr65;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_I))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr65;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 33;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    while (what_rule < 35 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr66;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_I))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr66) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 33;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_1_I_load ( mu_adr, mu_m );
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    return tsprintf("cacheL1_1_I_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr67;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_I))) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr67;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 35;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    while (what_rule < 37 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr68;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_1_I))) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr68) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 35;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 159);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_1 mu_m;
    mu_m.value((r % 2) + 159);
    r = r / 2;
  mu_1_ENTRY_cacheL1_1& mu_cbe = mu_i_cacheL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_1_I_store ( mu_adr, mu_m );
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    return tsprintf("directoryL1_2_S__C__S_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr69;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_S__C__S))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr69;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 37;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    while (what_rule < 38 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr70;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_S__C__S))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr70) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 37;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_2_S__C__S_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    return tsprintf("directoryL1_2_S__C__O_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr71;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_S__C__O))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr71;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 38;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    while (what_rule < 39 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr72;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_S__C__O))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr72) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 38;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_2_S__C__O_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    return tsprintf("directoryL1_2_S__C__M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr73;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_S__C__M))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr73;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 39;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    while (what_rule < 40 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr74;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_S__C__M))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr74) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 39;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_2_S__C__M_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    return tsprintf("directoryL1_2_M__C__M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr75;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_M__C__M))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr75;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 40;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    while (what_rule < 41 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr76;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_M__C__M))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr76) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 40;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_2_M__C__M_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    return tsprintf("directoryL1_2_I__C__S_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr77;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_I__C__S))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr77;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 41;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    while (what_rule < 42 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr78;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_I__C__S))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr78) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 41;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_2_I__C__S_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase16 ********************/
class RuleBase16
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    return tsprintf("directoryL1_2_I__C__O_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr79;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_I__C__O))) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr79;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 42;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    while (what_rule < 43 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr80;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_I__C__O))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr80) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 42;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_2_I__C__O_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase17 ********************/
class RuleBase17
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    return tsprintf("directoryL1_2_I__C__M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr81;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_I__C__M))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr81;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 43;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    while (what_rule < 44 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr82;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_2_I__C__M))) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr82) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 43;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 158);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_2 mu_m;
    mu_m.value((r % 1) + 158);
    r = r / 1;
  mu_1_ENTRY_directoryL1_2& mu_cbe = mu_i_directoryL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_2_I__C__M_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase18 ********************/
class RuleBase18
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    return tsprintf("cacheL1_2_S_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr83;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_S))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr83;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 44;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    while (what_rule < 46 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr84;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_S))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr84) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 44;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_2_S_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase19 ********************/
class RuleBase19
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    return tsprintf("cacheL1_2_S_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr85;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_S))) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr85;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 46;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    while (what_rule < 48 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr86;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_S))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr86) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 46;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_2_S_store ( mu_adr, mu_m );
  };

};
/******************** RuleBase20 ********************/
class RuleBase20
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    return tsprintf("cacheL1_2_S_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
    return (mu_cbe.mu_State) == (mu_cacheL1_2_S);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 48;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    while (what_rule < 50 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
	      if ((mu_cbe.mu_State) == (mu_cacheL1_2_S)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 48;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_2_S_load ( mu_adr, mu_m );
  };

};
/******************** RuleBase21 ********************/
class RuleBase21
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    return tsprintf("cacheL1_2_M_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
    return (mu_cbe.mu_State) == (mu_cacheL1_2_M);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 50;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    while (what_rule < 52 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
	      if ((mu_cbe.mu_State) == (mu_cacheL1_2_M)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 50;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_2_M_load ( mu_adr, mu_m );
  };

};
/******************** RuleBase22 ********************/
class RuleBase22
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    return tsprintf("cacheL1_2_M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr87;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_M))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr87;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 52;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    while (what_rule < 54 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr88;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_M))) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr88) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 52;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_2_M_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase23 ********************/
class RuleBase23
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    return tsprintf("cacheL1_2_M_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
    return (mu_cbe.mu_State) == (mu_cacheL1_2_M);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 54;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    while (what_rule < 56 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
	      if ((mu_cbe.mu_State) == (mu_cacheL1_2_M)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 54;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_2_M_store ( mu_adr, mu_m );
  };

};
/******************** RuleBase24 ********************/
class RuleBase24
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    return tsprintf("cacheL1_2_I_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr89;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_I))) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr89;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 56;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    while (what_rule < 58 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr90;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_I))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr90) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 56;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_2_I_store ( mu_adr, mu_m );
  };

};
/******************** RuleBase25 ********************/
class RuleBase25
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    return tsprintf("cacheL1_2_I_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr91;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_I))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr91;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 58;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    while (what_rule < 60 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
bool mu__boolexpr92;
  if (!((mu_cbe.mu_State) == (mu_cacheL1_2_I))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr92) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 58;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 2) + 156);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_cacheL1_2 mu_m;
    mu_m.value((r % 2) + 156);
    r = r / 2;
  mu_1_ENTRY_cacheL1_2& mu_cbe = mu_i_cacheL1_2[mu_m].mu_cb[mu_adr];
mu_FSM_Access_cacheL1_2_I_load ( mu_adr, mu_m );
  };

};
/******************** RuleBase26 ********************/
class RuleBase26
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    return tsprintf("directoryL1_1_S__C__S_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr93;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_S__C__S))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr93;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 60;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    while (what_rule < 61 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr94;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_S__C__S))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr94) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 60;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_1_S__C__S_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase27 ********************/
class RuleBase27
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    return tsprintf("directoryL1_1_S__C__O_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr95;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_S__C__O))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr95;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 61;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    while (what_rule < 62 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr96;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_S__C__O))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr96) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 61;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_1_S__C__O_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase28 ********************/
class RuleBase28
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    return tsprintf("directoryL1_1_S__C__M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr97;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_S__C__M))) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr97;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 62;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    while (what_rule < 63 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr98;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_S__C__M))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr98) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 62;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_1_S__C__M_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase29 ********************/
class RuleBase29
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    return tsprintf("directoryL1_1_M__C__M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr99;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_M__C__M))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr99;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 63;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    while (what_rule < 64 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr100;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_M__C__M))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr100) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 63;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_1_M__C__M_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase30 ********************/
class RuleBase30
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    return tsprintf("directoryL1_1_I__C__S_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr101;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_I__C__S))) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr101;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 64;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    while (what_rule < 65 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr102;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_I__C__S))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr102) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 64;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_1_I__C__S_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase31 ********************/
class RuleBase31
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    return tsprintf("directoryL1_1_I__C__O_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr103;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_I__C__O))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr103;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 65;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    while (what_rule < 66 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr104;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_I__C__O))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr104) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 65;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_1_I__C__O_evict ( mu_adr, mu_m );
  };

};
/******************** RuleBase32 ********************/
class RuleBase32
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    return tsprintf("directoryL1_1_I__C__M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr105;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_I__C__M))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_network_ready(  )) ; 
}
    return mu__boolexpr105;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 66;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    while (what_rule < 67 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
bool mu__boolexpr106;
  if (!((mu_cbe.mu_State) == (mu_directoryL1_1_I__C__M))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_network_ready(  )) ; 
}
	      if (mu__boolexpr106) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 66;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    mu_m.value((r % 1) + 155);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 1) + 1);
    r = r / 1;
    static mu_1_OBJSET_directoryL1_1 mu_m;
    mu_m.value((r % 1) + 155);
    r = r / 1;
  mu_1_ENTRY_directoryL1_1& mu_cbe = mu_i_directoryL1_1[mu_m].mu_cb[mu_adr];
mu_FSM_Access_directoryL1_1_I__C__M_evict ( mu_adr, mu_m );
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
  RuleBase16 R16;
  RuleBase17 R17;
  RuleBase18 R18;
  RuleBase19 R19;
  RuleBase20 R20;
  RuleBase21 R21;
  RuleBase22 R22;
  RuleBase23 R23;
  RuleBase24 R24;
  RuleBase25 R25;
  RuleBase26 R26;
  RuleBase27 R27;
  RuleBase28 R28;
  RuleBase29 R29;
  RuleBase30 R30;
  RuleBase31 R31;
  RuleBase32 R32;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<7)
    { R0.NextRule(what_rule);
      if (what_rule<7) return; }
  if (what_rule>=7 && what_rule<14)
    { R1.NextRule(what_rule);
      if (what_rule<14) return; }
  if (what_rule>=14 && what_rule<21)
    { R2.NextRule(what_rule);
      if (what_rule<21) return; }
  if (what_rule>=21 && what_rule<23)
    { R3.NextRule(what_rule);
      if (what_rule<23) return; }
  if (what_rule>=23 && what_rule<25)
    { R4.NextRule(what_rule);
      if (what_rule<25) return; }
  if (what_rule>=25 && what_rule<27)
    { R5.NextRule(what_rule);
      if (what_rule<27) return; }
  if (what_rule>=27 && what_rule<29)
    { R6.NextRule(what_rule);
      if (what_rule<29) return; }
  if (what_rule>=29 && what_rule<31)
    { R7.NextRule(what_rule);
      if (what_rule<31) return; }
  if (what_rule>=31 && what_rule<33)
    { R8.NextRule(what_rule);
      if (what_rule<33) return; }
  if (what_rule>=33 && what_rule<35)
    { R9.NextRule(what_rule);
      if (what_rule<35) return; }
  if (what_rule>=35 && what_rule<37)
    { R10.NextRule(what_rule);
      if (what_rule<37) return; }
  if (what_rule>=37 && what_rule<38)
    { R11.NextRule(what_rule);
      if (what_rule<38) return; }
  if (what_rule>=38 && what_rule<39)
    { R12.NextRule(what_rule);
      if (what_rule<39) return; }
  if (what_rule>=39 && what_rule<40)
    { R13.NextRule(what_rule);
      if (what_rule<40) return; }
  if (what_rule>=40 && what_rule<41)
    { R14.NextRule(what_rule);
      if (what_rule<41) return; }
  if (what_rule>=41 && what_rule<42)
    { R15.NextRule(what_rule);
      if (what_rule<42) return; }
  if (what_rule>=42 && what_rule<43)
    { R16.NextRule(what_rule);
      if (what_rule<43) return; }
  if (what_rule>=43 && what_rule<44)
    { R17.NextRule(what_rule);
      if (what_rule<44) return; }
  if (what_rule>=44 && what_rule<46)
    { R18.NextRule(what_rule);
      if (what_rule<46) return; }
  if (what_rule>=46 && what_rule<48)
    { R19.NextRule(what_rule);
      if (what_rule<48) return; }
  if (what_rule>=48 && what_rule<50)
    { R20.NextRule(what_rule);
      if (what_rule<50) return; }
  if (what_rule>=50 && what_rule<52)
    { R21.NextRule(what_rule);
      if (what_rule<52) return; }
  if (what_rule>=52 && what_rule<54)
    { R22.NextRule(what_rule);
      if (what_rule<54) return; }
  if (what_rule>=54 && what_rule<56)
    { R23.NextRule(what_rule);
      if (what_rule<56) return; }
  if (what_rule>=56 && what_rule<58)
    { R24.NextRule(what_rule);
      if (what_rule<58) return; }
  if (what_rule>=58 && what_rule<60)
    { R25.NextRule(what_rule);
      if (what_rule<60) return; }
  if (what_rule>=60 && what_rule<61)
    { R26.NextRule(what_rule);
      if (what_rule<61) return; }
  if (what_rule>=61 && what_rule<62)
    { R27.NextRule(what_rule);
      if (what_rule<62) return; }
  if (what_rule>=62 && what_rule<63)
    { R28.NextRule(what_rule);
      if (what_rule<63) return; }
  if (what_rule>=63 && what_rule<64)
    { R29.NextRule(what_rule);
      if (what_rule<64) return; }
  if (what_rule>=64 && what_rule<65)
    { R30.NextRule(what_rule);
      if (what_rule<65) return; }
  if (what_rule>=65 && what_rule<66)
    { R31.NextRule(what_rule);
      if (what_rule<66) return; }
  if (what_rule>=66 && what_rule<67)
    { R32.NextRule(what_rule);
      if (what_rule<67) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=6) return R0.Condition(r-0);
  if (r>=7 && r<=13) return R1.Condition(r-7);
  if (r>=14 && r<=20) return R2.Condition(r-14);
  if (r>=21 && r<=22) return R3.Condition(r-21);
  if (r>=23 && r<=24) return R4.Condition(r-23);
  if (r>=25 && r<=26) return R5.Condition(r-25);
  if (r>=27 && r<=28) return R6.Condition(r-27);
  if (r>=29 && r<=30) return R7.Condition(r-29);
  if (r>=31 && r<=32) return R8.Condition(r-31);
  if (r>=33 && r<=34) return R9.Condition(r-33);
  if (r>=35 && r<=36) return R10.Condition(r-35);
  if (r>=37 && r<=37) return R11.Condition(r-37);
  if (r>=38 && r<=38) return R12.Condition(r-38);
  if (r>=39 && r<=39) return R13.Condition(r-39);
  if (r>=40 && r<=40) return R14.Condition(r-40);
  if (r>=41 && r<=41) return R15.Condition(r-41);
  if (r>=42 && r<=42) return R16.Condition(r-42);
  if (r>=43 && r<=43) return R17.Condition(r-43);
  if (r>=44 && r<=45) return R18.Condition(r-44);
  if (r>=46 && r<=47) return R19.Condition(r-46);
  if (r>=48 && r<=49) return R20.Condition(r-48);
  if (r>=50 && r<=51) return R21.Condition(r-50);
  if (r>=52 && r<=53) return R22.Condition(r-52);
  if (r>=54 && r<=55) return R23.Condition(r-54);
  if (r>=56 && r<=57) return R24.Condition(r-56);
  if (r>=58 && r<=59) return R25.Condition(r-58);
  if (r>=60 && r<=60) return R26.Condition(r-60);
  if (r>=61 && r<=61) return R27.Condition(r-61);
  if (r>=62 && r<=62) return R28.Condition(r-62);
  if (r>=63 && r<=63) return R29.Condition(r-63);
  if (r>=64 && r<=64) return R30.Condition(r-64);
  if (r>=65 && r<=65) return R31.Condition(r-65);
  if (r>=66 && r<=66) return R32.Condition(r-66);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=6) { R0.Code(r-0); return; } 
  if (r>=7 && r<=13) { R1.Code(r-7); return; } 
  if (r>=14 && r<=20) { R2.Code(r-14); return; } 
  if (r>=21 && r<=22) { R3.Code(r-21); return; } 
  if (r>=23 && r<=24) { R4.Code(r-23); return; } 
  if (r>=25 && r<=26) { R5.Code(r-25); return; } 
  if (r>=27 && r<=28) { R6.Code(r-27); return; } 
  if (r>=29 && r<=30) { R7.Code(r-29); return; } 
  if (r>=31 && r<=32) { R8.Code(r-31); return; } 
  if (r>=33 && r<=34) { R9.Code(r-33); return; } 
  if (r>=35 && r<=36) { R10.Code(r-35); return; } 
  if (r>=37 && r<=37) { R11.Code(r-37); return; } 
  if (r>=38 && r<=38) { R12.Code(r-38); return; } 
  if (r>=39 && r<=39) { R13.Code(r-39); return; } 
  if (r>=40 && r<=40) { R14.Code(r-40); return; } 
  if (r>=41 && r<=41) { R15.Code(r-41); return; } 
  if (r>=42 && r<=42) { R16.Code(r-42); return; } 
  if (r>=43 && r<=43) { R17.Code(r-43); return; } 
  if (r>=44 && r<=45) { R18.Code(r-44); return; } 
  if (r>=46 && r<=47) { R19.Code(r-46); return; } 
  if (r>=48 && r<=49) { R20.Code(r-48); return; } 
  if (r>=50 && r<=51) { R21.Code(r-50); return; } 
  if (r>=52 && r<=53) { R22.Code(r-52); return; } 
  if (r>=54 && r<=55) { R23.Code(r-54); return; } 
  if (r>=56 && r<=57) { R24.Code(r-56); return; } 
  if (r>=58 && r<=59) { R25.Code(r-58); return; } 
  if (r>=60 && r<=60) { R26.Code(r-60); return; } 
  if (r>=61 && r<=61) { R27.Code(r-61); return; } 
  if (r>=62 && r<=62) { R28.Code(r-62); return; } 
  if (r>=63 && r<=63) { R29.Code(r-63); return; } 
  if (r>=64 && r<=64) { R30.Code(r-64); return; } 
  if (r>=65 && r<=65) { R31.Code(r-65); return; } 
  if (r>=66 && r<=66) { R32.Code(r-66); return; } 
}
int Priority(unsigned short r)
{
  if (r<=6) { return R0.Priority(); } 
  if (r>=7 && r<=13) { return R1.Priority(); } 
  if (r>=14 && r<=20) { return R2.Priority(); } 
  if (r>=21 && r<=22) { return R3.Priority(); } 
  if (r>=23 && r<=24) { return R4.Priority(); } 
  if (r>=25 && r<=26) { return R5.Priority(); } 
  if (r>=27 && r<=28) { return R6.Priority(); } 
  if (r>=29 && r<=30) { return R7.Priority(); } 
  if (r>=31 && r<=32) { return R8.Priority(); } 
  if (r>=33 && r<=34) { return R9.Priority(); } 
  if (r>=35 && r<=36) { return R10.Priority(); } 
  if (r>=37 && r<=37) { return R11.Priority(); } 
  if (r>=38 && r<=38) { return R12.Priority(); } 
  if (r>=39 && r<=39) { return R13.Priority(); } 
  if (r>=40 && r<=40) { return R14.Priority(); } 
  if (r>=41 && r<=41) { return R15.Priority(); } 
  if (r>=42 && r<=42) { return R16.Priority(); } 
  if (r>=43 && r<=43) { return R17.Priority(); } 
  if (r>=44 && r<=45) { return R18.Priority(); } 
  if (r>=46 && r<=47) { return R19.Priority(); } 
  if (r>=48 && r<=49) { return R20.Priority(); } 
  if (r>=50 && r<=51) { return R21.Priority(); } 
  if (r>=52 && r<=53) { return R22.Priority(); } 
  if (r>=54 && r<=55) { return R23.Priority(); } 
  if (r>=56 && r<=57) { return R24.Priority(); } 
  if (r>=58 && r<=59) { return R25.Priority(); } 
  if (r>=60 && r<=60) { return R26.Priority(); } 
  if (r>=61 && r<=61) { return R27.Priority(); } 
  if (r>=62 && r<=62) { return R28.Priority(); } 
  if (r>=63 && r<=63) { return R29.Priority(); } 
  if (r>=64 && r<=64) { return R30.Priority(); } 
  if (r>=65 && r<=65) { return R31.Priority(); } 
  if (r>=66 && r<=66) { return R32.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=6) return R0.Name(r-0);
  if (r>=7 && r<=13) return R1.Name(r-7);
  if (r>=14 && r<=20) return R2.Name(r-14);
  if (r>=21 && r<=22) return R3.Name(r-21);
  if (r>=23 && r<=24) return R4.Name(r-23);
  if (r>=25 && r<=26) return R5.Name(r-25);
  if (r>=27 && r<=28) return R6.Name(r-27);
  if (r>=29 && r<=30) return R7.Name(r-29);
  if (r>=31 && r<=32) return R8.Name(r-31);
  if (r>=33 && r<=34) return R9.Name(r-33);
  if (r>=35 && r<=36) return R10.Name(r-35);
  if (r>=37 && r<=37) return R11.Name(r-37);
  if (r>=38 && r<=38) return R12.Name(r-38);
  if (r>=39 && r<=39) return R13.Name(r-39);
  if (r>=40 && r<=40) return R14.Name(r-40);
  if (r>=41 && r<=41) return R15.Name(r-41);
  if (r>=42 && r<=42) return R16.Name(r-42);
  if (r>=43 && r<=43) return R17.Name(r-43);
  if (r>=44 && r<=45) return R18.Name(r-44);
  if (r>=46 && r<=47) return R19.Name(r-46);
  if (r>=48 && r<=49) return R20.Name(r-48);
  if (r>=50 && r<=51) return R21.Name(r-50);
  if (r>=52 && r<=53) return R22.Name(r-52);
  if (r>=54 && r<=55) return R23.Name(r-54);
  if (r>=56 && r<=57) return R24.Name(r-56);
  if (r>=58 && r<=59) return R25.Name(r-58);
  if (r>=60 && r<=60) return R26.Name(r-60);
  if (r>=61 && r<=61) return R27.Name(r-61);
  if (r>=62 && r<=62) return R28.Name(r-62);
  if (r>=63 && r<=63) return R29.Name(r-63);
  if (r>=64 && r<=64) return R30.Name(r-64);
  if (r>=65 && r<=65) return R31.Name(r-65);
  if (r>=66 && r<=66) return R32.Name(r-66);
  return NULL;
}
};
const unsigned numrules = 67;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 67


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
mu_System_Reset (  );
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
const rulerec invariants[] = {
{ NULL, NULL, NULL, FALSE }};
const unsigned short numinvariants = 0;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
cnt_fwd:ScalarsetArrayOfFree
cnt_resp:ScalarsetArrayOfFree
cnt_req:ScalarsetArrayOfFree
i_cacheL1_2:ScalarsetArrayOfFree
i_cacheL1_1:ScalarsetArrayOfFree
req:ScalarsetArrayOfScalarset
resp:ScalarsetArrayOfScalarset
fwd:ScalarsetArrayOfScalarset
i_directoryL1_2:Complex
i_directoryL1_1:Complex
g_perm:Complex
i_directoryL2:Complex
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  int class_mu_1_OBJSET_cacheL1_1[2];
  int undefined_class_mu_1_OBJSET_cacheL1_1;// has the highest class number

  void Print_class_mu_1_OBJSET_cacheL1_1();
  bool OnlyOneRemain_mu_1_OBJSET_cacheL1_1;
  bool MTO_class_mu_1_OBJSET_cacheL1_1()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_OBJSET_cacheL1_1)
      return FALSE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_OBJSET_cacheL1_1[i]== class_mu_1_OBJSET_cacheL1_1[j])
	    return TRUE;
    OnlyOneRemain_mu_1_OBJSET_cacheL1_1 = TRUE;
    return FALSE;
  }
  int class_mu_1_OBJSET_cacheL1_2[2];
  int undefined_class_mu_1_OBJSET_cacheL1_2;// has the highest class number

  void Print_class_mu_1_OBJSET_cacheL1_2();
  bool OnlyOneRemain_mu_1_OBJSET_cacheL1_2;
  bool MTO_class_mu_1_OBJSET_cacheL1_2()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_OBJSET_cacheL1_2)
      return FALSE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_OBJSET_cacheL1_2[i]== class_mu_1_OBJSET_cacheL1_2[j])
	    return TRUE;
    OnlyOneRemain_mu_1_OBJSET_cacheL1_2 = TRUE;
    return FALSE;
  }
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  int * in_mu_1_OBJSET_cacheL1_1;
  typedef int arr_mu_1_OBJSET_cacheL1_1[2];
  arr_mu_1_OBJSET_cacheL1_1 * perm_mu_1_OBJSET_cacheL1_1;
  arr_mu_1_OBJSET_cacheL1_1 * revperm_mu_1_OBJSET_cacheL1_1;

  int size_mu_1_OBJSET_cacheL1_1[2];
  bool reversed_sorted_mu_1_OBJSET_cacheL1_1(int start, int end);
  void reverse_reversed_mu_1_OBJSET_cacheL1_1(int start, int end);

  int * in_mu_1_OBJSET_cacheL1_2;
  typedef int arr_mu_1_OBJSET_cacheL1_2[2];
  arr_mu_1_OBJSET_cacheL1_2 * perm_mu_1_OBJSET_cacheL1_2;
  arr_mu_1_OBJSET_cacheL1_2 * revperm_mu_1_OBJSET_cacheL1_2;

  int size_mu_1_OBJSET_cacheL1_2[2];
  bool reversed_sorted_mu_1_OBJSET_cacheL1_2(int start, int end);
  void reverse_reversed_mu_1_OBJSET_cacheL1_2(int start, int end);

  // procedure for explicit representation
  bool ok0(mu_1_OBJSET_cacheL1_1* perm, int size, mu_1_OBJSET_cacheL1_1 k);
  void GenPerm0(mu_1_OBJSET_cacheL1_1* perm, int size, unsigned long& index);

  bool ok1(mu_1_OBJSET_cacheL1_2* perm, int size, mu_1_OBJSET_cacheL1_2 k);
  void GenPerm1(mu_1_OBJSET_cacheL1_2* perm, int size, unsigned long& index);

  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
void PermSet::Print_class_mu_1_OBJSET_cacheL1_1()
{
  cout << "class_mu_1_OBJSET_cacheL1_1:\t";
  for (int i=0; i<2; i++)
    cout << class_mu_1_OBJSET_cacheL1_1[i];
  cout << " " << undefined_class_mu_1_OBJSET_cacheL1_1 << "\n";
}
void PermSet::Print_class_mu_1_OBJSET_cacheL1_2()
{
  cout << "class_mu_1_OBJSET_cacheL1_2:\t";
  for (int i=0; i<2; i++)
    cout << class_mu_1_OBJSET_cacheL1_2[i];
  cout << " " << undefined_class_mu_1_OBJSET_cacheL1_2 << "\n";
}
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_OBJSET_cacheL1_1[i]== class_mu_1_OBJSET_cacheL1_1[j])
	    return TRUE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_OBJSET_cacheL1_2[i]== class_mu_1_OBJSET_cacheL1_2[j])
	    return TRUE;
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize
     || args->sym_alg.mode == argsym_alg::Heuristic_Fast_Canonicalize) {
    mu_1_OBJSET_cacheL1_1 Perm0[2];
    mu_1_OBJSET_cacheL1_2 Perm1[2];

  /********************
   declaration of class variables
  ********************/
  in = new bool[4];
 in_mu_1_OBJSET_cacheL1_1 = new int[4];
 perm_mu_1_OBJSET_cacheL1_1 = new arr_mu_1_OBJSET_cacheL1_1[2];
 revperm_mu_1_OBJSET_cacheL1_1 = new arr_mu_1_OBJSET_cacheL1_1[2];
 in_mu_1_OBJSET_cacheL1_2 = new int[4];
 perm_mu_1_OBJSET_cacheL1_2 = new arr_mu_1_OBJSET_cacheL1_2[2];
 revperm_mu_1_OBJSET_cacheL1_2 = new arr_mu_1_OBJSET_cacheL1_2[2];

    // Set perm and revperm
    count = 0;
    for (i=159; i<=160; i++)
      {
        Perm0[0].value(i);
        GenPerm0(Perm0, 1, count);
      }
    if (count!=2)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<2; i++)
      for (j=159; j<=160; j++)
        for (k=159; k<=160; k++)
          if (revperm_mu_1_OBJSET_cacheL1_1[i][k-159]==j)   // k - base 
            perm_mu_1_OBJSET_cacheL1_1[i][j-159]=k; // j - base 
    count = 0;
    for (i=156; i<=157; i++)
      {
        Perm1[0].value(i);
        GenPerm1(Perm1, 1, count);
      }
    if (count!=2)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<2; i++)
      for (j=156; j<=157; j++)
        for (k=156; k<=157; k++)
          if (revperm_mu_1_OBJSET_cacheL1_2[i][k-156]==j)   // k - base 
            perm_mu_1_OBJSET_cacheL1_2[i][j-156]=k; // j - base 

    // setting up combination of permutations
    // for different scalarset
    int carry;
    int i_mu_1_OBJSET_cacheL1_1 = 0;
    int i_mu_1_OBJSET_cacheL1_2 = 0;
    size = 4;
    count = 4;
    for (i=0; i<4; i++)
      {
        carry = 1;
        in[i]= TRUE;
      in_mu_1_OBJSET_cacheL1_1[i] = i_mu_1_OBJSET_cacheL1_1;
      i_mu_1_OBJSET_cacheL1_1 += carry;
      if (i_mu_1_OBJSET_cacheL1_1 >= 2) { i_mu_1_OBJSET_cacheL1_1 = 0; carry = 1; } 
      else { carry = 0; } 
      in_mu_1_OBJSET_cacheL1_2[i] = i_mu_1_OBJSET_cacheL1_2;
      i_mu_1_OBJSET_cacheL1_2 += carry;
      if (i_mu_1_OBJSET_cacheL1_2 >= 2) { i_mu_1_OBJSET_cacheL1_2 = 0; carry = 1; } 
      else { carry = 0; } 
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
 in_mu_1_OBJSET_cacheL1_1 = new int[1];
 perm_mu_1_OBJSET_cacheL1_1 = new arr_mu_1_OBJSET_cacheL1_1[1];
 revperm_mu_1_OBJSET_cacheL1_1 = new arr_mu_1_OBJSET_cacheL1_1[1];
 in_mu_1_OBJSET_cacheL1_2 = new int[1];
 perm_mu_1_OBJSET_cacheL1_2 = new arr_mu_1_OBJSET_cacheL1_2[1];
 revperm_mu_1_OBJSET_cacheL1_2 = new arr_mu_1_OBJSET_cacheL1_2[1];
  in[0] = TRUE;
    in_mu_1_OBJSET_cacheL1_1[0] = 0;
    in_mu_1_OBJSET_cacheL1_2[0] = 0;
  }
}
void PermSet::ResetToSimple()
{
  int i;
  for (i=0; i<2; i++)
    class_mu_1_OBJSET_cacheL1_1[i]=0;
  undefined_class_mu_1_OBJSET_cacheL1_1=0;
  OnlyOneRemain_mu_1_OBJSET_cacheL1_1 = FALSE;
  for (i=0; i<2; i++)
    class_mu_1_OBJSET_cacheL1_2[i]=0;
  undefined_class_mu_1_OBJSET_cacheL1_2=0;
  OnlyOneRemain_mu_1_OBJSET_cacheL1_2 = FALSE;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<4; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;
  int start_mu_1_OBJSET_cacheL1_1[2];
  int size_mu_1_OBJSET_cacheL1_1[2];
  bool should_be_in_mu_1_OBJSET_cacheL1_1[2];
  int start_mu_1_OBJSET_cacheL1_2[2];
  int size_mu_1_OBJSET_cacheL1_2[2];
  bool should_be_in_mu_1_OBJSET_cacheL1_2[2];

  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_OBJSET_cacheL1_1; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_OBJSET_cacheL1_1[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_OBJSET_cacheL1_1[k]==j)
	  {
	    size_mu_1_OBJSET_cacheL1_1[k] = class_size;
	    start_mu_1_OBJSET_cacheL1_1[k] = start;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_OBJSET_cacheL1_2; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_OBJSET_cacheL1_2[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_OBJSET_cacheL1_2[k]==j)
	  {
	    size_mu_1_OBJSET_cacheL1_2[k] = class_size;
	    start_mu_1_OBJSET_cacheL1_2[k] = start;
	  }
      start+=class_size;
    }

  // To be In or not to be
  for (i=0; i<2; i++) // set up
    should_be_in_mu_1_OBJSET_cacheL1_1[i] = TRUE;
  for (i=0; i<2; i++) // to be in or not to be
    for (k=0; k<2; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_OBJSET_cacheL1_1[i][k]-159 >=start_mu_1_OBJSET_cacheL1_1[k] 
	     && perm_mu_1_OBJSET_cacheL1_1[i][k]-159 < start_mu_1_OBJSET_cacheL1_1[k] + size_mu_1_OBJSET_cacheL1_1[k]) )
  	    {
	      should_be_in_mu_1_OBJSET_cacheL1_1[i] = FALSE;
	      break;
	    }
  for (i=0; i<2; i++) // set up
    should_be_in_mu_1_OBJSET_cacheL1_2[i] = TRUE;
  for (i=0; i<2; i++) // to be in or not to be
    for (k=0; k<2; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_OBJSET_cacheL1_2[i][k]-156 >=start_mu_1_OBJSET_cacheL1_2[k] 
	     && perm_mu_1_OBJSET_cacheL1_2[i][k]-156 < start_mu_1_OBJSET_cacheL1_2[k] + size_mu_1_OBJSET_cacheL1_2[k]) )
  	    {
	      should_be_in_mu_1_OBJSET_cacheL1_2[i] = FALSE;
	      break;
	    }

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<4; i++)
    {
      in[i] = TRUE;
      if (in[i] && !should_be_in_mu_1_OBJSET_cacheL1_1[in_mu_1_OBJSET_cacheL1_1[i]]) in[i] = FALSE;
      if (in[i] && !should_be_in_mu_1_OBJSET_cacheL1_2[in_mu_1_OBJSET_cacheL1_2[i]]) in[i] = FALSE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_OBJSET_cacheL1_1; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_OBJSET_cacheL1_1[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_OBJSET_cacheL1_1[k]==j)
	  {
	    size_mu_1_OBJSET_cacheL1_1[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_OBJSET_cacheL1_2; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_OBJSET_cacheL1_2[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_OBJSET_cacheL1_2[k]==j)
	  {
	    size_mu_1_OBJSET_cacheL1_2[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_OBJSET_cacheL1_1; j++) // class number
    {
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_OBJSET_cacheL1_1[k]==j)
	      revperm_mu_1_OBJSET_cacheL1_1[0][start++] = k+159;
    }
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_OBJSET_cacheL1_1[0][k]==j+159)
        perm_mu_1_OBJSET_cacheL1_1[0][j]=k+159;
  start = 0;
  for (j=0; j<=undefined_class_mu_1_OBJSET_cacheL1_2; j++) // class number
    {
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_OBJSET_cacheL1_2[k]==j)
	      revperm_mu_1_OBJSET_cacheL1_2[0][start++] = k+156;
    }
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_OBJSET_cacheL1_2[0][k]==j+156)
        perm_mu_1_OBJSET_cacheL1_2[0][j]=k+156;
  Presentation = Explicit;
}
bool PermSet::ok0(mu_1_OBJSET_cacheL1_1* Perm, int size, mu_1_OBJSET_cacheL1_1 k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm0(mu_1_OBJSET_cacheL1_1* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=2)
    {
      for (i=159; i<=160; i++)
        if(ok0(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm0(Perm, size+1, count);
          }
    }
  else
    {
      for (i=159; i<=160; i++)
        revperm_mu_1_OBJSET_cacheL1_1[count][i-159]=Perm[i-159].value();// i - base
      count++;
    }
}
bool PermSet::ok1(mu_1_OBJSET_cacheL1_2* Perm, int size, mu_1_OBJSET_cacheL1_2 k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm1(mu_1_OBJSET_cacheL1_2* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=2)
    {
      for (i=156; i<=157; i++)
        if(ok1(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm1(Perm, size+1, count);
          }
    }
  else
    {
      for (i=156; i<=157; i++)
        revperm_mu_1_OBJSET_cacheL1_2[count][i-156]=Perm[i-156].value();// i - base
      count++;
    }
}
bool PermSet::reversed_sorted_mu_1_OBJSET_cacheL1_1(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_OBJSET_cacheL1_1[0][i]<revperm_mu_1_OBJSET_cacheL1_1[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_OBJSET_cacheL1_1(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_OBJSET_cacheL1_1[0][j];
      revperm_mu_1_OBJSET_cacheL1_1[0][j] = revperm_mu_1_OBJSET_cacheL1_1[0][i];
      revperm_mu_1_OBJSET_cacheL1_1[0][i] = temp;
    }
}
bool PermSet::reversed_sorted_mu_1_OBJSET_cacheL1_2(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_OBJSET_cacheL1_2[0][i]<revperm_mu_1_OBJSET_cacheL1_2[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_OBJSET_cacheL1_2(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_OBJSET_cacheL1_2[0][j];
      revperm_mu_1_OBJSET_cacheL1_2[0][j] = revperm_mu_1_OBJSET_cacheL1_2[0][i];
      revperm_mu_1_OBJSET_cacheL1_2[0][i] = temp;
    }
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
  for (start = 0; start < 2; )
    {
      end = start-1+size_mu_1_OBJSET_cacheL1_1[revperm_mu_1_OBJSET_cacheL1_1[0][start]-159];
      if (reversed_sorted_mu_1_OBJSET_cacheL1_1(start,end))
	       {
	  reverse_reversed_mu_1_OBJSET_cacheL1_1(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_OBJSET_cacheL1_1(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_OBJSET_cacheL1_1[0][j]<revperm_mu_1_OBJSET_cacheL1_1[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_OBJSET_cacheL1_1[0][j];
			  revperm_mu_1_OBJSET_cacheL1_1[0][j] = revperm_mu_1_OBJSET_cacheL1_1[0][k];
			  revperm_mu_1_OBJSET_cacheL1_1[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_OBJSET_cacheL1_1(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
if (!nexted) {
  for (start = 0; start < 2; )
    {
      end = start-1+size_mu_1_OBJSET_cacheL1_2[revperm_mu_1_OBJSET_cacheL1_2[0][start]-156];
      if (reversed_sorted_mu_1_OBJSET_cacheL1_2(start,end))
	       {
	  reverse_reversed_mu_1_OBJSET_cacheL1_2(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_OBJSET_cacheL1_2(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_OBJSET_cacheL1_2[0][j]<revperm_mu_1_OBJSET_cacheL1_2[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_OBJSET_cacheL1_2[0][j];
			  revperm_mu_1_OBJSET_cacheL1_2[0][j] = revperm_mu_1_OBJSET_cacheL1_2[0][k];
			  revperm_mu_1_OBJSET_cacheL1_2[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_OBJSET_cacheL1_2(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
}
if (!nexted) return FALSE;
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_OBJSET_cacheL1_1[0][k]==j+159)   // k - base 
	perm_mu_1_OBJSET_cacheL1_1[0][j]=k+159; // j - base 
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_OBJSET_cacheL1_2[0][k]==j+156)   // k - base 
	perm_mu_1_OBJSET_cacheL1_2[0][j]=k+156; // j - base 
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_cnt_fwd.MultisetSort();
        mu_cnt_resp.MultisetSort();
        mu_cnt_req.MultisetSort();
        mu_i_cacheL1_2.MultisetSort();
        mu_i_cacheL1_1.MultisetSort();
        mu_req.MultisetSort();
        mu_resp.MultisetSort();
        mu_fwd.MultisetSort();
        mu_i_directoryL1_2.MultisetSort();
        mu_i_directoryL1_1.MultisetSort();
        mu_g_perm.MultisetSort();
        mu_i_directoryL2.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_Address::Permute(PermSet& Perm, int i) {}
void mu_1_Address::SimpleCanonicalize(PermSet& Perm) {}
void mu_1_Address::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_Address::SimpleLimit(PermSet& Perm) {}
void mu_1_Address::ArrayLimit(PermSet& Perm) {}
void mu_1_Address::Limit(PermSet& Perm) {}
void mu_1_Address::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_ClValue::Permute(PermSet& Perm, int i) {};
void mu_1_ClValue::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_ClValue::Canonicalize(PermSet& Perm) {};
void mu_1_ClValue::SimpleLimit(PermSet& Perm) {};
void mu_1_ClValue::ArrayLimit(PermSet& Perm) {};
void mu_1_ClValue::Limit(PermSet& Perm) {};
void mu_1_ClValue::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_PermissionType::Permute(PermSet& Perm, int i) {};
void mu_1_PermissionType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_PermissionType::Canonicalize(PermSet& Perm) {};
void mu_1_PermissionType::SimpleLimit(PermSet& Perm) {};
void mu_1_PermissionType::ArrayLimit(PermSet& Perm) {};
void mu_1_PermissionType::Limit(PermSet& Perm) {};
void mu_1_PermissionType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MessageType::Permute(PermSet& Perm, int i) {};
void mu_1_MessageType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MessageType::Canonicalize(PermSet& Perm) {};
void mu_1_MessageType::SimpleLimit(PermSet& Perm) {};
void mu_1_MessageType::ArrayLimit(PermSet& Perm) {};
void mu_1_MessageType::Limit(PermSet& Perm) {};
void mu_1_MessageType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_s_directoryL2::Permute(PermSet& Perm, int i) {};
void mu_1_s_directoryL2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_s_directoryL2::Canonicalize(PermSet& Perm) {};
void mu_1_s_directoryL2::SimpleLimit(PermSet& Perm) {};
void mu_1_s_directoryL2::ArrayLimit(PermSet& Perm) {};
void mu_1_s_directoryL2::Limit(PermSet& Perm) {};
void mu_1_s_directoryL2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_s_directoryL1_1::Permute(PermSet& Perm, int i) {};
void mu_1_s_directoryL1_1::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_s_directoryL1_1::Canonicalize(PermSet& Perm) {};
void mu_1_s_directoryL1_1::SimpleLimit(PermSet& Perm) {};
void mu_1_s_directoryL1_1::ArrayLimit(PermSet& Perm) {};
void mu_1_s_directoryL1_1::Limit(PermSet& Perm) {};
void mu_1_s_directoryL1_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_s_cacheL1_2::Permute(PermSet& Perm, int i) {};
void mu_1_s_cacheL1_2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_s_cacheL1_2::Canonicalize(PermSet& Perm) {};
void mu_1_s_cacheL1_2::SimpleLimit(PermSet& Perm) {};
void mu_1_s_cacheL1_2::ArrayLimit(PermSet& Perm) {};
void mu_1_s_cacheL1_2::Limit(PermSet& Perm) {};
void mu_1_s_cacheL1_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_s_directoryL1_2::Permute(PermSet& Perm, int i) {};
void mu_1_s_directoryL1_2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_s_directoryL1_2::Canonicalize(PermSet& Perm) {};
void mu_1_s_directoryL1_2::SimpleLimit(PermSet& Perm) {};
void mu_1_s_directoryL1_2::ArrayLimit(PermSet& Perm) {};
void mu_1_s_directoryL1_2::Limit(PermSet& Perm) {};
void mu_1_s_directoryL1_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_s_cacheL1_1::Permute(PermSet& Perm, int i) {};
void mu_1_s_cacheL1_1::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_s_cacheL1_1::Canonicalize(PermSet& Perm) {};
void mu_1_s_cacheL1_1::SimpleLimit(PermSet& Perm) {};
void mu_1_s_cacheL1_1::ArrayLimit(PermSet& Perm) {};
void mu_1_s_cacheL1_1::Limit(PermSet& Perm) {};
void mu_1_s_cacheL1_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_OBJSET_directoryL2::Permute(PermSet& Perm, int i) {};
void mu_1_OBJSET_directoryL2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directoryL2::Canonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directoryL2::SimpleLimit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL2::ArrayLimit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL2::Limit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_OBJSET_directoryL1_1::Permute(PermSet& Perm, int i) {};
void mu_1_OBJSET_directoryL1_1::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_1::Canonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_1::SimpleLimit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_1::ArrayLimit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_1::Limit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_OBJSET_cacheL1_2::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_OBJSET_cacheL1_2[Perm.in_mu_1_OBJSET_cacheL1_2[i]][value()-156]); // value - base
};
void mu_1_OBJSET_cacheL1_2::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_OBJSET_cacheL1_2[value()-156]==Perm.undefined_class_mu_1_OBJSET_cacheL1_2) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == Perm.undefined_class_mu_1_OBJSET_cacheL1_2 && i!=value()-156)
            Perm.class_mu_1_OBJSET_cacheL1_2[i]++;
        value(156 + Perm.undefined_class_mu_1_OBJSET_cacheL1_2++);
      }
    else 
      {
        value(Perm.class_mu_1_OBJSET_cacheL1_2[value()-156]+156);
      }
}
void mu_1_OBJSET_cacheL1_2::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_OBJSET_cacheL1_2::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_OBJSET_cacheL1_2[value()-156]==Perm.undefined_class_mu_1_OBJSET_cacheL1_2) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == Perm.undefined_class_mu_1_OBJSET_cacheL1_2 && i!=value()-156)
            Perm.class_mu_1_OBJSET_cacheL1_2[i]++;
        Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
      }
}
void mu_1_OBJSET_cacheL1_2::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJSET_cacheL1_2::Limit(PermSet& Perm) {}
void mu_1_OBJSET_cacheL1_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_OBJSET_directoryL1_2::Permute(PermSet& Perm, int i) {};
void mu_1_OBJSET_directoryL1_2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_2::Canonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_2::SimpleLimit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_2::ArrayLimit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_2::Limit(PermSet& Perm) {};
void mu_1_OBJSET_directoryL1_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_OBJSET_cacheL1_1::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_OBJSET_cacheL1_1[Perm.in_mu_1_OBJSET_cacheL1_1[i]][value()-159]); // value - base
};
void mu_1_OBJSET_cacheL1_1::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_OBJSET_cacheL1_1[value()-159]==Perm.undefined_class_mu_1_OBJSET_cacheL1_1) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == Perm.undefined_class_mu_1_OBJSET_cacheL1_1 && i!=value()-159)
            Perm.class_mu_1_OBJSET_cacheL1_1[i]++;
        value(159 + Perm.undefined_class_mu_1_OBJSET_cacheL1_1++);
      }
    else 
      {
        value(Perm.class_mu_1_OBJSET_cacheL1_1[value()-159]+159);
      }
}
void mu_1_OBJSET_cacheL1_1::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_OBJSET_cacheL1_1::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_OBJSET_cacheL1_1[value()-159]==Perm.undefined_class_mu_1_OBJSET_cacheL1_1) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == Perm.undefined_class_mu_1_OBJSET_cacheL1_1 && i!=value()-159)
            Perm.class_mu_1_OBJSET_cacheL1_1[i]++;
        Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
      }
}
void mu_1_OBJSET_cacheL1_1::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJSET_cacheL1_1::Limit(PermSet& Perm) {}
void mu_1_OBJSET_cacheL1_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_C1Machines::Permute(PermSet& Perm, int i) {}
void mu_1_C1Machines::SimpleCanonicalize(PermSet& Perm) {}
void mu_1_C1Machines::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_C1Machines::SimpleLimit(PermSet& Perm) {}
void mu_1_C1Machines::ArrayLimit(PermSet& Perm) {}
void mu_1_C1Machines::Limit(PermSet& Perm) {}
void mu_1_C1Machines::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for union type.\n"); };
void mu_1_Machines::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 159 ) && ( value() <= 160 ) )
      value(Perm.perm_mu_1_OBJSET_cacheL1_1[Perm.in_mu_1_OBJSET_cacheL1_1[i]][value()-159]+(0)); // value - base
    if ( ( value() >= 156 ) && ( value() <= 157 ) )
      value(Perm.perm_mu_1_OBJSET_cacheL1_2[Perm.in_mu_1_OBJSET_cacheL1_2[i]][value()-156]+(0)); // value - base
  }
}
void mu_1_Machines::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 159 ) && ( value() <= 160 ) )
      {
        if (Perm.class_mu_1_OBJSET_cacheL1_1[value()-159]==Perm.undefined_class_mu_1_OBJSET_cacheL1_1) // value - base
          {
            // it has not been mapped to any particular value
            for (i=0; i<2; i++)
              if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == Perm.undefined_class_mu_1_OBJSET_cacheL1_1 && i!=value()-159)
                Perm.class_mu_1_OBJSET_cacheL1_1[i]++;
            value(159 + Perm.undefined_class_mu_1_OBJSET_cacheL1_1++);
          }
        else 
          {
            value(Perm.class_mu_1_OBJSET_cacheL1_1[value()-159]+159);
          }
      }
    if ( ( value() >= 156 ) && ( value() <= 157 ) )
      {
        if (Perm.class_mu_1_OBJSET_cacheL1_2[value()-156]==Perm.undefined_class_mu_1_OBJSET_cacheL1_2) // value - base
          {
            // it has not been mapped to any particular value
            for (i=0; i<2; i++)
              if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == Perm.undefined_class_mu_1_OBJSET_cacheL1_2 && i!=value()-156)
                Perm.class_mu_1_OBJSET_cacheL1_2[i]++;
            value(156 + Perm.undefined_class_mu_1_OBJSET_cacheL1_2++);
          }
        else 
          {
            value(Perm.class_mu_1_OBJSET_cacheL1_2[value()-156]+156);
          }
      }
  }
}
void mu_1_Machines::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_Machines::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 159 ) && ( value() <= 160 ) )
      if (Perm.class_mu_1_OBJSET_cacheL1_1[value()-159]==Perm.undefined_class_mu_1_OBJSET_cacheL1_1) // value - base
        {
          // it has not been mapped to any particular value
          for (i=0; i<2; i++)
            if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == Perm.undefined_class_mu_1_OBJSET_cacheL1_1 && i!=value()-159)
              Perm.class_mu_1_OBJSET_cacheL1_1[i]++;
          Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
        }
    if ( ( value() >= 156 ) && ( value() <= 157 ) )
      if (Perm.class_mu_1_OBJSET_cacheL1_2[value()-156]==Perm.undefined_class_mu_1_OBJSET_cacheL1_2) // value - base
        {
          // it has not been mapped to any particular value
          for (i=0; i<2; i++)
            if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == Perm.undefined_class_mu_1_OBJSET_cacheL1_2 && i!=value()-156)
              Perm.class_mu_1_OBJSET_cacheL1_2[i]++;
          Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
        }
  }
}
void mu_1_Machines::ArrayLimit(PermSet& Perm) {}
void mu_1_Machines::Limit(PermSet& Perm) {}
void mu_1_Machines::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for union type.\n"); };
void mu_1_acc_type_obj::Permute(PermSet& Perm, int i)
{
  static mu_1_acc_type_obj temp("Permute_mu_1_acc_type_obj",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1_acc_type_obj::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1_acc_type_obj::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_acc_type_obj::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_acc_type_obj::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_acc_type_obj::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_acc_type_obj::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for multiset type of scalarset-free elements.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].Canonicalize(Perm);
}
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_PermMonitor::Permute(PermSet& Perm, int i)
{
  static mu_1_PermMonitor temp("Permute_mu_1_PermMonitor",-1);
  int j;
  for (j=0; j<7; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=159; j<=160; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_OBJSET_cacheL1_1[Perm.in_mu_1_OBJSET_cacheL1_1[i]][j-159]];
  temp = *this;
  for (j=156; j<=157; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_OBJSET_cacheL1_2[Perm.in_mu_1_OBJSET_cacheL1_2[i]][j-156]];
};
void mu_1_PermMonitor::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_PermMonitor::Canonicalize(PermSet& Perm){};
void mu_1_PermMonitor::SimpleLimit(PermSet& Perm){}
void mu_1_PermMonitor::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_1__type_0 value[7];
  // limit
  bool exists;
  bool split;
  int count_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int count_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  // sorting mu_1_OBJSET_cacheL1_1
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_1 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+159]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_1[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_1; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_1[k][z] = pos_mu_1_OBJSET_cacheL1_1[k-1][z];
                    }
                  value[j] = (*this)[i+159];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_1++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_1)
            {
              value[j] = (*this)[i+159];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_1++;
            }
        }
    }
  // sorting mu_1_OBJSET_cacheL1_2
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_2 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+156]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_2[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_2; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_2[k][z] = pos_mu_1_OBJSET_cacheL1_2[k-1][z];
                    }
                  value[j] = (*this)[i+156];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_2++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_2)
            {
              value[j] = (*this)[i+156];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_2++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && Perm.class_mu_1_OBJSET_cacheL1_1[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_1[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_1[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
                    }
                }
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && Perm.class_mu_1_OBJSET_cacheL1_2[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_2[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_2[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
                    }
                }
            }
        }
    }
}
void mu_1_PermMonitor::Limit(PermSet& Perm){}
void mu_1_PermMonitor::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i) {};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_1::Canonicalize(PermSet& Perm) {};
void mu_1__type_1::SimpleLimit(PermSet& Perm) {};
void mu_1__type_1::ArrayLimit(PermSet& Perm) {};
void mu_1__type_1::Limit(PermSet& Perm) {};
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i) {};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_2::Canonicalize(PermSet& Perm) {};
void mu_1__type_2::SimpleLimit(PermSet& Perm) {};
void mu_1__type_2::ArrayLimit(PermSet& Perm) {};
void mu_1__type_2::Limit(PermSet& Perm) {};
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i) {};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_3::Canonicalize(PermSet& Perm) {};
void mu_1__type_3::SimpleLimit(PermSet& Perm) {};
void mu_1__type_3::ArrayLimit(PermSet& Perm) {};
void mu_1__type_3::Limit(PermSet& Perm) {};
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
  mu_src.Permute(Perm,i);
  mu_dst.Permute(Perm,i);
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{
  mu_src.SimpleCanonicalize(Perm);
  mu_dst.SimpleCanonicalize(Perm);
};
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm)
{
  mu_src.SimpleLimit(Perm);
  mu_dst.SimpleLimit(Perm);
};
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu__subrange_26::Permute(PermSet& Perm, int i) {};
void mu__subrange_26::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_26::Canonicalize(PermSet& Perm) {};
void mu__subrange_26::SimpleLimit(PermSet& Perm) {};
void mu__subrange_26::ArrayLimit(PermSet& Perm) {};
void mu__subrange_26::Limit(PermSet& Perm) {};
void mu__subrange_26::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<16; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<16; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_NET_Ordered::Permute(PermSet& Perm, int i)
{
  static mu_1_NET_Ordered temp("Permute_mu_1_NET_Ordered",-1);
  int j;
  for (j=0; j<7; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=159; j<=160; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_OBJSET_cacheL1_1[Perm.in_mu_1_OBJSET_cacheL1_1[i]][j-159]];
  temp = *this;
  for (j=156; j<=157; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_OBJSET_cacheL1_2[Perm.in_mu_1_OBJSET_cacheL1_2[i]][j-156]];
};
void mu_1_NET_Ordered::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_NET_Ordered::Canonicalize(PermSet& Perm){};
void mu_1_NET_Ordered::SimpleLimit(PermSet& Perm){}
void mu_1_NET_Ordered::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_1__type_4 value[7];
  // limit
  bool exists;
  bool split;
  int count_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int count_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  // sorting mu_1_OBJSET_cacheL1_1
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_1 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+159]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_1[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_1; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_1[k][z] = pos_mu_1_OBJSET_cacheL1_1[k-1][z];
                    }
                  value[j] = (*this)[i+159];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_1++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_1)
            {
              value[j] = (*this)[i+159];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_1++;
            }
        }
    }
  // sorting mu_1_OBJSET_cacheL1_2
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_2 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+156]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_2[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_2; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_2[k][z] = pos_mu_1_OBJSET_cacheL1_2[k-1][z];
                    }
                  value[j] = (*this)[i+156];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_2++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_2)
            {
              value[j] = (*this)[i+156];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_2++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && Perm.class_mu_1_OBJSET_cacheL1_1[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_1[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_1[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
                    }
                }
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && Perm.class_mu_1_OBJSET_cacheL1_2[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_2[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_2[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
                    }
                }
            }
        }
    }
}
void mu_1_NET_Ordered::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1__type_4 value[7];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_OBJSET_cacheL1_2, oldcount_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  int count_mu_1_OBJSET_cacheL1_1, oldcount_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_2 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == count_mu_1_OBJSET_cacheL1_2)
         {
           pos_mu_1_OBJSET_cacheL1_2[count_mu_1_OBJSET_cacheL1_2][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_2++;
      else break;
    }
  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_1 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == count_mu_1_OBJSET_cacheL1_1)
         {
           pos_mu_1_OBJSET_cacheL1_1[count_mu_1_OBJSET_cacheL1_1][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_1++;
      else break;
    }
  // loop through elements of a array indexed by subrange
  for (i0 = 0; i0 <= 15; i0++)
  {

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+159][i0].mu_src.isundefined()
            ||(*this)[k+159][i0].mu_src!=k+159)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] 
                    && !(*this)[k+159][i0].mu_src.isundefined()
                    && (*this)[k+159][i0].mu_src==k+159)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_OBJSET_cacheL1_1; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_OBJSET_cacheL1_1[j][k] = pos_mu_1_OBJSET_cacheL1_1[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                            pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                          if (pos_mu_1_OBJSET_cacheL1_1[i+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                            pos_mu_1_OBJSET_cacheL1_1[i+1][k] = FALSE;
                        }
                      count_mu_1_OBJSET_cacheL1_1++; i++;
                    }
                }
            }
        }
    }

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+159][i0].mu_dst.isundefined()
            ||(*this)[k+159][i0].mu_dst!=k+159)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] 
                    && !(*this)[k+159][i0].mu_dst.isundefined()
                    && (*this)[k+159][i0].mu_dst==k+159)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_OBJSET_cacheL1_1; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_OBJSET_cacheL1_1[j][k] = pos_mu_1_OBJSET_cacheL1_1[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                            pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                          if (pos_mu_1_OBJSET_cacheL1_1[i+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                            pos_mu_1_OBJSET_cacheL1_1[i+1][k] = FALSE;
                        }
                      count_mu_1_OBJSET_cacheL1_1++; i++;
                    }
                }
            }
        }
    }
  }
  // loop through elements of a array indexed by subrange
  for (i0 = 0; i0 <= 15; i0++)
  {

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+156][i0].mu_src.isundefined()
            ||(*this)[k+156][i0].mu_src!=k+156)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] 
                    && !(*this)[k+156][i0].mu_src.isundefined()
                    && (*this)[k+156][i0].mu_src==k+156)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_OBJSET_cacheL1_2; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_OBJSET_cacheL1_2[j][k] = pos_mu_1_OBJSET_cacheL1_2[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                            pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                          if (pos_mu_1_OBJSET_cacheL1_2[i+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                            pos_mu_1_OBJSET_cacheL1_2[i+1][k] = FALSE;
                        }
                      count_mu_1_OBJSET_cacheL1_2++; i++;
                    }
                }
            }
        }
    }

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+156][i0].mu_dst.isundefined()
            ||(*this)[k+156][i0].mu_dst!=k+156)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] 
                    && !(*this)[k+156][i0].mu_dst.isundefined()
                    && (*this)[k+156][i0].mu_dst==k+156)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_OBJSET_cacheL1_2; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_OBJSET_cacheL1_2[j][k] = pos_mu_1_OBJSET_cacheL1_2[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                            pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                          if (pos_mu_1_OBJSET_cacheL1_2[i+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                            pos_mu_1_OBJSET_cacheL1_2[i+1][k] = FALSE;
                        }
                      count_mu_1_OBJSET_cacheL1_2++; i++;
                    }
                }
            }
        }
    }
  }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2);
  while ( while_guard )
    {
      oldcount_mu_1_OBJSET_cacheL1_2 = count_mu_1_OBJSET_cacheL1_2;
      oldcount_mu_1_OBJSET_cacheL1_1 = count_mu_1_OBJSET_cacheL1_1;
  // loop through elements of a array indexed by subrange
  for (i0 = 0; i0 <= 15; i0++)
  {

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2)
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+159][i0].mu_src.isundefined()
                &&(*this)[k+159][i0].mu_src!=k+159
                &&(*this)[k+159][i0].mu_src>=159
                &&(*this)[k+159][i0].mu_src<=160)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_OBJSET_cacheL1_1[i][k] 
                            && !(*this)[k+159][i0].mu_src.isundefined()
                            && (*this)[k+159][i0].mu_src!=k+159
                            && (*this)[k+159][i0].mu_src>=159
                            && (*this)[k+159][i0].mu_src<=160
                            && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k+159][i0].mu_src-159])
                          {
                            exists = TRUE;
                            goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_OBJSET_cacheL1_1; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = pos_mu_1_OBJSET_cacheL1_1[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                                  if (pos_mu_1_OBJSET_cacheL1_1[i+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                    pos_mu_1_OBJSET_cacheL1_1[i+1][k] = FALSE;                  
                                }
                              count_mu_1_OBJSET_cacheL1_1++;
                            }
                        }
                    }
                }
            }
        }

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2)
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+159][i0].mu_dst.isundefined()
                &&(*this)[k+159][i0].mu_dst!=k+159
                &&(*this)[k+159][i0].mu_dst>=159
                &&(*this)[k+159][i0].mu_dst<=160)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_OBJSET_cacheL1_1[i][k] 
                            && !(*this)[k+159][i0].mu_dst.isundefined()
                            && (*this)[k+159][i0].mu_dst!=k+159
                            && (*this)[k+159][i0].mu_dst>=159
                            && (*this)[k+159][i0].mu_dst<=160
                            && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k+159][i0].mu_dst-159])
                          {
                            exists = TRUE;
                            goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_OBJSET_cacheL1_1; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = pos_mu_1_OBJSET_cacheL1_1[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                                  if (pos_mu_1_OBJSET_cacheL1_1[i+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                    pos_mu_1_OBJSET_cacheL1_1[i+1][k] = FALSE;                  
                                }
                              count_mu_1_OBJSET_cacheL1_1++;
                            }
                        }
                    }
                }
            }
        }
  }
  // loop through elements of a array indexed by subrange
  for (i0 = 0; i0 <= 15; i0++)
  {

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2)
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+156][i0].mu_src.isundefined()
                &&(*this)[k+156][i0].mu_src!=k+156
                &&(*this)[k+156][i0].mu_src>=156
                &&(*this)[k+156][i0].mu_src<=157)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_OBJSET_cacheL1_2[i][k] 
                            && !(*this)[k+156][i0].mu_src.isundefined()
                            && (*this)[k+156][i0].mu_src!=k+156
                            && (*this)[k+156][i0].mu_src>=156
                            && (*this)[k+156][i0].mu_src<=157
                            && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k+156][i0].mu_src-156])
                          {
                            exists = TRUE;
                            goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_OBJSET_cacheL1_2; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = pos_mu_1_OBJSET_cacheL1_2[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                                  if (pos_mu_1_OBJSET_cacheL1_2[i+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                    pos_mu_1_OBJSET_cacheL1_2[i+1][k] = FALSE;                  
                                }
                              count_mu_1_OBJSET_cacheL1_2++;
                            }
                        }
                    }
                }
            }
        }

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2)
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+156][i0].mu_dst.isundefined()
                &&(*this)[k+156][i0].mu_dst!=k+156
                &&(*this)[k+156][i0].mu_dst>=156
                &&(*this)[k+156][i0].mu_dst<=157)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_OBJSET_cacheL1_2[i][k] 
                            && !(*this)[k+156][i0].mu_dst.isundefined()
                            && (*this)[k+156][i0].mu_dst!=k+156
                            && (*this)[k+156][i0].mu_dst>=156
                            && (*this)[k+156][i0].mu_dst<=157
                            && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k+156][i0].mu_dst-156])
                          {
                            exists = TRUE;
                            goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_OBJSET_cacheL1_2; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = pos_mu_1_OBJSET_cacheL1_2[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                                  if (pos_mu_1_OBJSET_cacheL1_2[i+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                    pos_mu_1_OBJSET_cacheL1_2[i+1][k] = FALSE;                  
                                }
                              count_mu_1_OBJSET_cacheL1_2++;
                            }
                        }
                    }
                }
            }
        }
  }
  // loop through elements of a array indexed by subrange
  for (i0 = 0; i0 <= 15; i0++)
  {

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+159][i0].mu_src.isundefined()
                ||(*this)[k+159][i0].mu_src<156
                ||(*this)[k+159][i0].mu_src>157)
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_OBJSET_cacheL1_1[i][k] 
                          && !(*this)[k+159][i0].mu_src.isundefined()
                          && (*this)[k+159][i0].mu_src>=156
                          && (*this)[k+159][i0].mu_src<=157
                          && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k+159][i0].mu_src-156])
                        {
                          exists = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[(*this)[k+159][i0].mu_src-156] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[i+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[i+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[j+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                      }
                  }
            }
        }

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+159][i0].mu_dst.isundefined()
                ||(*this)[k+159][i0].mu_dst<156
                ||(*this)[k+159][i0].mu_dst>157)
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_OBJSET_cacheL1_1[i][k] 
                          && !(*this)[k+159][i0].mu_dst.isundefined()
                          && (*this)[k+159][i0].mu_dst>=156
                          && (*this)[k+159][i0].mu_dst<=157
                          && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k+159][i0].mu_dst-156])
                        {
                          exists = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[(*this)[k+159][i0].mu_dst-156] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[i+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[i+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[j+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                      }
                  }
            }
        }
  }
  // loop through elements of a array indexed by subrange
  for (i0 = 0; i0 <= 15; i0++)
  {

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+156][i0].mu_src.isundefined()
                ||(*this)[k+156][i0].mu_src<159
                ||(*this)[k+156][i0].mu_src>160)
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_OBJSET_cacheL1_2[i][k] 
                          && !(*this)[k+156][i0].mu_src.isundefined()
                          && (*this)[k+156][i0].mu_src>=159
                          && (*this)[k+156][i0].mu_src<=160
                          && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k+156][i0].mu_src-159])
                        {
                          exists = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[(*this)[k+156][i0].mu_src-159] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[i+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[i+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[j+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                      }
                  }
            }
        }

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+156][i0].mu_dst.isundefined()
                ||(*this)[k+156][i0].mu_dst<159
                ||(*this)[k+156][i0].mu_dst>160)
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_OBJSET_cacheL1_2[i][k] 
                          && !(*this)[k+156][i0].mu_dst.isundefined()
                          && (*this)[k+156][i0].mu_dst>=159
                          && (*this)[k+156][i0].mu_dst<=160
                          && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k+156][i0].mu_dst-159])
                        {
                          exists = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[(*this)[k+156][i0].mu_dst-159] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[i+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[i+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[j+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                      }
                  }
            }
        }
  }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_2!=count_mu_1_OBJSET_cacheL1_2);
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_1!=count_mu_1_OBJSET_cacheL1_1);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_2<2;
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_1<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_2[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_2[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_2=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_2[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_2)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_2=Perm.class_mu_1_OBJSET_cacheL1_2[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_1[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_1[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_1=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_1[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_1)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_1=Perm.class_mu_1_OBJSET_cacheL1_1[j];
    }
}
void mu_1_NET_Ordered::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i) {};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_5::Canonicalize(PermSet& Perm) {};
void mu_1__type_5::SimpleLimit(PermSet& Perm) {};
void mu_1__type_5::ArrayLimit(PermSet& Perm) {};
void mu_1__type_5::Limit(PermSet& Perm) {};
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_NET_Ordered_cnt::Permute(PermSet& Perm, int i)
{
  static mu_1_NET_Ordered_cnt temp("Permute_mu_1_NET_Ordered_cnt",-1);
  int j;
  for (j=0; j<7; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=159; j<=160; j++)
      (*this)[j].value(temp[Perm.revperm_mu_1_OBJSET_cacheL1_1[Perm.in_mu_1_OBJSET_cacheL1_1[i]][j-159]].value());
  temp = *this;
  for (j=156; j<=157; j++)
      (*this)[j].value(temp[Perm.revperm_mu_1_OBJSET_cacheL1_2[Perm.in_mu_1_OBJSET_cacheL1_2[i]][j-156]].value());
};
void mu_1_NET_Ordered_cnt::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_NET_Ordered_cnt::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  static mu_1__type_5 value[7];
  int compare;
  // limit
  bool exists;
  bool split;
  // range mapping
  int start;
  int class_size;
  // canonicalization
  static mu_1_NET_Ordered_cnt temp;
  int count_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int size_mu_1_OBJSET_cacheL1_1[2];
  int start_mu_1_OBJSET_cacheL1_1[2];
  int count_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  int size_mu_1_OBJSET_cacheL1_2[2];
  int start_mu_1_OBJSET_cacheL1_2[2];
  // sorting mu_1_OBJSET_cacheL1_1
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_1 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+159]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_1[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_1; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_1[k][z] = pos_mu_1_OBJSET_cacheL1_1[k-1][z];
                    }
                  value[j].value((*this)[i+159].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_1++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_1)
            {
                value[j].value((*this)[i+159].value());
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_1++;
            }
        }
    }
  // sorting mu_1_OBJSET_cacheL1_2
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_2 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+156]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_2[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_2; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_2[k][z] = pos_mu_1_OBJSET_cacheL1_2[k-1][z];
                    }
                  value[j].value((*this)[i+156].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_2++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_2)
            {
                value[j].value((*this)[i+156].value());
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_2++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && Perm.class_mu_1_OBJSET_cacheL1_1[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_1[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_1[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
                    }
                }
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && Perm.class_mu_1_OBJSET_cacheL1_2[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_2[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_2[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_OBJSET_cacheL1_1; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_OBJSET_cacheL1_1[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_OBJSET_cacheL1_1[k]==j)
              {
                size_mu_1_OBJSET_cacheL1_1[k] = class_size;
                start_mu_1_OBJSET_cacheL1_1[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_OBJSET_cacheL1_1[j] 
             && i < start_mu_1_OBJSET_cacheL1_1[j] + size_mu_1_OBJSET_cacheL1_1[j])
           {
             array[i+5].value(temp[j+159].value());
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_OBJSET_cacheL1_1[j]+5].value(temp[j+159].value());
    }
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_OBJSET_cacheL1_2; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_OBJSET_cacheL1_2[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_OBJSET_cacheL1_2[k]==j)
              {
                size_mu_1_OBJSET_cacheL1_2[k] = class_size;
                start_mu_1_OBJSET_cacheL1_2[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_OBJSET_cacheL1_2[j] 
             && i < start_mu_1_OBJSET_cacheL1_2[j] + size_mu_1_OBJSET_cacheL1_2[j])
           {
             array[i+2].value(temp[j+156].value());
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_OBJSET_cacheL1_2[j]+2].value(temp[j+156].value());
    }
}
void mu_1_NET_Ordered_cnt::SimpleLimit(PermSet& Perm){}
void mu_1_NET_Ordered_cnt::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_1__type_5 value[7];
  // limit
  bool exists;
  bool split;
  int count_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int count_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  // sorting mu_1_OBJSET_cacheL1_1
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_1 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+159]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_1[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_1; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_1[k][z] = pos_mu_1_OBJSET_cacheL1_1[k-1][z];
                    }
                  value[j].value((*this)[i+159].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_1++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_1)
            {
                value[j].value((*this)[i+159].value());
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_1++;
            }
        }
    }
  // sorting mu_1_OBJSET_cacheL1_2
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_2 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+156]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_2[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_2; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_2[k][z] = pos_mu_1_OBJSET_cacheL1_2[k-1][z];
                    }
                  value[j].value((*this)[i+156].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_2++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_2)
            {
                value[j].value((*this)[i+156].value());
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_2++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && Perm.class_mu_1_OBJSET_cacheL1_1[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_1[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_1[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
                    }
                }
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && Perm.class_mu_1_OBJSET_cacheL1_2[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_2[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_2[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
                    }
                }
            }
        }
    }
}
void mu_1_NET_Ordered_cnt::Limit(PermSet& Perm){}
void mu_1_NET_Ordered_cnt::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_6::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_6::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_6::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_Message value[16];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_OBJSET_cacheL1_2, oldcount_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  int count_mu_1_OBJSET_cacheL1_1, oldcount_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int count_multisetindex, oldcount_multisetindex;
  bool pos_multisetindex[16][16];
  bool goodset_multisetindex[16];
  mu_1_Message temp;

  // compact
  for (i = 0, j = 0; i < 16; i++)
    if (valid[i].value())
      {
        if (j!=i)
          array[j++] = array[i];
        else
          j++;
      }
  if (j != current_size) current_size = j;
  for (i = j; i < 16; i++)
    array[i].undefine();
  for (i = 0; i < j; i++)
    valid[i].value(TRUE);
  for (i = j; i < 16; i++)
    valid[i].value(FALSE);

  // bubble sort
  for (i = 0; i < current_size; i++)
    for (j = i+1; j < current_size; j++)
      if (CompareWeight(array[i],array[j])>0)
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
  // initializing pos array
    for (i=0; i<current_size; i++)
      for (j=0; j<current_size; j++)
        pos_multisetindex[i][j]=FALSE;
    count_multisetindex = 1;
    pos_multisetindex[0][0] = TRUE;
    for (i = 1, j = 0 ; i < current_size; i++)
      if (CompareWeight(array[i-1],array[i])==0)
        pos_multisetindex[j][i] = TRUE;
      else
        { count_multisetindex++; pos_multisetindex[++j][i] = TRUE; }
  if (current_size == 1)
    {
      array[0].SimpleLimit(Perm);
    }
  else
    {

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_2 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == count_mu_1_OBJSET_cacheL1_2)
         {
           pos_mu_1_OBJSET_cacheL1_2[count_mu_1_OBJSET_cacheL1_2][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_2++;
      else break;
    }
  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_1 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == count_mu_1_OBJSET_cacheL1_1)
         {
           pos_mu_1_OBJSET_cacheL1_1[count_mu_1_OBJSET_cacheL1_1][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_1++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = (count_multisetindex < current_size);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2);
  while ( while_guard )
    {
      oldcount_multisetindex = count_multisetindex;
      oldcount_mu_1_OBJSET_cacheL1_2 = count_mu_1_OBJSET_cacheL1_2;
      oldcount_mu_1_OBJSET_cacheL1_1 = count_mu_1_OBJSET_cacheL1_1;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].mu_src.isundefined())
                && (*this)[k].mu_src>=159
                && (*this)[k].mu_src<=160)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].mu_src.isundefined()
                          && (*this)[k].mu_src>=159
                          && (*this)[k].mu_src<=160
                          && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k].mu_src-159])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[(*this)[k].mu_src-159] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[j+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                      }
                  }
            }
        }

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].mu_src.isundefined())
                && (*this)[k].mu_src>=156
                && (*this)[k].mu_src<=157)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].mu_src.isundefined()
                          && (*this)[k].mu_src>=156
                          && (*this)[k].mu_src<=157
                          && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k].mu_src-156])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[(*this)[k].mu_src-156] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[j+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                      }
                  }
            }
        }

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].mu_dst.isundefined())
                && (*this)[k].mu_dst>=159
                && (*this)[k].mu_dst<=160)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].mu_dst.isundefined()
                          && (*this)[k].mu_dst>=159
                          && (*this)[k].mu_dst<=160
                          && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k].mu_dst-159])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[(*this)[k].mu_dst-159] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[j+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                      }
                  }
            }
        }

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].mu_dst.isundefined())
                && (*this)[k].mu_dst>=156
                && (*this)[k].mu_dst<=157)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].mu_dst.isundefined()
                          && (*this)[k].mu_dst>=156
                          && (*this)[k].mu_dst<=157
                          && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k].mu_dst-156])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[(*this)[k].mu_dst-156] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[j+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                      }
                  }
            }
        }
      while_guard = oldcount_multisetindex!=count_multisetindex;
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_2!=count_mu_1_OBJSET_cacheL1_2);
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_1!=count_mu_1_OBJSET_cacheL1_1);
      while_guard_temp = while_guard;
      while_guard = (count_multisetindex < current_size);
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_2<2;
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_1<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_2[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_2[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_2=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_2[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_2)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_2=Perm.class_mu_1_OBJSET_cacheL1_2[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_1[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_1[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_1=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_1[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_1)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_1=Perm.class_mu_1_OBJSET_cacheL1_1[j];
    }
  }
}
void mu_1_NET_Unordered::Permute(PermSet& Perm, int i)
{
  static mu_1_NET_Unordered temp("Permute_mu_1_NET_Unordered",-1);
  int j;
  for (j=0; j<7; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=159; j<=160; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_OBJSET_cacheL1_1[Perm.in_mu_1_OBJSET_cacheL1_1[i]][j-159]];
  temp = *this;
  for (j=156; j<=157; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_OBJSET_cacheL1_2[Perm.in_mu_1_OBJSET_cacheL1_2[i]][j-156]];
};
void mu_1_NET_Unordered::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_NET_Unordered::Canonicalize(PermSet& Perm){};
void mu_1_NET_Unordered::SimpleLimit(PermSet& Perm){}
void mu_1_NET_Unordered::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_1__type_6 value[7];
  // limit
  bool exists;
  bool split;
  int count_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int count_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  // sorting mu_1_OBJSET_cacheL1_1
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_1 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+159]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_1[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_1; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_1[k][z] = pos_mu_1_OBJSET_cacheL1_1[k-1][z];
                    }
                  value[j] = (*this)[i+159];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_1++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_1)
            {
              value[j] = (*this)[i+159];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_1++;
            }
        }
    }
  // sorting mu_1_OBJSET_cacheL1_2
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_2 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+156]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_2[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_2; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_2[k][z] = pos_mu_1_OBJSET_cacheL1_2[k-1][z];
                    }
                  value[j] = (*this)[i+156];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_2++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_2)
            {
              value[j] = (*this)[i+156];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_2++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && Perm.class_mu_1_OBJSET_cacheL1_1[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_1[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_1[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
                    }
                }
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && Perm.class_mu_1_OBJSET_cacheL1_2[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_2[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_2[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
                    }
                }
            }
        }
    }
}
void mu_1_NET_Unordered::Limit(PermSet& Perm){}
void mu_1_NET_Unordered::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_v_sharersL2::Permute(PermSet& Perm, int i)
{
  static mu_1_v_sharersL2 temp("Permute_mu_1_v_sharersL2",-1);
  int j;
  for (j=0; j<4; j++)
    array[j].Permute(Perm, i);
};
void mu_1_v_sharersL2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1_v_sharersL2::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL2::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL2::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL2::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL2::MultisetLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_Machines value[4];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_OBJSET_cacheL1_2, oldcount_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  int count_mu_1_OBJSET_cacheL1_1, oldcount_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int count_multisetindex, oldcount_multisetindex;
  bool pos_multisetindex[4][4];
  bool goodset_multisetindex[4];
  mu_1_Machines temp;

  // compact
  for (i = 0, j = 0; i < 4; i++)
    if (valid[i].value())
      {
        if (j!=i)
          array[j++] = array[i];
        else
          j++;
      }
  if (j != current_size) current_size = j;
  for (i = j; i < 4; i++)
    array[i].undefine();
  for (i = 0; i < j; i++)
    valid[i].value(TRUE);
  for (i = j; i < 4; i++)
    valid[i].value(FALSE);

  // bubble sort
  for (i = 0; i < current_size; i++)
    for (j = i+1; j < current_size; j++)
      if (CompareWeight(array[i],array[j])>0)
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
  // initializing pos array
    for (i=0; i<current_size; i++)
      for (j=0; j<current_size; j++)
        pos_multisetindex[i][j]=FALSE;
    count_multisetindex = 1;
    pos_multisetindex[0][0] = TRUE;
    for (i = 1, j = 0 ; i < current_size; i++)
      if (CompareWeight(array[i-1],array[i])==0)
        pos_multisetindex[j][i] = TRUE;
      else
        { count_multisetindex++; pos_multisetindex[++j][i] = TRUE; }
  if (current_size == 1)
    {
      array[0].SimpleLimit(Perm);
    }
  else
    {

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_2 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == count_mu_1_OBJSET_cacheL1_2)
         {
           pos_mu_1_OBJSET_cacheL1_2[count_mu_1_OBJSET_cacheL1_2][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_2++;
      else break;
    }
  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_1 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == count_mu_1_OBJSET_cacheL1_1)
         {
           pos_mu_1_OBJSET_cacheL1_1[count_mu_1_OBJSET_cacheL1_1][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_1++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = (count_multisetindex < current_size);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2);
  while ( while_guard )
    {
      oldcount_multisetindex = count_multisetindex;
      oldcount_mu_1_OBJSET_cacheL1_2 = count_mu_1_OBJSET_cacheL1_2;
      oldcount_mu_1_OBJSET_cacheL1_1 = count_mu_1_OBJSET_cacheL1_1;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].isundefined())
                && (*this)[k]>=159
                && (*this)[k]<=160)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].isundefined()
                          && (*this)[k]>=159
                          && (*this)[k]<=160
                          && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k]-159])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[(*this)[k]-159] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[j+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                      }
                  }
            }
        }

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].isundefined())
                && (*this)[k]>=156
                && (*this)[k]<=157)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].isundefined()
                          && (*this)[k]>=156
                          && (*this)[k]<=157
                          && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k]-156])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[(*this)[k]-156] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[j+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                      }
                  }
            }
        }
      while_guard = oldcount_multisetindex!=count_multisetindex;
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_2!=count_mu_1_OBJSET_cacheL1_2);
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_1!=count_mu_1_OBJSET_cacheL1_1);
      while_guard_temp = while_guard;
      while_guard = (count_multisetindex < current_size);
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_2<2;
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_1<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_2[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_2[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_2=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_2[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_2)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_2=Perm.class_mu_1_OBJSET_cacheL1_2[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_1[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_1[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_1=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_1[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_1)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_1=Perm.class_mu_1_OBJSET_cacheL1_1[j];
    }
  }
}
void mu_1_cnt_v_sharersL2::Permute(PermSet& Perm, int i) {};
void mu_1_cnt_v_sharersL2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_cnt_v_sharersL2::Canonicalize(PermSet& Perm) {};
void mu_1_cnt_v_sharersL2::SimpleLimit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL2::ArrayLimit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL2::Limit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_ENTRY_directoryL2::Permute(PermSet& Perm, int i)
{
  mu_sharersL2.Permute(Perm,i);
  mu_ownerL2.Permute(Perm,i);
};
void mu_1_ENTRY_directoryL2::SimpleCanonicalize(PermSet& Perm)
{
  mu_ownerL2.SimpleCanonicalize(Perm);
};
void mu_1_ENTRY_directoryL2::Canonicalize(PermSet& Perm)
{
};
void mu_1_ENTRY_directoryL2::SimpleLimit(PermSet& Perm)
{
  mu_ownerL2.SimpleLimit(Perm);
};
void mu_1_ENTRY_directoryL2::ArrayLimit(PermSet& Perm){}
void mu_1_ENTRY_directoryL2::Limit(PermSet& Perm)
{
  mu_sharersL2.Limit(Perm);
};
void mu_1_ENTRY_directoryL2::MultisetLimit(PermSet& Perm)
{
  mu_sharersL2.MultisetLimit(Perm);
};
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].MultisetLimit(Perm);
  }
}
void mu_1_MACH_directoryL2::Permute(PermSet& Perm, int i)
{
  mu_cb.Permute(Perm,i);
};
void mu_1_MACH_directoryL2::SimpleCanonicalize(PermSet& Perm)
{
  mu_cb.SimpleCanonicalize(Perm);
};
void mu_1_MACH_directoryL2::Canonicalize(PermSet& Perm)
{
};
void mu_1_MACH_directoryL2::SimpleLimit(PermSet& Perm)
{
  mu_cb.SimpleLimit(Perm);
};
void mu_1_MACH_directoryL2::ArrayLimit(PermSet& Perm){}
void mu_1_MACH_directoryL2::Limit(PermSet& Perm)
{
  mu_cb.Limit(Perm);
};
void mu_1_MACH_directoryL2::MultisetLimit(PermSet& Perm)
{
  mu_cb.MultisetLimit(Perm);
};
void mu_1_OBJ_directoryL2::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_directoryL2 temp("Permute_mu_1_OBJ_directoryL2",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_directoryL2::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1_OBJ_directoryL2::Canonicalize(PermSet& Perm){};
void mu_1_OBJ_directoryL2::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1_OBJ_directoryL2::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_directoryL2::Limit(PermSet& Perm){}
void mu_1_OBJ_directoryL2::MultisetLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].MultisetLimit(Perm);
  }
}
void mu_1_v_sharersL1_1::Permute(PermSet& Perm, int i)
{
  static mu_1_v_sharersL1_1 temp("Permute_mu_1_v_sharersL1_1",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1_v_sharersL1_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1_v_sharersL1_1::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL1_1::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL1_1::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL1_1::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL1_1::MultisetLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_Machines value[3];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_OBJSET_cacheL1_2, oldcount_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  int count_mu_1_OBJSET_cacheL1_1, oldcount_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int count_multisetindex, oldcount_multisetindex;
  bool pos_multisetindex[3][3];
  bool goodset_multisetindex[3];
  mu_1_Machines temp;

  // compact
  for (i = 0, j = 0; i < 3; i++)
    if (valid[i].value())
      {
        if (j!=i)
          array[j++] = array[i];
        else
          j++;
      }
  if (j != current_size) current_size = j;
  for (i = j; i < 3; i++)
    array[i].undefine();
  for (i = 0; i < j; i++)
    valid[i].value(TRUE);
  for (i = j; i < 3; i++)
    valid[i].value(FALSE);

  // bubble sort
  for (i = 0; i < current_size; i++)
    for (j = i+1; j < current_size; j++)
      if (CompareWeight(array[i],array[j])>0)
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
  // initializing pos array
    for (i=0; i<current_size; i++)
      for (j=0; j<current_size; j++)
        pos_multisetindex[i][j]=FALSE;
    count_multisetindex = 1;
    pos_multisetindex[0][0] = TRUE;
    for (i = 1, j = 0 ; i < current_size; i++)
      if (CompareWeight(array[i-1],array[i])==0)
        pos_multisetindex[j][i] = TRUE;
      else
        { count_multisetindex++; pos_multisetindex[++j][i] = TRUE; }
  if (current_size == 1)
    {
      array[0].SimpleLimit(Perm);
    }
  else
    {

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_2 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == count_mu_1_OBJSET_cacheL1_2)
         {
           pos_mu_1_OBJSET_cacheL1_2[count_mu_1_OBJSET_cacheL1_2][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_2++;
      else break;
    }
  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_1 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == count_mu_1_OBJSET_cacheL1_1)
         {
           pos_mu_1_OBJSET_cacheL1_1[count_mu_1_OBJSET_cacheL1_1][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_1++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = (count_multisetindex < current_size);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2);
  while ( while_guard )
    {
      oldcount_multisetindex = count_multisetindex;
      oldcount_mu_1_OBJSET_cacheL1_2 = count_mu_1_OBJSET_cacheL1_2;
      oldcount_mu_1_OBJSET_cacheL1_1 = count_mu_1_OBJSET_cacheL1_1;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].isundefined())
                && (*this)[k]>=159
                && (*this)[k]<=160)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].isundefined()
                          && (*this)[k]>=159
                          && (*this)[k]<=160
                          && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k]-159])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[(*this)[k]-159] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[j+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                      }
                  }
            }
        }

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].isundefined())
                && (*this)[k]>=156
                && (*this)[k]<=157)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].isundefined()
                          && (*this)[k]>=156
                          && (*this)[k]<=157
                          && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k]-156])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[(*this)[k]-156] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[j+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                      }
                  }
            }
        }
      while_guard = oldcount_multisetindex!=count_multisetindex;
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_2!=count_mu_1_OBJSET_cacheL1_2);
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_1!=count_mu_1_OBJSET_cacheL1_1);
      while_guard_temp = while_guard;
      while_guard = (count_multisetindex < current_size);
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_2<2;
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_1<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_2[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_2[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_2=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_2[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_2)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_2=Perm.class_mu_1_OBJSET_cacheL1_2[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_1[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_1[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_1=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_1[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_1)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_1=Perm.class_mu_1_OBJSET_cacheL1_1[j];
    }
  }
}
void mu_1_cnt_v_sharersL1_1::Permute(PermSet& Perm, int i) {};
void mu_1_cnt_v_sharersL1_1::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_1::Canonicalize(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_1::SimpleLimit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_1::ArrayLimit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_1::Limit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i) {};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_8::Canonicalize(PermSet& Perm) {};
void mu_1__type_8::SimpleLimit(PermSet& Perm) {};
void mu_1__type_8::ArrayLimit(PermSet& Perm) {};
void mu_1__type_8::Limit(PermSet& Perm) {};
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i) {};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_9::Canonicalize(PermSet& Perm) {};
void mu_1__type_9::SimpleLimit(PermSet& Perm) {};
void mu_1__type_9::ArrayLimit(PermSet& Perm) {};
void mu_1__type_9::Limit(PermSet& Perm) {};
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i) {};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_10::Canonicalize(PermSet& Perm) {};
void mu_1__type_10::SimpleLimit(PermSet& Perm) {};
void mu_1__type_10::ArrayLimit(PermSet& Perm) {};
void mu_1__type_10::Limit(PermSet& Perm) {};
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_11::Permute(PermSet& Perm, int i) {};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_11::Canonicalize(PermSet& Perm) {};
void mu_1__type_11::SimpleLimit(PermSet& Perm) {};
void mu_1__type_11::ArrayLimit(PermSet& Perm) {};
void mu_1__type_11::Limit(PermSet& Perm) {};
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_ENTRY_directoryL1_1::Permute(PermSet& Perm, int i)
{
  mu_sharersL1_1.Permute(Perm,i);
  mu_ownerL1_1.Permute(Perm,i);
  mu_invalidation_msg.Permute(Perm,i);
  mu_cluster_req_msg.Permute(Perm,i);
};
void mu_1_ENTRY_directoryL1_1::SimpleCanonicalize(PermSet& Perm)
{
  mu_ownerL1_1.SimpleCanonicalize(Perm);
  mu_invalidation_msg.SimpleCanonicalize(Perm);
  mu_cluster_req_msg.SimpleCanonicalize(Perm);
};
void mu_1_ENTRY_directoryL1_1::Canonicalize(PermSet& Perm)
{
};
void mu_1_ENTRY_directoryL1_1::SimpleLimit(PermSet& Perm)
{
  mu_ownerL1_1.SimpleLimit(Perm);
  mu_invalidation_msg.SimpleLimit(Perm);
  mu_cluster_req_msg.SimpleLimit(Perm);
};
void mu_1_ENTRY_directoryL1_1::ArrayLimit(PermSet& Perm){}
void mu_1_ENTRY_directoryL1_1::Limit(PermSet& Perm)
{
  mu_sharersL1_1.Limit(Perm);
};
void mu_1_ENTRY_directoryL1_1::MultisetLimit(PermSet& Perm)
{
  mu_sharersL1_1.MultisetLimit(Perm);
};
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_12::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_12::Canonicalize(PermSet& Perm){};
void mu_1__type_12::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_12::ArrayLimit(PermSet& Perm) {}
void mu_1__type_12::Limit(PermSet& Perm){}
void mu_1__type_12::MultisetLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].MultisetLimit(Perm);
  }
}
void mu_1_MACH_directoryL1_1::Permute(PermSet& Perm, int i)
{
  mu_cb.Permute(Perm,i);
};
void mu_1_MACH_directoryL1_1::SimpleCanonicalize(PermSet& Perm)
{
  mu_cb.SimpleCanonicalize(Perm);
};
void mu_1_MACH_directoryL1_1::Canonicalize(PermSet& Perm)
{
};
void mu_1_MACH_directoryL1_1::SimpleLimit(PermSet& Perm)
{
  mu_cb.SimpleLimit(Perm);
};
void mu_1_MACH_directoryL1_1::ArrayLimit(PermSet& Perm){}
void mu_1_MACH_directoryL1_1::Limit(PermSet& Perm)
{
  mu_cb.Limit(Perm);
};
void mu_1_MACH_directoryL1_1::MultisetLimit(PermSet& Perm)
{
  mu_cb.MultisetLimit(Perm);
};
void mu_1_OBJ_directoryL1_1::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_directoryL1_1 temp("Permute_mu_1_OBJ_directoryL1_1",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_directoryL1_1::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1_OBJ_directoryL1_1::Canonicalize(PermSet& Perm){};
void mu_1_OBJ_directoryL1_1::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1_OBJ_directoryL1_1::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_directoryL1_1::Limit(PermSet& Perm){}
void mu_1_OBJ_directoryL1_1::MultisetLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].MultisetLimit(Perm);
  }
}
void mu_1__type_13::Permute(PermSet& Perm, int i) {};
void mu_1__type_13::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_13::Canonicalize(PermSet& Perm) {};
void mu_1__type_13::SimpleLimit(PermSet& Perm) {};
void mu_1__type_13::ArrayLimit(PermSet& Perm) {};
void mu_1__type_13::Limit(PermSet& Perm) {};
void mu_1__type_13::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_14::Permute(PermSet& Perm, int i) {};
void mu_1__type_14::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_14::Canonicalize(PermSet& Perm) {};
void mu_1__type_14::SimpleLimit(PermSet& Perm) {};
void mu_1__type_14::ArrayLimit(PermSet& Perm) {};
void mu_1__type_14::Limit(PermSet& Perm) {};
void mu_1__type_14::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_ENTRY_cacheL1_2::Permute(PermSet& Perm, int i)
{
};
void mu_1_ENTRY_cacheL1_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_ENTRY_cacheL1_2::Canonicalize(PermSet& Perm)
{
};
void mu_1_ENTRY_cacheL1_2::SimpleLimit(PermSet& Perm){}
void mu_1_ENTRY_cacheL1_2::ArrayLimit(PermSet& Perm){}
void mu_1_ENTRY_cacheL1_2::Limit(PermSet& Perm)
{
};
void mu_1_ENTRY_cacheL1_2::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_15::Permute(PermSet& Perm, int i)
{
  static mu_1__type_15 temp("Permute_mu_1__type_15",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_15::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_15::Canonicalize(PermSet& Perm){};
void mu_1__type_15::SimpleLimit(PermSet& Perm){}
void mu_1__type_15::ArrayLimit(PermSet& Perm) {}
void mu_1__type_15::Limit(PermSet& Perm){}
void mu_1__type_15::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_MACH_cacheL1_2::Permute(PermSet& Perm, int i)
{
};
void mu_1_MACH_cacheL1_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_MACH_cacheL1_2::Canonicalize(PermSet& Perm)
{
};
void mu_1_MACH_cacheL1_2::SimpleLimit(PermSet& Perm){}
void mu_1_MACH_cacheL1_2::ArrayLimit(PermSet& Perm){}
void mu_1_MACH_cacheL1_2::Limit(PermSet& Perm)
{
};
void mu_1_MACH_cacheL1_2::MultisetLimit(PermSet& Perm)
{
};
void mu_1_OBJ_cacheL1_2::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_cacheL1_2 temp("Permute_mu_1_OBJ_cacheL1_2",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=156; j<=157; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_OBJSET_cacheL1_2[Perm.in_mu_1_OBJSET_cacheL1_2[i]][j-156]];};
void mu_1_OBJ_cacheL1_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_cacheL1_2::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_OBJSET_cacheL1_2;
  int compare;
  static mu_1_MACH_cacheL1_2 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_OBJSET_cacheL1_2[2];
  int start_mu_1_OBJSET_cacheL1_2[2];
  // canonicalization
  static mu_1_OBJ_cacheL1_2 temp;
  // sorting mu_1_OBJSET_cacheL1_2
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_2 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+156]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_2[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_2; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_2[k][z] = pos_mu_1_OBJSET_cacheL1_2[k-1][z];
                    }
                  value[j] = (*this)[i+156];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_2++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_2)
            {
              value[j] = (*this)[i+156];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_2++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && Perm.class_mu_1_OBJSET_cacheL1_2[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_2[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_2[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_OBJSET_cacheL1_2; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_OBJSET_cacheL1_2[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_OBJSET_cacheL1_2[k]==j)
              {
                size_mu_1_OBJSET_cacheL1_2[k] = class_size;
                start_mu_1_OBJSET_cacheL1_2[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_OBJSET_cacheL1_2[j] 
             && i < start_mu_1_OBJSET_cacheL1_2[j] + size_mu_1_OBJSET_cacheL1_2[j])
           {
             array[i+0] = temp[j+156];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_OBJSET_cacheL1_2[j]+0] = temp[j+156];
    }
}
void mu_1_OBJ_cacheL1_2::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_cacheL1_2::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_OBJSET_cacheL1_2;
  int compare;
  static mu_1_MACH_cacheL1_2 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  // sorting mu_1_OBJSET_cacheL1_2
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_2 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+156]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_2[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_2; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_2[k][z] = pos_mu_1_OBJSET_cacheL1_2[k-1][z];
                    }
                  value[j] = (*this)[i+156];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_2++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_2)
            {
              value[j] = (*this)[i+156];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_2[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_2[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_2++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_2; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_2[i][k] && Perm.class_mu_1_OBJSET_cacheL1_2[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_2[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_2[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_2[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_2[k] == j && !goodset_mu_1_OBJSET_cacheL1_2[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_2[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_2++;
                    }
                }
            }
        }
    }
}
void mu_1_OBJ_cacheL1_2::Limit(PermSet& Perm){}
void mu_1_OBJ_cacheL1_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_v_sharersL1_2::Permute(PermSet& Perm, int i)
{
  static mu_1_v_sharersL1_2 temp("Permute_mu_1_v_sharersL1_2",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1_v_sharersL1_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1_v_sharersL1_2::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL1_2::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL1_2::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL1_2::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_sharersL1_2::MultisetLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_Machines value[3];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_OBJSET_cacheL1_2, oldcount_mu_1_OBJSET_cacheL1_2;
  bool pos_mu_1_OBJSET_cacheL1_2[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_2[2];
  int count_mu_1_OBJSET_cacheL1_1, oldcount_mu_1_OBJSET_cacheL1_1;
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  int count_multisetindex, oldcount_multisetindex;
  bool pos_multisetindex[3][3];
  bool goodset_multisetindex[3];
  mu_1_Machines temp;

  // compact
  for (i = 0, j = 0; i < 3; i++)
    if (valid[i].value())
      {
        if (j!=i)
          array[j++] = array[i];
        else
          j++;
      }
  if (j != current_size) current_size = j;
  for (i = j; i < 3; i++)
    array[i].undefine();
  for (i = 0; i < j; i++)
    valid[i].value(TRUE);
  for (i = j; i < 3; i++)
    valid[i].value(FALSE);

  // bubble sort
  for (i = 0; i < current_size; i++)
    for (j = i+1; j < current_size; j++)
      if (CompareWeight(array[i],array[j])>0)
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
  // initializing pos array
    for (i=0; i<current_size; i++)
      for (j=0; j<current_size; j++)
        pos_multisetindex[i][j]=FALSE;
    count_multisetindex = 1;
    pos_multisetindex[0][0] = TRUE;
    for (i = 1, j = 0 ; i < current_size; i++)
      if (CompareWeight(array[i-1],array[i])==0)
        pos_multisetindex[j][i] = TRUE;
      else
        { count_multisetindex++; pos_multisetindex[++j][i] = TRUE; }
  if (current_size == 1)
    {
      array[0].SimpleLimit(Perm);
    }
  else
    {

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_2[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_2 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_2[i] == count_mu_1_OBJSET_cacheL1_2)
         {
           pos_mu_1_OBJSET_cacheL1_2[count_mu_1_OBJSET_cacheL1_2][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_2++;
      else break;
    }
  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
  count_mu_1_OBJSET_cacheL1_1 = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_OBJSET_cacheL1_1[i] == count_mu_1_OBJSET_cacheL1_1)
         {
           pos_mu_1_OBJSET_cacheL1_1[count_mu_1_OBJSET_cacheL1_1][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_OBJSET_cacheL1_1++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = (count_multisetindex < current_size);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2);
  while ( while_guard )
    {
      oldcount_multisetindex = count_multisetindex;
      oldcount_mu_1_OBJSET_cacheL1_2 = count_mu_1_OBJSET_cacheL1_2;
      oldcount_mu_1_OBJSET_cacheL1_1 = count_mu_1_OBJSET_cacheL1_1;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].isundefined())
                && (*this)[k]>=159
                && (*this)[k]<=160)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].isundefined()
                          && (*this)[k]>=159
                          && (*this)[k]<=160
                          && pos_mu_1_OBJSET_cacheL1_1[j][(*this)[k]-159])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_1[(*this)[k]-159] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_1; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_1[z][k] = pos_mu_1_OBJSET_cacheL1_1[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_1[j][k] && !goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_1[j+1][k] && goodset_mu_1_OBJSET_cacheL1_1[k])
                                  pos_mu_1_OBJSET_cacheL1_1[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_1++;
                          }
                      }
                  }
            }
        }

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (count_multisetindex<current_size)
           || ( Perm.MTO_class_mu_1_OBJSET_cacheL1_2() && count_mu_1_OBJSET_cacheL1_2<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<current_size; k++) // step through class
            if ((!(*this)[k].isundefined())
                && (*this)[k]>=156
                && (*this)[k]<=157)
              split = TRUE;
          if (split)
            {
              for (i=0; i<count_multisetindex; i++) // scan through array index priority
                for (j=0; j<count_mu_1_OBJSET_cacheL1_2; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<current_size; k++) // initialize goodset
                      goodset_multisetindex[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_OBJSET_cacheL1_2[k] = FALSE;
                    for (k=0; k<current_size; k++) // scan array index
                      // set goodsets
                      if (pos_multisetindex[i][k] 
                          && !(*this)[k].isundefined()
                          && (*this)[k]>=156
                          && (*this)[k]<=157
                          && pos_mu_1_OBJSET_cacheL1_2[j][(*this)[k]-156])
                        {
                          exists = TRUE;
                          goodset_multisetindex[k] = TRUE;
                          goodset_mu_1_OBJSET_cacheL1_2[(*this)[k]-156] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<current_size; k++)
                          if ( pos_multisetindex[i][k] && !goodset_multisetindex[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_multisetindex; z>i; z--)
                              for (k=0; k<current_size; k++)
                                pos_multisetindex[z][k] = pos_multisetindex[z-1][k];
                            // split pos
                            for (k=0; k<current_size; k++)
                              {
                                if (pos_multisetindex[i][k] && !goodset_multisetindex[k])
                                  pos_multisetindex[i][k] = FALSE;
                                if (pos_multisetindex[i+1][k] && goodset_multisetindex[k])
                                  pos_multisetindex[i+1][k] = FALSE;
                              }
                            count_multisetindex++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_OBJSET_cacheL1_2; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_OBJSET_cacheL1_2[z][k] = pos_mu_1_OBJSET_cacheL1_2[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_OBJSET_cacheL1_2[j][k] && !goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j][k] = FALSE;
                                if (pos_mu_1_OBJSET_cacheL1_2[j+1][k] && goodset_mu_1_OBJSET_cacheL1_2[k])
                                  pos_mu_1_OBJSET_cacheL1_2[j+1][k] = FALSE;
                              }
                            count_mu_1_OBJSET_cacheL1_2++;
                          }
                      }
                  }
            }
        }
      while_guard = oldcount_multisetindex!=count_multisetindex;
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_2!=count_mu_1_OBJSET_cacheL1_2);
      while_guard = while_guard || (oldcount_mu_1_OBJSET_cacheL1_1!=count_mu_1_OBJSET_cacheL1_1);
      while_guard_temp = while_guard;
      while_guard = (count_multisetindex < current_size);
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_2<2;
      while_guard = while_guard || count_mu_1_OBJSET_cacheL1_1<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_2())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_2[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_2[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_2=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_2[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_2)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_2=Perm.class_mu_1_OBJSET_cacheL1_2[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_OBJSET_cacheL1_1[i][j])
            Perm.class_mu_1_OBJSET_cacheL1_1[j] = i;
      Perm.undefined_class_mu_1_OBJSET_cacheL1_1=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_OBJSET_cacheL1_1[j]>Perm.undefined_class_mu_1_OBJSET_cacheL1_1)
          Perm.undefined_class_mu_1_OBJSET_cacheL1_1=Perm.class_mu_1_OBJSET_cacheL1_1[j];
    }
  }
}
void mu_1_cnt_v_sharersL1_2::Permute(PermSet& Perm, int i) {};
void mu_1_cnt_v_sharersL1_2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_2::Canonicalize(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_2::SimpleLimit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_2::ArrayLimit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_2::Limit(PermSet& Perm) {};
void mu_1_cnt_v_sharersL1_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_16::Permute(PermSet& Perm, int i) {};
void mu_1__type_16::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_16::Canonicalize(PermSet& Perm) {};
void mu_1__type_16::SimpleLimit(PermSet& Perm) {};
void mu_1__type_16::ArrayLimit(PermSet& Perm) {};
void mu_1__type_16::Limit(PermSet& Perm) {};
void mu_1__type_16::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_17::Permute(PermSet& Perm, int i) {};
void mu_1__type_17::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_17::Canonicalize(PermSet& Perm) {};
void mu_1__type_17::SimpleLimit(PermSet& Perm) {};
void mu_1__type_17::ArrayLimit(PermSet& Perm) {};
void mu_1__type_17::Limit(PermSet& Perm) {};
void mu_1__type_17::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_18::Permute(PermSet& Perm, int i) {};
void mu_1__type_18::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_18::Canonicalize(PermSet& Perm) {};
void mu_1__type_18::SimpleLimit(PermSet& Perm) {};
void mu_1__type_18::ArrayLimit(PermSet& Perm) {};
void mu_1__type_18::Limit(PermSet& Perm) {};
void mu_1__type_18::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_19::Permute(PermSet& Perm, int i) {};
void mu_1__type_19::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_19::Canonicalize(PermSet& Perm) {};
void mu_1__type_19::SimpleLimit(PermSet& Perm) {};
void mu_1__type_19::ArrayLimit(PermSet& Perm) {};
void mu_1__type_19::Limit(PermSet& Perm) {};
void mu_1__type_19::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_ENTRY_directoryL1_2::Permute(PermSet& Perm, int i)
{
  mu_sharersL1_2.Permute(Perm,i);
  mu_ownerL1_2.Permute(Perm,i);
  mu_invalidation_msg.Permute(Perm,i);
  mu_cluster_req_msg.Permute(Perm,i);
};
void mu_1_ENTRY_directoryL1_2::SimpleCanonicalize(PermSet& Perm)
{
  mu_ownerL1_2.SimpleCanonicalize(Perm);
  mu_invalidation_msg.SimpleCanonicalize(Perm);
  mu_cluster_req_msg.SimpleCanonicalize(Perm);
};
void mu_1_ENTRY_directoryL1_2::Canonicalize(PermSet& Perm)
{
};
void mu_1_ENTRY_directoryL1_2::SimpleLimit(PermSet& Perm)
{
  mu_ownerL1_2.SimpleLimit(Perm);
  mu_invalidation_msg.SimpleLimit(Perm);
  mu_cluster_req_msg.SimpleLimit(Perm);
};
void mu_1_ENTRY_directoryL1_2::ArrayLimit(PermSet& Perm){}
void mu_1_ENTRY_directoryL1_2::Limit(PermSet& Perm)
{
  mu_sharersL1_2.Limit(Perm);
};
void mu_1_ENTRY_directoryL1_2::MultisetLimit(PermSet& Perm)
{
  mu_sharersL1_2.MultisetLimit(Perm);
};
void mu_1__type_20::Permute(PermSet& Perm, int i)
{
  static mu_1__type_20 temp("Permute_mu_1__type_20",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_20::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_20::Canonicalize(PermSet& Perm){};
void mu_1__type_20::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_20::ArrayLimit(PermSet& Perm) {}
void mu_1__type_20::Limit(PermSet& Perm){}
void mu_1__type_20::MultisetLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].MultisetLimit(Perm);
  }
}
void mu_1_MACH_directoryL1_2::Permute(PermSet& Perm, int i)
{
  mu_cb.Permute(Perm,i);
};
void mu_1_MACH_directoryL1_2::SimpleCanonicalize(PermSet& Perm)
{
  mu_cb.SimpleCanonicalize(Perm);
};
void mu_1_MACH_directoryL1_2::Canonicalize(PermSet& Perm)
{
};
void mu_1_MACH_directoryL1_2::SimpleLimit(PermSet& Perm)
{
  mu_cb.SimpleLimit(Perm);
};
void mu_1_MACH_directoryL1_2::ArrayLimit(PermSet& Perm){}
void mu_1_MACH_directoryL1_2::Limit(PermSet& Perm)
{
  mu_cb.Limit(Perm);
};
void mu_1_MACH_directoryL1_2::MultisetLimit(PermSet& Perm)
{
  mu_cb.MultisetLimit(Perm);
};
void mu_1_OBJ_directoryL1_2::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_directoryL1_2 temp("Permute_mu_1_OBJ_directoryL1_2",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_directoryL1_2::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1_OBJ_directoryL1_2::Canonicalize(PermSet& Perm){};
void mu_1_OBJ_directoryL1_2::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1_OBJ_directoryL1_2::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_directoryL1_2::Limit(PermSet& Perm){}
void mu_1_OBJ_directoryL1_2::MultisetLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].MultisetLimit(Perm);
  }
}
void mu_1__type_21::Permute(PermSet& Perm, int i) {};
void mu_1__type_21::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_21::Canonicalize(PermSet& Perm) {};
void mu_1__type_21::SimpleLimit(PermSet& Perm) {};
void mu_1__type_21::ArrayLimit(PermSet& Perm) {};
void mu_1__type_21::Limit(PermSet& Perm) {};
void mu_1__type_21::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_22::Permute(PermSet& Perm, int i) {};
void mu_1__type_22::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_22::Canonicalize(PermSet& Perm) {};
void mu_1__type_22::SimpleLimit(PermSet& Perm) {};
void mu_1__type_22::ArrayLimit(PermSet& Perm) {};
void mu_1__type_22::Limit(PermSet& Perm) {};
void mu_1__type_22::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_ENTRY_cacheL1_1::Permute(PermSet& Perm, int i)
{
};
void mu_1_ENTRY_cacheL1_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_ENTRY_cacheL1_1::Canonicalize(PermSet& Perm)
{
};
void mu_1_ENTRY_cacheL1_1::SimpleLimit(PermSet& Perm){}
void mu_1_ENTRY_cacheL1_1::ArrayLimit(PermSet& Perm){}
void mu_1_ENTRY_cacheL1_1::Limit(PermSet& Perm)
{
};
void mu_1_ENTRY_cacheL1_1::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_23::Permute(PermSet& Perm, int i)
{
  static mu_1__type_23 temp("Permute_mu_1__type_23",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_23::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_23::Canonicalize(PermSet& Perm){};
void mu_1__type_23::SimpleLimit(PermSet& Perm){}
void mu_1__type_23::ArrayLimit(PermSet& Perm) {}
void mu_1__type_23::Limit(PermSet& Perm){}
void mu_1__type_23::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_MACH_cacheL1_1::Permute(PermSet& Perm, int i)
{
};
void mu_1_MACH_cacheL1_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_MACH_cacheL1_1::Canonicalize(PermSet& Perm)
{
};
void mu_1_MACH_cacheL1_1::SimpleLimit(PermSet& Perm){}
void mu_1_MACH_cacheL1_1::ArrayLimit(PermSet& Perm){}
void mu_1_MACH_cacheL1_1::Limit(PermSet& Perm)
{
};
void mu_1_MACH_cacheL1_1::MultisetLimit(PermSet& Perm)
{
};
void mu_1_OBJ_cacheL1_1::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_cacheL1_1 temp("Permute_mu_1_OBJ_cacheL1_1",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=159; j<=160; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_OBJSET_cacheL1_1[Perm.in_mu_1_OBJSET_cacheL1_1[i]][j-159]];};
void mu_1_OBJ_cacheL1_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_cacheL1_1::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_OBJSET_cacheL1_1;
  int compare;
  static mu_1_MACH_cacheL1_1 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_OBJSET_cacheL1_1[2];
  int start_mu_1_OBJSET_cacheL1_1[2];
  // canonicalization
  static mu_1_OBJ_cacheL1_1 temp;
  // sorting mu_1_OBJSET_cacheL1_1
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_1 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+159]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_1[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_1; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_1[k][z] = pos_mu_1_OBJSET_cacheL1_1[k-1][z];
                    }
                  value[j] = (*this)[i+159];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_1++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_1)
            {
              value[j] = (*this)[i+159];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_1++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && Perm.class_mu_1_OBJSET_cacheL1_1[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_1[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_1[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_OBJSET_cacheL1_1; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_OBJSET_cacheL1_1[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_OBJSET_cacheL1_1[k]==j)
              {
                size_mu_1_OBJSET_cacheL1_1[k] = class_size;
                start_mu_1_OBJSET_cacheL1_1[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_OBJSET_cacheL1_1[j] 
             && i < start_mu_1_OBJSET_cacheL1_1[j] + size_mu_1_OBJSET_cacheL1_1[j])
           {
             array[i+0] = temp[j+159];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_OBJSET_cacheL1_1[j]+0] = temp[j+159];
    }
}
void mu_1_OBJ_cacheL1_1::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_cacheL1_1::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_OBJSET_cacheL1_1;
  int compare;
  static mu_1_MACH_cacheL1_1 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_OBJSET_cacheL1_1[2];
  bool pos_mu_1_OBJSET_cacheL1_1[2][2];
  // sorting mu_1_OBJSET_cacheL1_1
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_OBJSET_cacheL1_1[i][j]=FALSE;
      count_mu_1_OBJSET_cacheL1_1 = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_OBJSET_cacheL1_1; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+159]);
              if (compare==0)
                {
                  pos_mu_1_OBJSET_cacheL1_1[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_OBJSET_cacheL1_1; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_OBJSET_cacheL1_1[k][z] = pos_mu_1_OBJSET_cacheL1_1[k-1][z];
                    }
                  value[j] = (*this)[i+159];
                  for (z=0; z<2; z++)
                    pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
                  pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
                  count_mu_1_OBJSET_cacheL1_1++;
                  break;
                }
            }
          if (j==count_mu_1_OBJSET_cacheL1_1)
            {
              value[j] = (*this)[i+159];
              for (z=0; z<2; z++)
                pos_mu_1_OBJSET_cacheL1_1[j][z] = FALSE;
              pos_mu_1_OBJSET_cacheL1_1[j][i] = TRUE;
              count_mu_1_OBJSET_cacheL1_1++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_OBJSET_cacheL1_1() && count_mu_1_OBJSET_cacheL1_1>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_OBJSET_cacheL1_1; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_OBJSET_cacheL1_1[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_OBJSET_cacheL1_1[i][k] && Perm.class_mu_1_OBJSET_cacheL1_1[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_OBJSET_cacheL1_1[k] = TRUE;
                    pos_mu_1_OBJSET_cacheL1_1[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_OBJSET_cacheL1_1[k]>j
                            || ( Perm.class_mu_1_OBJSET_cacheL1_1[k] == j && !goodset_mu_1_OBJSET_cacheL1_1[k] ) )
                          Perm.class_mu_1_OBJSET_cacheL1_1[k]++;
                      Perm.undefined_class_mu_1_OBJSET_cacheL1_1++;
                    }
                }
            }
        }
    }
}
void mu_1_OBJ_cacheL1_1::Limit(PermSet& Perm){}
void mu_1_OBJ_cacheL1_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_24::Permute(PermSet& Perm, int i) {};
void mu_1__type_24::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_24::Canonicalize(PermSet& Perm) {};
void mu_1__type_24::SimpleLimit(PermSet& Perm) {};
void mu_1__type_24::ArrayLimit(PermSet& Perm) {};
void mu_1__type_24::Limit(PermSet& Perm) {};
void mu_1__type_24::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_25::Permute(PermSet& Perm, int i) {};
void mu_1__type_25::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_25::Canonicalize(PermSet& Perm) {};
void mu_1__type_25::SimpleLimit(PermSet& Perm) {};
void mu_1__type_25::ArrayLimit(PermSet& Perm) {};
void mu_1__type_25::Limit(PermSet& Perm) {};
void mu_1__type_25::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_26::Permute(PermSet& Perm, int i) {};
void mu_1__type_26::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_26::Canonicalize(PermSet& Perm) {};
void mu_1__type_26::SimpleLimit(PermSet& Perm) {};
void mu_1__type_26::ArrayLimit(PermSet& Perm) {};
void mu_1__type_26::Limit(PermSet& Perm) {};
void mu_1__type_26::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_27::Permute(PermSet& Perm, int i) {};
void mu_1__type_27::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_27::Canonicalize(PermSet& Perm) {};
void mu_1__type_27::SimpleLimit(PermSet& Perm) {};
void mu_1__type_27::ArrayLimit(PermSet& Perm) {};
void mu_1__type_27::Limit(PermSet& Perm) {};
void mu_1__type_27::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize
         || args->sym_alg.mode == argsym_alg::Heuristic_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_cnt_fwd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_cnt_fwd.MultisetSort();
              mu_cnt_resp.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_cnt_resp.MultisetSort();
              mu_cnt_req.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_cnt_req.MultisetSort();
              mu_i_cacheL1_2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_i_cacheL1_2.MultisetSort();
              mu_i_cacheL1_1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_i_cacheL1_1.MultisetSort();
              mu_req.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_req.MultisetSort();
              mu_resp.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_resp.MultisetSort();
              mu_fwd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_fwd.MultisetSort();
              mu_i_directoryL1_2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_i_directoryL1_2.MultisetSort();
              mu_i_directoryL1_1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_i_directoryL1_1.MultisetSort();
              mu_g_perm.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_g_perm.MultisetSort();
              mu_i_directoryL2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_i_directoryL2.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_cnt_fwd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_cnt_fwd.MultisetSort();
          mu_cnt_resp.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_cnt_resp.MultisetSort();
          mu_cnt_req.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_cnt_req.MultisetSort();
          mu_i_cacheL1_2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_i_cacheL1_2.MultisetSort();
          mu_i_cacheL1_1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_i_cacheL1_1.MultisetSort();
          mu_req.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_req.MultisetSort();
          mu_resp.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_resp.MultisetSort();
          mu_fwd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_fwd.MultisetSort();
          mu_i_directoryL1_2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_i_directoryL1_2.MultisetSort();
          mu_i_directoryL1_1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_i_directoryL1_1.MultisetSort();
          mu_g_perm.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_g_perm.MultisetSort();
          mu_i_directoryL2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_i_directoryL2.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_cnt_fwd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_cnt_fwd.MultisetSort();
              mu_cnt_resp.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_cnt_resp.MultisetSort();
              mu_cnt_req.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_cnt_req.MultisetSort();
              mu_i_cacheL1_2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_i_cacheL1_2.MultisetSort();
              mu_i_cacheL1_1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_i_cacheL1_1.MultisetSort();
              mu_req.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_req.MultisetSort();
              mu_resp.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_resp.MultisetSort();
              mu_fwd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_fwd.MultisetSort();
              mu_i_directoryL1_2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_i_directoryL1_2.MultisetSort();
              mu_i_directoryL1_1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_i_directoryL1_1.MultisetSort();
              mu_g_perm.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_g_perm.MultisetSort();
              mu_i_directoryL2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_i_directoryL2.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_cnt_fwd.MultisetSort();
      mu_cnt_resp.MultisetSort();
      mu_cnt_req.MultisetSort();
      mu_i_cacheL1_2.MultisetSort();
      mu_i_cacheL1_1.MultisetSort();
      mu_req.MultisetSort();
      mu_resp.MultisetSort();
      mu_fwd.MultisetSort();
      mu_i_directoryL1_2.MultisetSort();
      mu_i_directoryL1_1.MultisetSort();
      mu_g_perm.MultisetSort();
      mu_i_directoryL2.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_cnt_fwd.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_cnt_fwd.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_cnt_resp.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_cnt_resp.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_cnt_req.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_cnt_req.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_cacheL1_2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_cacheL1_2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_cacheL1_1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_cacheL1_1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_req.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_req.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_resp.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_resp.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_fwd.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_fwd.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_directoryL1_2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_directoryL1_2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_directoryL1_1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_directoryL1_1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_g_perm.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_g_perm.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_directoryL2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_directoryL2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

  mu_cnt_fwd.Canonicalize(Perm);

  mu_cnt_resp.Canonicalize(Perm);

  mu_cnt_req.Canonicalize(Perm);

  mu_i_cacheL1_2.Canonicalize(Perm);

  mu_i_cacheL1_1.Canonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_2.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_1.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL2.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_req.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_resp.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_fwd.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_2.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_1.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL2.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_req.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_resp.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_fwd.Limit(Perm);
  }

  Perm.SimpleToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_req.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_req.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_resp.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_resp.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_fwd.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_fwd.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_directoryL1_2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_directoryL1_2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_directoryL1_1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_directoryL1_1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_g_perm.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_g_perm.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_directoryL2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_directoryL2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

  mu_cnt_fwd.Canonicalize(Perm);

  mu_cnt_resp.Canonicalize(Perm);

  mu_cnt_req.Canonicalize(Perm);

  mu_i_cacheL1_2.Canonicalize(Perm);

  mu_i_cacheL1_1.Canonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_2.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_1.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL2.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_req.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_resp.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_fwd.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_2.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_1.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL2.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_req.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_resp.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_fwd.Limit(Perm);
  }

  Perm.SimpleToOne();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  mu_req.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_req.MultisetSort();
  mu_resp.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_resp.MultisetSort();
  mu_fwd.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_fwd.MultisetSort();
  mu_i_directoryL1_2.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_i_directoryL1_2.MultisetSort();
  mu_i_directoryL1_1.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_i_directoryL1_1.MultisetSort();
  mu_g_perm.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_g_perm.MultisetSort();
  mu_i_directoryL2.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_i_directoryL2.MultisetSort();
  BestPermutedState = *workingstate;
  BestInitialized = TRUE;

  cycle=1;
  while (Perm.NextPermutation())
    {
      if (args->perm_limit.value != 0
          && cycle++ >= args->perm_limit.value) break;
      StateCopy(workingstate, &temp);
      mu_req.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_req.MultisetSort();
      mu_resp.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_resp.MultisetSort();
      mu_fwd.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_fwd.MultisetSort();
      mu_i_directoryL1_2.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_i_directoryL1_2.MultisetSort();
      mu_i_directoryL1_1.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_i_directoryL1_1.MultisetSort();
      mu_g_perm.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_g_perm.MultisetSort();
      mu_i_directoryL2.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_i_directoryL2.MultisetSort();
      switch (StateCmp(workingstate, &BestPermutedState)) {
      case -1:
        BestPermutedState = *workingstate;
        break;
      case 1:
        break;
      case 0:
        break;
      default:
        Error.Error("funny return value from StateCmp");
      }
    }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

  mu_cnt_fwd.Canonicalize(Perm);

  mu_cnt_resp.Canonicalize(Perm);

  mu_cnt_req.Canonicalize(Perm);

  mu_i_cacheL1_2.Canonicalize(Perm);

  mu_i_cacheL1_1.Canonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_2.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL1_1.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_i_directoryL2.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_req.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_resp.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_fwd.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_req.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_resp.Limit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_fwd.Limit(Perm);
  }

  Perm.SimpleToOne();

  mu_req.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_req.MultisetSort();

  mu_resp.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_resp.MultisetSort();

  mu_fwd.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_fwd.MultisetSort();

  mu_i_directoryL1_2.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_i_directoryL1_2.MultisetSort();

  mu_i_directoryL1_1.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_i_directoryL1_1.MultisetSort();

  mu_g_perm.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_g_perm.MultisetSort();

  mu_i_directoryL2.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_i_directoryL2.MultisetSort();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
