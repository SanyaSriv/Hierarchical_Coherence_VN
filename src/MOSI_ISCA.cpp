/******************************
  Program "MOSI_ISCA.m" compiled by "Caching Murphi Release 5.4.9"

  Murphi Last Compiled date: "Feb 11 2025"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9"
#define MURPHI_DATE "Feb 11 2025"
#define PROTOCOL_NAME "MOSI_ISCA"
#define BITS_IN_WORLD 1412
#define HASHC

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_Access: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_Access& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_Access& val)
  {
    if (val.defined())
      return ( s << mu_1_Access::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_Access (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_Access (void): mu__byte(1, 3, 2) {};
  mu_1_Access (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
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
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_Access::values[] = {"none","load","store",NULL };

/*** end of enum declaration ***/
mu_1_Access mu_1_Access_undefined_var;

class mu_1_MessageType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MessageType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MessageType& val)
  {
    if (val.defined())
      return ( s << mu_1_MessageType::values[ int(val) - 4] );
    else return ( s << "Undefined" );
  };

  mu_1_MessageType (const char *name, int os): mu__byte(4, 19, 5, name, os) {};
  mu_1_MessageType (void): mu__byte(4, 19, 5) {};
  mu_1_MessageType (int val): mu__byte(4, 19, 5, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -4]; };
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
      cout << name << ":" << values[ value() -4] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MessageType::values[] = {"Fwd_GetM","Fwd_GetM_M","Fwd_GetM_O","Fwd_GetS","Fwd_GetS_M","Fwd_GetS_O","GetM","GetM_Ack_AD","GetM_Ack_D","GetS","GetS_Ack","Inv","Inv_Ack","PutM","PutS","Put_Ack",NULL };

/*** end of enum declaration ***/
mu_1_MessageType mu_1_MessageType_undefined_var;

class mu_1_s_cache: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_s_cache& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_s_cache& val)
  {
    if (val.defined())
      return ( s << mu_1_s_cache::values[ int(val) - 20] );
    else return ( s << "Undefined" );
  };

  mu_1_s_cache (const char *name, int os): mu__byte(20, 31, 4, name, os) {};
  mu_1_s_cache (void): mu__byte(20, 31, 4) {};
  mu_1_s_cache (int val): mu__byte(20, 31, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -20]; };
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
      cout << name << ":" << values[ value() -20] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_s_cache::values[] = {"cache_I","cache_I_load","cache_I_store","cache_I_store_GetM_Ack_AD","cache_M","cache_M_evict","cache_M_evict_Fwd_GetM_M","cache_O","cache_O_store","cache_O_store_GetM_Ack_AD","cache_S","cache_S_evict",NULL };

/*** end of enum declaration ***/
mu_1_s_cache mu_1_s_cache_undefined_var;

class mu_1_s_directory: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_s_directory& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_s_directory& val)
  {
    if (val.defined())
      return ( s << mu_1_s_directory::values[ int(val) - 32] );
    else return ( s << "Undefined" );
  };

  mu_1_s_directory (const char *name, int os): mu__byte(32, 35, 3, name, os) {};
  mu_1_s_directory (void): mu__byte(32, 35, 3) {};
  mu_1_s_directory (int val): mu__byte(32, 35, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -32]; };
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
      cout << name << ":" << values[ value() -32] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_s_directory::values[] = {"directory_I","directory_M","directory_O","directory_S",NULL };

/*** end of enum declaration ***/
mu_1_s_directory mu_1_s_directory_undefined_var;

class mu_1_Address: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_Address& val) { return mu__byte::operator=((int) val); };
  mu_1_Address (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1_Address (void): mu__byte(0, 1, 2) {};
  mu_1_Address (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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

class mu_1_OBJSET_cache: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OBJSET_cache& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OBJSET_cache& val)
  {
    if (val.defined())
      return ( s << mu_1_OBJSET_cache::values[ int(val) - 36] );
    else return ( s << "Undefined" );
  };

  mu_1_OBJSET_cache (const char *name, int os): mu__byte(36, 38, 2, name, os) {};
  mu_1_OBJSET_cache (void): mu__byte(36, 38, 2) {};
  mu_1_OBJSET_cache (int val): mu__byte(36, 38, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -36]; };
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
      cout << name << ":" << values[ value() -36] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_OBJSET_cache::values[] = {"cache0","cache1","cache2",NULL };

/*** end of enum declaration ***/
mu_1_OBJSET_cache mu_1_OBJSET_cache_undefined_var;

class mu_1_OBJSET_directory0: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OBJSET_directory0& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OBJSET_directory0& val)
  {
    if (val.defined())
      return ( s << mu_1_OBJSET_directory0::values[ int(val) - 39] );
    else return ( s << "Undefined" );
  };

  mu_1_OBJSET_directory0 (const char *name, int os): mu__byte(39, 39, 1, name, os) {};
  mu_1_OBJSET_directory0 (void): mu__byte(39, 39, 1) {};
  mu_1_OBJSET_directory0 (int val): mu__byte(39, 39, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -39]; };
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
      cout << name << ":" << values[ value() -39] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_OBJSET_directory0::values[] = {"directory0",NULL };

/*** end of enum declaration ***/
mu_1_OBJSET_directory0 mu_1_OBJSET_directory0_undefined_var;

class mu_1_OBJSET_directory1: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OBJSET_directory1& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OBJSET_directory1& val)
  {
    if (val.defined())
      return ( s << mu_1_OBJSET_directory1::values[ int(val) - 40] );
    else return ( s << "Undefined" );
  };

  mu_1_OBJSET_directory1 (const char *name, int os): mu__byte(40, 40, 1, name, os) {};
  mu_1_OBJSET_directory1 (void): mu__byte(40, 40, 1) {};
  mu_1_OBJSET_directory1 (int val): mu__byte(40, 40, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -40]; };
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
      cout << name << ":" << values[ value() -40] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_OBJSET_directory1::values[] = {"directory1",NULL };

/*** end of enum declaration ***/
mu_1_OBJSET_directory1 mu_1_OBJSET_directory1_undefined_var;

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
  mu_1_Machines (const char *name, int os): mu__byte(0, 4, 3, name, os) {};
  mu_1_Machines (void): mu__byte(0, 4, 3) {};
  mu_1_Machines (int val): mu__byte(0, 4, 3, "Parameter or function result.", 0)
    { operator=(val); };
  int value() const
  {
    int val = mu__byte::value();
    // val == -1 if value undefined
    // we can return it since no enum/scalarsetid will have value -1
    if (val == -1) return -1;
    if (val <= 2) return val+36;
    if (val <= 3) return val+36;
    if (val <= 4) return val+36;
  }
  inline int value(int val)
  {
    if (val == -1) { undefine(); return -1; }
    if ((val >= 36) && (val <= 38)) return (mu__byte::value(val-36)+36);
    if ((val >= 39) && (val <= 39)) return (mu__byte::value(val-36)+36);
    if ((val >= 40) && (val <= 40)) return (mu__byte::value(val-36)+36);
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
const char *mu_1_Machines::values[] = {"cache0","cache1","cache2","directory0","directory1",NULL };

/*** end union declaration ***/
mu_1_Machines mu_1_Machines_undefined_var;

/*** begin multiset declaration ***/
class mu_1_v_NrCaches_OBJSET_cache_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_v_NrCaches_OBJSET_cache_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1_v_NrCaches_OBJSET_cache_id () : mu__byte(0,2,0) {};
  mu_1_v_NrCaches_OBJSET_cache_id (int val) : mu__byte(0,2,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1_v_NrCaches_OBJSET_cache
{
 public:
  mu_1_OBJSET_cache array[ 3 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 3 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_v_NrCaches_OBJSET_cache (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1_v_NrCaches_OBJSET_cache ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1_v_NrCaches_OBJSET_cache ();
  mu_1_OBJSET_cache& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 2) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1_v_NrCaches_OBJSET_cache& operator= (const mu_1_v_NrCaches_OBJSET_cache& from)
  {
    for (int i = 0; i < 3; i++)
    {
        array[i].value(from.array[i].value());
        valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1_v_NrCaches_OBJSET_cache& a, mu_1_v_NrCaches_OBJSET_cache& b)
  {
    return 0;
  }
friend int Compare(mu_1_v_NrCaches_OBJSET_cache& a, mu_1_v_NrCaches_OBJSET_cache& b)
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

   inline bool in(const mu_1_v_NrCaches_OBJSET_cache_id& id)
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
  int multisetadd(const mu_1_OBJSET_cache &element)
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
  void multisetremove(const mu_1_v_NrCaches_OBJSET_cache_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_OBJSET_cache temp;

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

  void mu_1_v_NrCaches_OBJSET_cache::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_v_NrCaches_OBJSET_cache::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_v_NrCaches_OBJSET_cache::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 3; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 2 + os); else array[i].set_self(NULL, 0);
  k = os + i * 2;
  for(i = 0; i < 3; i++)
    valid[i].set_self("", i * 2 + k);
};
mu_1_v_NrCaches_OBJSET_cache::~mu_1_v_NrCaches_OBJSET_cache()
{
}
/*** end multiset declaration ***/
mu_1_v_NrCaches_OBJSET_cache mu_1_v_NrCaches_OBJSET_cache_undefined_var;

class mu_1_cnt_v_NrCaches_OBJSET_cache: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_cnt_v_NrCaches_OBJSET_cache& val) { return mu__byte::operator=((int) val); };
  mu_1_cnt_v_NrCaches_OBJSET_cache (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1_cnt_v_NrCaches_OBJSET_cache (void): mu__byte(0, 3, 3) {};
  mu_1_cnt_v_NrCaches_OBJSET_cache (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu_1_cnt_v_NrCaches_OBJSET_cache mu_1_cnt_v_NrCaches_OBJSET_cache_undefined_var;

class mu_1__type_0: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_0& val) { return mu__byte::operator=((int) val); };
  mu_1__type_0 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_0 (void): mu__byte(0, 3, 3) {};
  mu_1__type_0 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu_1__type_0 mu_1__type_0_undefined_var;

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
  mu_1__type_0 mu_acksExpected;
  mu_1_ClValue mu_cl;
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
    w = CompareWeight(a.mu_acksExpected, b.mu_acksExpected);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
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
    w = Compare(a.mu_acksExpected, b.mu_acksExpected);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
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
    mu_acksExpected.MultisetSort();
    mu_cl.MultisetSort();
  }
  void print_statistic()
  {
    mu_adr.print_statistic();
    mu_mtype.print_statistic();
    mu_src.print_statistic();
    mu_dst.print_statistic();
    mu_acksExpected.print_statistic();
    mu_cl.print_statistic();
  }
  void clear() {
    mu_adr.clear();
    mu_mtype.clear();
    mu_src.clear();
    mu_dst.clear();
    mu_acksExpected.clear();
    mu_cl.clear();
 };
  void undefine() {
    mu_adr.undefine();
    mu_mtype.undefine();
    mu_src.undefine();
    mu_dst.undefine();
    mu_acksExpected.undefine();
    mu_cl.undefine();
 };
  void reset() {
    mu_adr.reset();
    mu_mtype.reset();
    mu_src.reset();
    mu_dst.reset();
    mu_acksExpected.reset();
    mu_cl.reset();
 };
  void print() {
    mu_adr.print();
    mu_mtype.print();
    mu_src.print();
    mu_dst.print();
    mu_acksExpected.print();
    mu_cl.print();
  };
  void print_diff(state *prevstate) {
    mu_adr.print_diff(prevstate);
    mu_mtype.print_diff(prevstate);
    mu_src.print_diff(prevstate);
    mu_dst.print_diff(prevstate);
    mu_acksExpected.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_adr.to_state(thestate);
    mu_mtype.to_state(thestate);
    mu_src.to_state(thestate);
    mu_dst.to_state(thestate);
    mu_acksExpected.to_state(thestate);
    mu_cl.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_adr.value(from.mu_adr.value());
    mu_mtype.value(from.mu_mtype.value());
    mu_src.value(from.mu_src.value());
    mu_dst.value(from.mu_dst.value());
    mu_acksExpected.value(from.mu_acksExpected.value());
    mu_cl.value(from.mu_cl.value());
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
  if (name) mu_mtype.set_self_2(name, ".mtype", os + 2 ); else mu_mtype.set_self_2(NULL, NULL, 0);
  if (name) mu_src.set_self_2(name, ".src", os + 7 ); else mu_src.set_self_2(NULL, NULL, 0);
  if (name) mu_dst.set_self_2(name, ".dst", os + 10 ); else mu_dst.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpected.set_self_2(name, ".acksExpected", os + 13 ); else mu_acksExpected.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 16 ); else mu_cl.set_self_2(NULL, NULL, 0);
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu__subrange_17: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_17& val) { return mu__byte::operator=((int) val); };
  mu__subrange_17 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_17 (void): mu__byte(0, 1, 2) {};
  mu__subrange_17 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_17 mu__subrange_17_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_Message array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 1 ) )
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
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
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

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 18 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_2& val) { return mu__byte::operator=((int) val); };
  mu_1__type_2 (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1__type_2 (void): mu__byte(0, 2, 2) {};
  mu_1__type_2 (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
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

class mu_1_FIFO
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_1 mu_Queue;
  mu_1__type_2 mu_QueueInd;
  mu_1_FIFO ( const char *n, int os ) { set_self(n,os); };
  mu_1_FIFO ( void ) {};

  virtual ~mu_1_FIFO(); 
friend int CompareWeight(mu_1_FIFO& a, mu_1_FIFO& b)
  {
    int w;
    w = CompareWeight(a.mu_Queue, b.mu_Queue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_QueueInd, b.mu_QueueInd);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_FIFO& a, mu_1_FIFO& b)
  {
    int w;
    w = Compare(a.mu_Queue, b.mu_Queue);
    if (w!=0) return w;
    w = Compare(a.mu_QueueInd, b.mu_QueueInd);
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
    mu_Queue.MultisetSort();
    mu_QueueInd.MultisetSort();
  }
  void print_statistic()
  {
    mu_Queue.print_statistic();
    mu_QueueInd.print_statistic();
  }
  void clear() {
    mu_Queue.clear();
    mu_QueueInd.clear();
 };
  void undefine() {
    mu_Queue.undefine();
    mu_QueueInd.undefine();
 };
  void reset() {
    mu_Queue.reset();
    mu_QueueInd.reset();
 };
  void print() {
    mu_Queue.print();
    mu_QueueInd.print();
  };
  void print_diff(state *prevstate) {
    mu_Queue.print_diff(prevstate);
    mu_QueueInd.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Queue.to_state(thestate);
    mu_QueueInd.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_FIFO& operator= (const mu_1_FIFO& from) {
    mu_Queue = from.mu_Queue;
    mu_QueueInd.value(from.mu_QueueInd.value());
    return *this;
  };
};

  void mu_1_FIFO::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_FIFO::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_FIFO::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Queue.set_self_2(name, ".Queue", os + 0 ); else mu_Queue.set_self_2(NULL, NULL, 0);
  if (name) mu_QueueInd.set_self_2(name, ".QueueInd", os + 36 ); else mu_QueueInd.set_self_2(NULL, NULL, 0);
}

mu_1_FIFO::~mu_1_FIFO()
{
}

/*** end record declaration ***/
mu_1_FIFO mu_1_FIFO_undefined_var;

class mu_1__type_3: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_3& val) { return mu__byte::operator=((int) val); };
  mu_1__type_3 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_3 (void): mu__byte(0, 3, 3) {};
  mu_1__type_3 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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

class mu_1__type_4: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_4& val) { return mu__byte::operator=((int) val); };
  mu_1__type_4 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_4 (void): mu__byte(0, 3, 3) {};
  mu_1__type_4 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1_ENTRY_cache
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_s_cache mu_State;
  mu_1_Access mu_Perm;
  mu_1_ClValue mu_cl;
  mu_1__type_3 mu_acksReceived;
  mu_1__type_4 mu_acksExpected;
  mu_1_ENTRY_cache ( const char *n, int os ) { set_self(n,os); };
  mu_1_ENTRY_cache ( void ) {};

  virtual ~mu_1_ENTRY_cache(); 
friend int CompareWeight(mu_1_ENTRY_cache& a, mu_1_ENTRY_cache& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Perm, b.mu_Perm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksReceived, b.mu_acksReceived);
    if (w!=0) return w;
    w = CompareWeight(a.mu_acksExpected, b.mu_acksExpected);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ENTRY_cache& a, mu_1_ENTRY_cache& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_Perm, b.mu_Perm);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_acksReceived, b.mu_acksReceived);
    if (w!=0) return w;
    w = Compare(a.mu_acksExpected, b.mu_acksExpected);
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
    mu_Perm.MultisetSort();
    mu_cl.MultisetSort();
    mu_acksReceived.MultisetSort();
    mu_acksExpected.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_Perm.print_statistic();
    mu_cl.print_statistic();
    mu_acksReceived.print_statistic();
    mu_acksExpected.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_Perm.clear();
    mu_cl.clear();
    mu_acksReceived.clear();
    mu_acksExpected.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_Perm.undefine();
    mu_cl.undefine();
    mu_acksReceived.undefine();
    mu_acksExpected.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_Perm.reset();
    mu_cl.reset();
    mu_acksReceived.reset();
    mu_acksExpected.reset();
 };
  void print() {
    mu_State.print();
    mu_Perm.print();
    mu_cl.print();
    mu_acksReceived.print();
    mu_acksExpected.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_Perm.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_acksReceived.print_diff(prevstate);
    mu_acksExpected.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_Perm.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_acksReceived.to_state(thestate);
    mu_acksExpected.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ENTRY_cache& operator= (const mu_1_ENTRY_cache& from) {
    mu_State.value(from.mu_State.value());
    mu_Perm.value(from.mu_Perm.value());
    mu_cl.value(from.mu_cl.value());
    mu_acksReceived.value(from.mu_acksReceived.value());
    mu_acksExpected.value(from.mu_acksExpected.value());
    return *this;
  };
};

  void mu_1_ENTRY_cache::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ENTRY_cache::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ENTRY_cache::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_Perm.set_self_2(name, ".Perm", os + 4 ); else mu_Perm.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 6 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_acksReceived.set_self_2(name, ".acksReceived", os + 8 ); else mu_acksReceived.set_self_2(NULL, NULL, 0);
  if (name) mu_acksExpected.set_self_2(name, ".acksExpected", os + 11 ); else mu_acksExpected.set_self_2(NULL, NULL, 0);
}

mu_1_ENTRY_cache::~mu_1_ENTRY_cache()
{
}

/*** end record declaration ***/
mu_1_ENTRY_cache mu_1_ENTRY_cache_undefined_var;

class mu_1_ENTRY_directory0
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_s_directory mu_State;
  mu_1_Access mu_Perm;
  mu_1_ClValue mu_cl;
  mu_1_v_NrCaches_OBJSET_cache mu_cache;
  mu_1_Machines mu_owner;
  mu_1_ENTRY_directory0 ( const char *n, int os ) { set_self(n,os); };
  mu_1_ENTRY_directory0 ( void ) {};

  virtual ~mu_1_ENTRY_directory0(); 
friend int CompareWeight(mu_1_ENTRY_directory0& a, mu_1_ENTRY_directory0& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Perm, b.mu_Perm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_owner, b.mu_owner);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ENTRY_directory0& a, mu_1_ENTRY_directory0& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_Perm, b.mu_Perm);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_owner, b.mu_owner);
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
    mu_Perm.MultisetSort();
    mu_cl.MultisetSort();
    mu_cache.MultisetSort();
    mu_owner.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_Perm.print_statistic();
    mu_cl.print_statistic();
    mu_cache.print_statistic();
    mu_owner.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_Perm.clear();
    mu_cl.clear();
    mu_cache.clear();
    mu_owner.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_Perm.undefine();
    mu_cl.undefine();
    mu_cache.undefine();
    mu_owner.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_Perm.reset();
    mu_cl.reset();
    mu_cache.reset();
    mu_owner.reset();
 };
  void print() {
    mu_State.print();
    mu_Perm.print();
    mu_cl.print();
    mu_cache.print();
    mu_owner.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_Perm.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_cache.print_diff(prevstate);
    mu_owner.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_Perm.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_cache.to_state(thestate);
    mu_owner.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ENTRY_directory0& operator= (const mu_1_ENTRY_directory0& from) {
    mu_State.value(from.mu_State.value());
    mu_Perm.value(from.mu_Perm.value());
    mu_cl.value(from.mu_cl.value());
    mu_cache = from.mu_cache;
    mu_owner.value(from.mu_owner.value());
    return *this;
  };
};

  void mu_1_ENTRY_directory0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ENTRY_directory0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ENTRY_directory0::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_Perm.set_self_2(name, ".Perm", os + 3 ); else mu_Perm.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 5 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_cache.set_self_2(name, ".cache", os + 7 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_owner.set_self_2(name, ".owner", os + 19 ); else mu_owner.set_self_2(NULL, NULL, 0);
}

mu_1_ENTRY_directory0::~mu_1_ENTRY_directory0()
{
}

/*** end record declaration ***/
mu_1_ENTRY_directory0 mu_1_ENTRY_directory0_undefined_var;

class mu_1_ENTRY_directory1
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_s_directory mu_State;
  mu_1_Access mu_Perm;
  mu_1_ClValue mu_cl;
  mu_1_v_NrCaches_OBJSET_cache mu_cache;
  mu_1_Machines mu_owner;
  mu_1_ENTRY_directory1 ( const char *n, int os ) { set_self(n,os); };
  mu_1_ENTRY_directory1 ( void ) {};

  virtual ~mu_1_ENTRY_directory1(); 
friend int CompareWeight(mu_1_ENTRY_directory1& a, mu_1_ENTRY_directory1& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Perm, b.mu_Perm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_owner, b.mu_owner);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ENTRY_directory1& a, mu_1_ENTRY_directory1& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_Perm, b.mu_Perm);
    if (w!=0) return w;
    w = Compare(a.mu_cl, b.mu_cl);
    if (w!=0) return w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_owner, b.mu_owner);
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
    mu_Perm.MultisetSort();
    mu_cl.MultisetSort();
    mu_cache.MultisetSort();
    mu_owner.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_Perm.print_statistic();
    mu_cl.print_statistic();
    mu_cache.print_statistic();
    mu_owner.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_Perm.clear();
    mu_cl.clear();
    mu_cache.clear();
    mu_owner.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_Perm.undefine();
    mu_cl.undefine();
    mu_cache.undefine();
    mu_owner.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_Perm.reset();
    mu_cl.reset();
    mu_cache.reset();
    mu_owner.reset();
 };
  void print() {
    mu_State.print();
    mu_Perm.print();
    mu_cl.print();
    mu_cache.print();
    mu_owner.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_Perm.print_diff(prevstate);
    mu_cl.print_diff(prevstate);
    mu_cache.print_diff(prevstate);
    mu_owner.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_Perm.to_state(thestate);
    mu_cl.to_state(thestate);
    mu_cache.to_state(thestate);
    mu_owner.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ENTRY_directory1& operator= (const mu_1_ENTRY_directory1& from) {
    mu_State.value(from.mu_State.value());
    mu_Perm.value(from.mu_Perm.value());
    mu_cl.value(from.mu_cl.value());
    mu_cache = from.mu_cache;
    mu_owner.value(from.mu_owner.value());
    return *this;
  };
};

  void mu_1_ENTRY_directory1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ENTRY_directory1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ENTRY_directory1::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_Perm.set_self_2(name, ".Perm", os + 3 ); else mu_Perm.set_self_2(NULL, NULL, 0);
  if (name) mu_cl.set_self_2(name, ".cl", os + 5 ); else mu_cl.set_self_2(NULL, NULL, 0);
  if (name) mu_cache.set_self_2(name, ".cache", os + 7 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_owner.set_self_2(name, ".owner", os + 19 ); else mu_owner.set_self_2(NULL, NULL, 0);
}

mu_1_ENTRY_directory1::~mu_1_ENTRY_directory1()
{
}

/*** end record declaration ***/
mu_1_ENTRY_directory1 mu_1_ENTRY_directory1_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_ENTRY_cache array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_ENTRY_cache& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 1 ) )
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
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
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

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 14 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1_MACH_cache
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_5 mu_CL;
  mu_1_MACH_cache ( const char *n, int os ) { set_self(n,os); };
  mu_1_MACH_cache ( void ) {};

  virtual ~mu_1_MACH_cache(); 
friend int CompareWeight(mu_1_MACH_cache& a, mu_1_MACH_cache& b)
  {
    int w;
    w = CompareWeight(a.mu_CL, b.mu_CL);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MACH_cache& a, mu_1_MACH_cache& b)
  {
    int w;
    w = Compare(a.mu_CL, b.mu_CL);
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
    mu_CL.MultisetSort();
  }
  void print_statistic()
  {
    mu_CL.print_statistic();
  }
  void clear() {
    mu_CL.clear();
 };
  void undefine() {
    mu_CL.undefine();
 };
  void reset() {
    mu_CL.reset();
 };
  void print() {
    mu_CL.print();
  };
  void print_diff(state *prevstate) {
    mu_CL.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_CL.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MACH_cache& operator= (const mu_1_MACH_cache& from) {
    mu_CL = from.mu_CL;
    return *this;
  };
};

  void mu_1_MACH_cache::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MACH_cache::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MACH_cache::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_CL.set_self_2(name, ".CL", os + 0 ); else mu_CL.set_self_2(NULL, NULL, 0);
}

mu_1_MACH_cache::~mu_1_MACH_cache()
{
}

/*** end record declaration ***/
mu_1_MACH_cache mu_1_MACH_cache_undefined_var;

class mu_1__type_6
{
 public:
  mu_1_ENTRY_directory0 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_ENTRY_directory0& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 1 ) )
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
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 22 + os);
    delete[] s;
  }
};
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1_MACH_directory0
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_6 mu_CL;
  mu_1_MACH_directory0 ( const char *n, int os ) { set_self(n,os); };
  mu_1_MACH_directory0 ( void ) {};

  virtual ~mu_1_MACH_directory0(); 
friend int CompareWeight(mu_1_MACH_directory0& a, mu_1_MACH_directory0& b)
  {
    int w;
    w = CompareWeight(a.mu_CL, b.mu_CL);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MACH_directory0& a, mu_1_MACH_directory0& b)
  {
    int w;
    w = Compare(a.mu_CL, b.mu_CL);
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
    mu_CL.MultisetSort();
  }
  void print_statistic()
  {
    mu_CL.print_statistic();
  }
  void clear() {
    mu_CL.clear();
 };
  void undefine() {
    mu_CL.undefine();
 };
  void reset() {
    mu_CL.reset();
 };
  void print() {
    mu_CL.print();
  };
  void print_diff(state *prevstate) {
    mu_CL.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_CL.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MACH_directory0& operator= (const mu_1_MACH_directory0& from) {
    mu_CL = from.mu_CL;
    return *this;
  };
};

  void mu_1_MACH_directory0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MACH_directory0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MACH_directory0::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_CL.set_self_2(name, ".CL", os + 0 ); else mu_CL.set_self_2(NULL, NULL, 0);
}

mu_1_MACH_directory0::~mu_1_MACH_directory0()
{
}

/*** end record declaration ***/
mu_1_MACH_directory0 mu_1_MACH_directory0_undefined_var;

class mu_1__type_7
{
 public:
  mu_1_ENTRY_directory1 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_1_ENTRY_directory1& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 1 ) )
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
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 22 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1_MACH_directory1
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_7 mu_CL;
  mu_1_MACH_directory1 ( const char *n, int os ) { set_self(n,os); };
  mu_1_MACH_directory1 ( void ) {};

  virtual ~mu_1_MACH_directory1(); 
friend int CompareWeight(mu_1_MACH_directory1& a, mu_1_MACH_directory1& b)
  {
    int w;
    w = CompareWeight(a.mu_CL, b.mu_CL);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MACH_directory1& a, mu_1_MACH_directory1& b)
  {
    int w;
    w = Compare(a.mu_CL, b.mu_CL);
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
    mu_CL.MultisetSort();
  }
  void print_statistic()
  {
    mu_CL.print_statistic();
  }
  void clear() {
    mu_CL.clear();
 };
  void undefine() {
    mu_CL.undefine();
 };
  void reset() {
    mu_CL.reset();
 };
  void print() {
    mu_CL.print();
  };
  void print_diff(state *prevstate) {
    mu_CL.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_CL.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MACH_directory1& operator= (const mu_1_MACH_directory1& from) {
    mu_CL = from.mu_CL;
    return *this;
  };
};

  void mu_1_MACH_directory1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MACH_directory1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MACH_directory1::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_CL.set_self_2(name, ".CL", os + 0 ); else mu_CL.set_self_2(NULL, NULL, 0);
}

mu_1_MACH_directory1::~mu_1_MACH_directory1()
{
}

/*** end record declaration ***/
mu_1_MACH_directory1 mu_1_MACH_directory1_undefined_var;

class mu_1_OBJ_cache
{
 public:
  mu_1_MACH_cache array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_cache (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_cache ( void ) {};
  virtual ~mu_1_OBJ_cache ();
  mu_1_MACH_cache& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 36 ) && ( index <= 38 ) )
      return array[ index - 36 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 36 ];
#endif
  };
  mu_1_OBJ_cache& operator= (const mu_1_OBJ_cache& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_cache& a, mu_1_OBJ_cache& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_cache& a, mu_1_OBJ_cache& b)
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
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_OBJ_cache::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_cache::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1_OBJ_cache::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"cache0", i * 28 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"cache1", i * 28 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"cache2", i * 28 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1_OBJ_cache::~mu_1_OBJ_cache()
{
}
/*** end array declaration ***/
mu_1_OBJ_cache mu_1_OBJ_cache_undefined_var;

class mu_1_OBJ_directory0
{
 public:
  mu_1_MACH_directory0 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_directory0 (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_directory0 ( void ) {};
  virtual ~mu_1_OBJ_directory0 ();
  mu_1_MACH_directory0& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 39 ) && ( index <= 39 ) )
      return array[ index - 39 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 39 ];
#endif
  };
  mu_1_OBJ_directory0& operator= (const mu_1_OBJ_directory0& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_directory0& a, mu_1_OBJ_directory0& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_directory0& a, mu_1_OBJ_directory0& b)
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

  void mu_1_OBJ_directory0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_directory0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1_OBJ_directory0::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directory0", i * 44 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1_OBJ_directory0::~mu_1_OBJ_directory0()
{
}
/*** end array declaration ***/
mu_1_OBJ_directory0 mu_1_OBJ_directory0_undefined_var;

class mu_1_OBJ_directory1
{
 public:
  mu_1_MACH_directory1 array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_directory1 (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_directory1 ( void ) {};
  virtual ~mu_1_OBJ_directory1 ();
  mu_1_MACH_directory1& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 40 ) && ( index <= 40 ) )
      return array[ index - 40 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 40 ];
#endif
  };
  mu_1_OBJ_directory1& operator= (const mu_1_OBJ_directory1& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_directory1& a, mu_1_OBJ_directory1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_directory1& a, mu_1_OBJ_directory1& b)
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

  void mu_1_OBJ_directory1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_directory1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1_OBJ_directory1::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"directory1", i * 44 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1_OBJ_directory1::~mu_1_OBJ_directory1()
{
}
/*** end array declaration ***/
mu_1_OBJ_directory1 mu_1_OBJ_directory1_undefined_var;

class mu__subrange_35: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_35& val) { return mu__byte::operator=((int) val); };
  mu__subrange_35 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_35 (void): mu__byte(0, 1, 2) {};
  mu__subrange_35 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_35 mu__subrange_35_undefined_var;

class mu__subrange_36: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_36& val) { return mu__byte::operator=((int) val); };
  mu__subrange_36 (const char *name, int os): mu__byte(0, 5, 3, name, os) {};
  mu__subrange_36 (void): mu__byte(0, 5, 3) {};
  mu__subrange_36 (int val): mu__byte(0, 5, 3, "Parameter or function result.", 0)
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
mu__subrange_36 mu__subrange_36_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_Message array[ 6 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 5 ) )
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
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 6; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 6; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 6; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 6; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 18 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1_OBJ_Ordered
{
 public:
  mu_1__type_8 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_Ordered (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_Ordered ( void ) {};
  virtual ~mu_1_OBJ_Ordered ();
  mu_1__type_8& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 1 ) )
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
  mu_1_OBJ_Ordered& operator= (const mu_1_OBJ_Ordered& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_Ordered& a, mu_1_OBJ_Ordered& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_Ordered& a, mu_1_OBJ_Ordered& b)
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

  void mu_1_OBJ_Ordered::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_Ordered::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_OBJ_Ordered::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 108 + os);
    delete[] s;
  }
};
mu_1_OBJ_Ordered::~mu_1_OBJ_Ordered()
{
}
/*** end array declaration ***/
mu_1_OBJ_Ordered mu_1_OBJ_Ordered_undefined_var;

class mu__subrange_39: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_39& val) { return mu__byte::operator=((int) val); };
  mu__subrange_39 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_39 (void): mu__byte(0, 1, 2) {};
  mu__subrange_39 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_39 mu__subrange_39_undefined_var;

class mu_1__type_9: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_9& val) { return mu__byte::operator=((int) val); };
  mu_1__type_9 (const char *name, int os): mu__byte(0, 6, 3, name, os) {};
  mu_1__type_9 (void): mu__byte(0, 6, 3) {};
  mu_1__type_9 (int val): mu__byte(0, 6, 3, "Parameter or function result.", 0)
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

class mu_1_OBJ_Orderedcnt
{
 public:
  mu_1__type_9 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_Orderedcnt (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_Orderedcnt ( void ) {};
  virtual ~mu_1_OBJ_Orderedcnt ();
  mu_1__type_9& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 1 ) )
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
  mu_1_OBJ_Orderedcnt& operator= (const mu_1_OBJ_Orderedcnt& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_Orderedcnt& a, mu_1_OBJ_Orderedcnt& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_Orderedcnt& a, mu_1_OBJ_Orderedcnt& b)
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

  void mu_1_OBJ_Orderedcnt::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_Orderedcnt::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_OBJ_Orderedcnt::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 3 + os);
    delete[] s;
  }
};
mu_1_OBJ_Orderedcnt::~mu_1_OBJ_Orderedcnt()
{
}
/*** end array declaration ***/
mu_1_OBJ_Orderedcnt mu_1_OBJ_Orderedcnt_undefined_var;

/*** begin multiset declaration ***/
class mu_1__type_10_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1__type_10_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1__type_10_id () : mu__byte(0,23,0) {};
  mu_1__type_10_id (int val) : mu__byte(0,23,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1__type_10
{
 public:
  mu_1_Message array[ 24 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 24 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1__type_10 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1__type_10 ();
  mu_1_Message& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 23) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 24; i++)
    {
       array[i] = from.array[i];
       valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<24; i++) {
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
  void clear() { for (int i = 0; i < 24; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 24; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 24; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 24; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 24; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 24; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1__type_10_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 24; i++)
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
    for (int i = 0; i < 24; i++)
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
    if (current_size >= 24) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 24; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1__type_10_id &id)
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
    for (i = 0, j = 0; i < 24; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 24; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 24; i++)
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

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_10::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 24; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 18 + os); else array[i].set_self(NULL, 0);
  k = os + i * 18;
  for(i = 0; i < 24; i++)
    valid[i].set_self("", i * 2 + k);
};
mu_1__type_10::~mu_1__type_10()
{
}
/*** end multiset declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1_OBJ_Unordered
{
 public:
  mu_1__type_10 array[ 5 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_Unordered (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_Unordered ( void ) {};
  virtual ~mu_1_OBJ_Unordered ();
  mu_1__type_10& operator[] (int index) /* const */
  {
    if ( ( index >= 36 ) && ( index <= 38 ) )
      return array[ index - (36) ];
    if ( ( index >= 39 ) && ( index <= 39 ) )
      return array[ index - (36) ];
    if ( ( index >= 40 ) && ( index <= 40 ) )
      return array[ index - (36) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1_OBJ_Unordered& operator= (const mu_1_OBJ_Unordered& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_Unordered& a, mu_1_OBJ_Unordered& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_Unordered& a, mu_1_OBJ_Unordered& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 5; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 5; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_OBJ_Unordered::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_Unordered::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_OBJ_Unordered::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"cache0", i * 480 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"cache1", i * 480 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"cache2", i * 480 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directory0", i * 480 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directory1", i * 480 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1_OBJ_Unordered::~mu_1_OBJ_Unordered()
{
}
/*** end array declaration ***/
mu_1_OBJ_Unordered mu_1_OBJ_Unordered_undefined_var;

class mu_1_OBJ_FIFO
{
 public:
  mu_1_FIFO array[ 5 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_OBJ_FIFO (const char *n, int os) { set_self(n, os); };
  mu_1_OBJ_FIFO ( void ) {};
  virtual ~mu_1_OBJ_FIFO ();
  mu_1_FIFO& operator[] (int index) /* const */
  {
    if ( ( index >= 36 ) && ( index <= 38 ) )
      return array[ index - (36) ];
    if ( ( index >= 39 ) && ( index <= 39 ) )
      return array[ index - (36) ];
    if ( ( index >= 40 ) && ( index <= 40 ) )
      return array[ index - (36) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1_OBJ_FIFO& operator= (const mu_1_OBJ_FIFO& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_OBJ_FIFO& a, mu_1_OBJ_FIFO& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_OBJ_FIFO& a, mu_1_OBJ_FIFO& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 5; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 5; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_OBJ_FIFO::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_OBJ_FIFO::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_OBJ_FIFO::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"cache0", i * 38 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"cache1", i * 38 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"cache2", i * 38 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directory0", i * 38 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"directory1", i * 38 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1_OBJ_FIFO::~mu_1_OBJ_FIFO()
{
}
/*** end array declaration ***/
mu_1_OBJ_FIFO mu_1_OBJ_FIFO_undefined_var;

/*** begin multiset declaration ***/
class mu_1__type_11_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1__type_11_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1__type_11_id () : mu__byte(0,0,0) {};
  mu_1__type_11_id (int val) : mu__byte(0,0,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1__type_11
{
 public:
  mu_1_OBJSET_cache array[ 1 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 1 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1__type_11 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1__type_11 ();
  mu_1_OBJSET_cache& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 0) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    {
        array[0].value(from.array[0].value());
        valid[0].value(from.valid[0].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
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
  void clear() { for (int i = 0; i < 1; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 1; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 1; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 1; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 1; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1__type_11_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 1; i++)
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
    for (int i = 0; i < 1; i++)
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
  int multisetadd(const mu_1_OBJSET_cache &element)
  {
    update_size();
    if (current_size >= 1) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 1; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1__type_11_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_OBJSET_cache temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 1; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 1; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 1; i++)
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

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_11::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 1; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 2 + os); else array[i].set_self(NULL, 0);
  k = os + i * 2;
  for(i = 0; i < 1; i++)
    valid[i].set_self("", i * 2 + k);
};
mu_1__type_11::~mu_1__type_11()
{
}
/*** end multiset declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_12& val) { return mu__byte::operator=((int) val); };
  mu_1__type_12 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1__type_12 (void): mu__byte(0, 3, 3) {};
  mu_1__type_12 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu_1__type_12 mu_1__type_12_undefined_var;

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
  mu_1__type_14 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1__type_14 (void): mu__byte(0, 1, 2) {};
  mu_1__type_14 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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

class mu_1__type_15: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_15& val) { return mu__byte::operator=((int) val); };
  mu_1__type_15 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1__type_15 (void): mu__byte(0, 1, 2) {};
  mu_1__type_15 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1__type_16: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_16& val) { return mu__byte::operator=((int) val); };
  mu_1__type_16 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1__type_16 (void): mu__byte(0, 1, 2) {};
  mu_1__type_16 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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

class mu__subrange_89: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_89& val) { return mu__byte::operator=((int) val); };
  mu__subrange_89 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_89 (void): mu__byte(0, 1, 2) {};
  mu__subrange_89 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_89 mu__subrange_89_undefined_var;

class mu__subrange_90: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_90& val) { return mu__byte::operator=((int) val); };
  mu__subrange_90 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_90 (void): mu__byte(0, 1, 2) {};
  mu__subrange_90 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_90 mu__subrange_90_undefined_var;

class mu__subrange_91: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_91& val) { return mu__byte::operator=((int) val); };
  mu__subrange_91 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_91 (void): mu__byte(0, 1, 2) {};
  mu__subrange_91 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_91 mu__subrange_91_undefined_var;

class mu__subrange_92: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_92& val) { return mu__byte::operator=((int) val); };
  mu__subrange_92 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_92 (void): mu__byte(0, 1, 2) {};
  mu__subrange_92 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_92 mu__subrange_92_undefined_var;

class mu__subrange_93: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_93& val) { return mu__byte::operator=((int) val); };
  mu__subrange_93 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_93 (void): mu__byte(0, 1, 2) {};
  mu__subrange_93 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_93 mu__subrange_93_undefined_var;

class mu__subrange_94: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_94& val) { return mu__byte::operator=((int) val); };
  mu__subrange_94 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_94 (void): mu__byte(0, 1, 2) {};
  mu__subrange_94 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_94 mu__subrange_94_undefined_var;

const int mu_ENABLE_QS = 1;
const int mu_VAL_COUNT = 1;
const int mu_ADR_COUNT = 2;
const int mu_O_NET_MAX = 6;
const int mu_U_NET_MAX = 24;
const int mu_NrCaches = 3;
const int mu_none = 1;
const int mu_load = 2;
const int mu_store = 3;
const int mu_Fwd_GetM = 4;
const int mu_Fwd_GetM_M = 5;
const int mu_Fwd_GetM_O = 6;
const int mu_Fwd_GetS = 7;
const int mu_Fwd_GetS_M = 8;
const int mu_Fwd_GetS_O = 9;
const int mu_GetM = 10;
const int mu_GetM_Ack_AD = 11;
const int mu_GetM_Ack_D = 12;
const int mu_GetS = 13;
const int mu_GetS_Ack = 14;
const int mu_Inv = 15;
const int mu_Inv_Ack = 16;
const int mu_PutM = 17;
const int mu_PutS = 18;
const int mu_Put_Ack = 19;
const int mu_cache_I = 20;
const int mu_cache_I_load = 21;
const int mu_cache_I_store = 22;
const int mu_cache_I_store_GetM_Ack_AD = 23;
const int mu_cache_M = 24;
const int mu_cache_M_evict = 25;
const int mu_cache_M_evict_Fwd_GetM_M = 26;
const int mu_cache_O = 27;
const int mu_cache_O_store = 28;
const int mu_cache_O_store_GetM_Ack_AD = 29;
const int mu_cache_S = 30;
const int mu_cache_S_evict = 31;
const int mu_directory_I = 32;
const int mu_directory_M = 33;
const int mu_directory_O = 34;
const int mu_directory_S = 35;
const int mu_cache0 = 36;
const int mu_cache1 = 37;
const int mu_cache2 = 38;
const int mu_directory0 = 39;
const int mu_directory1 = 40;
/*** Variable declaration ***/
mu_1_OBJ_cache mu_i_cache("i_cache",0);

/*** Variable declaration ***/
mu_1_OBJ_directory0 mu_i_directory0("i_directory0",84);

/*** Variable declaration ***/
mu_1_OBJ_directory1 mu_i_directory1("i_directory1",128);

/*** Variable declaration ***/
mu_1_OBJ_Ordered mu_fwd("fwd",172);

/*** Variable declaration ***/
mu_1_OBJ_Orderedcnt mu_cnt_fwd("cnt_fwd",388);

/*** Variable declaration ***/
mu_1_OBJ_Ordered mu_resp("resp",394);

/*** Variable declaration ***/
mu_1_OBJ_Orderedcnt mu_cnt_resp("cnt_resp",610);

/*** Variable declaration ***/
mu_1_OBJ_Ordered mu_req("req",616);

/*** Variable declaration ***/
mu_1_OBJ_Orderedcnt mu_cnt_req("cnt_req",832);

/*** Variable declaration ***/
mu_1_OBJ_FIFO mu_buf_fwd("buf_fwd",838);

/*** Variable declaration ***/
mu_1_OBJ_FIFO mu_buf_resp("buf_resp",1028);

/*** Variable declaration ***/
mu_1_OBJ_FIFO mu_buf_req("buf_req",1218);

/*** Variable declaration ***/
mu_1__type_11 mu_lock_set_cache("lock_set_cache",1408);

mu_0_boolean mu_PushQueue(mu_1_OBJ_FIFO& mu_f,const mu_1_Machines& mu_n,mu_1_Message& mu_msg)
{
{
  mu_1_FIFO& mu_p = mu_f[mu_n];
{
  mu_1__type_1& mu_q = mu_p.mu_Queue;
{
  mu_1__type_2& mu_qind = mu_p.mu_QueueInd;
if ( (mu_qind) <= (1) )
{
mu_q[mu_qind] = mu_msg;
mu_qind = (mu_qind) + (1);
return mu_true;
}
return mu_false;
}
}
}
	Error.Error("The end of function PushQueue reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_GetQueue(mu_1_OBJ_FIFO& mu_f,const mu_1_Machines& mu_n)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_FIFO& mu_p = mu_f[mu_n];
{
  mu_1__type_1& mu_q = mu_p.mu_Queue;
mu_msg.undefine();
if ( !(mu_q[0].mu_mtype.isundefined()) )
{
return mu_q[0];
}
return mu_msg;
}
}
	Error.Error("The end of function GetQueue reached without returning values.");
};
/*** end function declaration ***/

void mu_PopQueue(mu_1_OBJ_FIFO& mu_f, const mu_1_Machines& mu_n)
{
{
  mu_1_FIFO& mu_p = mu_f[mu_n];
{
  mu_1__type_1& mu_q = mu_p.mu_Queue;
{
  mu_1__type_2& mu_qind = mu_p.mu_QueueInd;
{
int mu__ub17 = (mu_qind) - (1);
for (int mu_i = 0; mu_i <= mu__ub17; mu_i += 1) {
if ( (mu_i) < ((mu_qind) - (1)) )
{
mu_q[mu_i] = mu_q[(mu_i) + (1)];
}
else
{
mu_q[mu_i].undefine();
}
};
};
mu_qind = (mu_qind) - (1);
}
}
}
};
/*** end procedure declaration ***/

mu_1_Message mu_Request(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

if (mu_adr.isundefined())
  mu_msg.mu_adr.undefine();
else
  mu_msg.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_msg.mu_mtype.undefine();
else
  mu_msg.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_msg.mu_src.undefine();
else
  mu_msg.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_msg.mu_dst.undefine();
else
  mu_msg.mu_dst = mu_dst;
mu_msg.mu_acksExpected.undefine();
mu_msg.mu_cl.undefine();
return mu_msg;
	Error.Error("The end of function Request reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_Ack(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

if (mu_adr.isundefined())
  mu_msg.mu_adr.undefine();
else
  mu_msg.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_msg.mu_mtype.undefine();
else
  mu_msg.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_msg.mu_src.undefine();
else
  mu_msg.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_msg.mu_dst.undefine();
else
  mu_msg.mu_dst = mu_dst;
mu_msg.mu_acksExpected.undefine();
mu_msg.mu_cl.undefine();
return mu_msg;
	Error.Error("The end of function Ack reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespAck(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1__type_12& mu_acksExpected)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

if (mu_adr.isundefined())
  mu_msg.mu_adr.undefine();
else
  mu_msg.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_msg.mu_mtype.undefine();
else
  mu_msg.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_msg.mu_src.undefine();
else
  mu_msg.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_msg.mu_dst.undefine();
else
  mu_msg.mu_dst = mu_dst;
if (mu_acksExpected.isundefined())
  mu_msg.mu_acksExpected.undefine();
else
  mu_msg.mu_acksExpected = mu_acksExpected;
mu_msg.mu_cl.undefine();
return mu_msg;
	Error.Error("The end of function RespAck reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespData(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1_ClValue& mu_cl)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

if (mu_adr.isundefined())
  mu_msg.mu_adr.undefine();
else
  mu_msg.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_msg.mu_mtype.undefine();
else
  mu_msg.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_msg.mu_src.undefine();
else
  mu_msg.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_msg.mu_dst.undefine();
else
  mu_msg.mu_dst = mu_dst;
mu_msg.mu_acksExpected.undefine();
if (mu_cl.isundefined())
  mu_msg.mu_cl.undefine();
else
  mu_msg.mu_cl = mu_cl;
return mu_msg;
	Error.Error("The end of function RespData reached without returning values.");
};
/*** end function declaration ***/

mu_1_Message mu_RespDataAck(const mu_1_Address& mu_adr,const mu_1_MessageType& mu_mtype,const mu_1_Machines& mu_src,const mu_1_Machines& mu_dst,const mu_1_ClValue& mu_cl,const mu_1__type_13& mu_acksExpected)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

if (mu_adr.isundefined())
  mu_msg.mu_adr.undefine();
else
  mu_msg.mu_adr = mu_adr;
if (mu_mtype.isundefined())
  mu_msg.mu_mtype.undefine();
else
  mu_msg.mu_mtype = mu_mtype;
if (mu_src.isundefined())
  mu_msg.mu_src.undefine();
else
  mu_msg.mu_src = mu_src;
if (mu_dst.isundefined())
  mu_msg.mu_dst.undefine();
else
  mu_msg.mu_dst = mu_dst;
if (mu_acksExpected.isundefined())
  mu_msg.mu_acksExpected.undefine();
else
  mu_msg.mu_acksExpected = mu_acksExpected;
if (mu_cl.isundefined())
  mu_msg.mu_cl.undefine();
else
  mu_msg.mu_cl = mu_cl;
return mu_msg;
	Error.Error("The end of function RespDataAck reached without returning values.");
};
/*** end function declaration ***/

void mu_Send_fwd(mu_1_Message& mu_msg)
{
if ( !((mu_cnt_fwd[0]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many fwd messages");
if ( !((mu_cnt_fwd[1]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many fwd messages");
bool mu__boolexpr18;
bool mu__boolexpr19;
  if (!((mu_msg.mu_dst) == (mu_cache0))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_msg.mu_src) == (mu_cache2)) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_msg.mu_adr) == (1)) ; 
}
if ( mu__boolexpr18 )
{
mu_fwd[0][mu_cnt_fwd[0]] = mu_msg;
mu_cnt_fwd[0] = (mu_cnt_fwd[0]) + (1);
}
else
{
bool mu__boolexpr20;
bool mu__boolexpr21;
  if (!((mu_msg.mu_dst) == (mu_cache0))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_msg.mu_src) == (mu_cache1)) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_msg.mu_adr) == (0)) ; 
}
if ( mu__boolexpr20 )
{
mu_fwd[1][mu_cnt_fwd[1]] = mu_msg;
mu_cnt_fwd[1] = (mu_cnt_fwd[1]) + (1);
}
else
{
bool mu__boolexpr22;
bool mu__boolexpr23;
  if (!((mu_msg.mu_dst) == (mu_cache1))) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_msg.mu_src) == (mu_cache2)) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_msg.mu_adr) == (0)) ; 
}
if ( mu__boolexpr22 )
{
mu_fwd[0][mu_cnt_fwd[0]] = mu_msg;
mu_cnt_fwd[0] = (mu_cnt_fwd[0]) + (1);
}
else
{
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!((mu_msg.mu_dst) == (mu_cache1))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_msg.mu_src) == (mu_cache0)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_msg.mu_adr) == (1)) ; 
}
if ( mu__boolexpr24 )
{
mu_fwd[1][mu_cnt_fwd[1]] = mu_msg;
mu_cnt_fwd[1] = (mu_cnt_fwd[1]) + (1);
}
else
{
mu_fwd[1][mu_cnt_fwd[1]] = mu_msg;
mu_cnt_fwd[1] = (mu_cnt_fwd[1]) + (1);
}
}
}
}
};
/*** end procedure declaration ***/

void mu_Pop_fwd(const mu_1__type_14& mu_n)
{
if ( !((mu_cnt_fwd[mu_n]) > (0)) ) Error.Error("Assertion failed: Trying to advance empty Q");
{
int mu__ub26 = (mu_cnt_fwd[mu_n]) - (1);
for (int mu_i = 0; mu_i <= mu__ub26; mu_i += 1) {
if ( (mu_i) < ((mu_cnt_fwd[mu_n]) - (1)) )
{
mu_fwd[mu_n][mu_i] = mu_fwd[mu_n][(mu_i) + (1)];
}
else
{
mu_fwd[mu_n][mu_i].undefine();
}
};
};
mu_cnt_fwd[mu_n] = (mu_cnt_fwd[mu_n]) - (1);
};
/*** end procedure declaration ***/

void mu_Send_resp(mu_1_Message& mu_msg)
{
if ( !((mu_cnt_resp[0]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many resp messages");
if ( !((mu_cnt_resp[1]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many resp messages");
if ( (mu_msg.mu_dst>=39 && mu_msg.mu_dst<=39) )
{
mu_resp[0][mu_cnt_resp[0]] = mu_msg;
mu_cnt_resp[0] = (mu_cnt_resp[0]) + (1);
}
if ( (mu_msg.mu_dst>=36 && mu_msg.mu_dst<=38) )
{
if ( (mu_msg.mu_adr) == (0) )
{
mu_resp[0][mu_cnt_resp[0]] = mu_msg;
mu_cnt_resp[0] = (mu_cnt_resp[0]) + (1);
}
else
{
mu_resp[1][mu_cnt_resp[1]] = mu_msg;
mu_cnt_resp[1] = (mu_cnt_resp[1]) + (1);
}
}
if ( (mu_msg.mu_dst>=40 && mu_msg.mu_dst<=40) )
{
mu_resp[1][mu_cnt_resp[1]] = mu_msg;
mu_cnt_resp[1] = (mu_cnt_resp[1]) + (1);
}
};
/*** end procedure declaration ***/

void mu_Pop_resp(const mu_1__type_15& mu_n)
{
if ( !((mu_cnt_resp[mu_n]) > (0)) ) Error.Error("Assertion failed: Trying to advance empty Q");
{
int mu__ub27 = (mu_cnt_resp[mu_n]) - (1);
for (int mu_i = 0; mu_i <= mu__ub27; mu_i += 1) {
if ( (mu_i) < ((mu_cnt_resp[mu_n]) - (1)) )
{
mu_resp[mu_n][mu_i] = mu_resp[mu_n][(mu_i) + (1)];
}
else
{
mu_resp[mu_n][mu_i].undefine();
}
};
};
mu_cnt_resp[mu_n] = (mu_cnt_resp[mu_n]) - (1);
};
/*** end procedure declaration ***/

void mu_Send_req(mu_1_Message& mu_msg)
{
if ( !((mu_cnt_req[0]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many req messages");
if ( !((mu_cnt_req[1]) < (mu_O_NET_MAX)) ) Error.Error("Assertion failed: Too many req messages");
if ( (mu_msg.mu_dst>=39 && mu_msg.mu_dst<=39) )
{
mu_req[0][mu_cnt_req[0]] = mu_msg;
mu_cnt_req[0] = (mu_cnt_req[0]) + (1);
}
if ( (mu_msg.mu_dst>=36 && mu_msg.mu_dst<=38) )
{
if ( (mu_msg.mu_adr) == (0) )
{
mu_req[0][mu_cnt_req[0]] = mu_msg;
mu_cnt_req[0] = (mu_cnt_req[0]) + (1);
}
else
{
mu_req[1][mu_cnt_req[1]] = mu_msg;
mu_cnt_req[1] = (mu_cnt_req[1]) + (1);
}
}
if ( (mu_msg.mu_dst>=40 && mu_msg.mu_dst<=40) )
{
mu_req[1][mu_cnt_req[1]] = mu_msg;
mu_cnt_req[1] = (mu_cnt_req[1]) + (1);
}
};
/*** end procedure declaration ***/

void mu_Pop_req(const mu_1__type_16& mu_n)
{
if ( !((mu_cnt_req[mu_n]) > (0)) ) Error.Error("Assertion failed: Trying to advance empty Q");
{
int mu__ub28 = (mu_cnt_req[mu_n]) - (1);
for (int mu_i = 0; mu_i <= mu__ub28; mu_i += 1) {
if ( (mu_i) < ((mu_cnt_req[mu_n]) - (1)) )
{
mu_req[mu_n][mu_i] = mu_req[mu_n][(mu_i) + (1)];
}
else
{
mu_req[mu_n][mu_i].undefine();
}
};
};
mu_cnt_req[mu_n] = (mu_cnt_req[mu_n]) - (1);
};
/*** end procedure declaration ***/

void mu_Multicast_fwd_v_NrCaches_OBJSET_cache(mu_1_Message& mu_msg, mu_1_v_NrCaches_OBJSET_cache& mu_dst)
{
{
for(int mu_iSV = 36; mu_iSV <= 40; mu_iSV++)
  if (( ( mu_iSV >= 40 ) && ( mu_iSV <= 40 ) )|| ( ( mu_iSV >= 39 ) && ( mu_iSV <= 39 ) )|| ( ( mu_iSV >= 36 ) && ( mu_iSV <= 38 ) )) {
if ( (mu_iSV) != (mu_msg.mu_src) )
{
/*** begin multisetcount 0 declaration ***/
  int mu__intexpr29 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_dst.valid[(int)mu_i].value())
	{
	  if ( (mu_dst[mu_i]) == (mu_iSV) ) mu__intexpr29++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 0 declaration ***/
if ( (mu__intexpr29) == (1) )
{
mu_msg.mu_dst = mu_iSV;
mu_Send_fwd ( mu_msg );
}
}
};
};
};
/*** end procedure declaration ***/

void mu_Multicast_resp_v_NrCaches_OBJSET_cache(mu_1_Message& mu_msg, mu_1_v_NrCaches_OBJSET_cache& mu_dst)
{
{
for(int mu_iSV = 36; mu_iSV <= 40; mu_iSV++)
  if (( ( mu_iSV >= 40 ) && ( mu_iSV <= 40 ) )|| ( ( mu_iSV >= 39 ) && ( mu_iSV <= 39 ) )|| ( ( mu_iSV >= 36 ) && ( mu_iSV <= 38 ) )) {
if ( (mu_iSV) != (mu_msg.mu_src) )
{
/*** begin multisetcount 1 declaration ***/
  int mu__intexpr30 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_dst.valid[(int)mu_i].value())
	{
	  if ( (mu_dst[mu_i]) == (mu_iSV) ) mu__intexpr30++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 1 declaration ***/
if ( (mu__intexpr30) == (1) )
{
mu_msg.mu_dst = mu_iSV;
mu_Send_resp ( mu_msg );
}
}
};
};
};
/*** end procedure declaration ***/

void mu_Multicast_req_v_NrCaches_OBJSET_cache(mu_1_Message& mu_msg, mu_1_v_NrCaches_OBJSET_cache& mu_dst)
{
{
for(int mu_iSV = 36; mu_iSV <= 40; mu_iSV++)
  if (( ( mu_iSV >= 40 ) && ( mu_iSV <= 40 ) )|| ( ( mu_iSV >= 39 ) && ( mu_iSV <= 39 ) )|| ( ( mu_iSV >= 36 ) && ( mu_iSV <= 38 ) )) {
if ( (mu_iSV) != (mu_msg.mu_src) )
{
/*** begin multisetcount 2 declaration ***/
  int mu__intexpr31 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_dst.valid[(int)mu_i].value())
	{
	  if ( (mu_dst[mu_i]) == (mu_iSV) ) mu__intexpr31++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 2 declaration ***/
if ( (mu__intexpr31) == (1) )
{
mu_msg.mu_dst = mu_iSV;
mu_Send_req ( mu_msg );
}
}
};
};
};
/*** end procedure declaration ***/

void mu_AddElement_v_NrCaches_OBJSET_cache(mu_1_v_NrCaches_OBJSET_cache& mu_sv, const mu_1_OBJSET_cache& mu_n)
{
/*** begin multisetcount 3 declaration ***/
  int mu__intexpr32 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr32++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 3 declaration ***/
if ( (mu__intexpr32) == (0) )
{
mu_sv.multisetadd(mu_n);
}
};
/*** end procedure declaration ***/

void mu_RemoveElement_v_NrCaches_OBJSET_cache(mu_1_v_NrCaches_OBJSET_cache& mu_sv, const mu_1_OBJSET_cache& mu_n)
{
/*** begin multisetcount 4 declaration ***/
  int mu__intexpr33 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr33++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 4 declaration ***/
if ( (mu__intexpr33) == (1) )
{
/*** end multisetremove 0 declaration ***/
  mu_1_v_NrCaches_OBJSET_cache_id mu__idexpr34;
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) { mu__idexpr34 = mu_i; mu_sv.multisetremove(mu__idexpr34); };
	}
      if (mu_i == 3-1) break;
    }
/*** end multisetremove 0 declaration ***/
}
};
/*** end procedure declaration ***/

void mu_ClearVector_v_NrCaches_OBJSET_cache(mu_1_v_NrCaches_OBJSET_cache& mu_sv)
{
/*** end multisetremove 1 declaration ***/
  mu_1_v_NrCaches_OBJSET_cache_id mu__idexpr35;
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) { mu__idexpr35 = mu_i; mu_sv.multisetremove(mu__idexpr35); };
	}
      if (mu_i == 3-1) break;
    }
/*** end multisetremove 1 declaration ***/
};
/*** end procedure declaration ***/

mu_0_boolean mu_IsElement_v_NrCaches_OBJSET_cache(mu_1_v_NrCaches_OBJSET_cache& mu_sv,const mu_1_OBJSET_cache& mu_n)
{
/*** begin multisetcount 5 declaration ***/
  int mu__intexpr36 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr36++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 5 declaration ***/
if ( (mu__intexpr36) == (1) )
{
return mu_true;
}
else
{
/*** begin multisetcount 6 declaration ***/
  int mu__intexpr37 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]) == (mu_n) ) mu__intexpr37++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 6 declaration ***/
if ( (mu__intexpr37) == (0) )
{
return mu_false;
}
else
{
Error.Error("Error: Multiple Entries of Sharer in SV multiset");
}
}
return mu_false;
	Error.Error("The end of function IsElement_v_NrCaches_OBJSET_cache reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_HasElement_v_NrCaches_OBJSET_cache(mu_1_v_NrCaches_OBJSET_cache& mu_sv,const mu_1_OBJSET_cache& mu_n)
{
/*** begin multisetcount 7 declaration ***/
  int mu__intexpr38 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( mu_true ) mu__intexpr38++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 7 declaration ***/
if ( (mu__intexpr38) == (0) )
{
return mu_false;
}
return mu_true;
	Error.Error("The end of function HasElement_v_NrCaches_OBJSET_cache reached without returning values.");
};
/*** end function declaration ***/

mu_1_cnt_v_NrCaches_OBJSET_cache mu_VectorCount_v_NrCaches_OBJSET_cache(mu_1_v_NrCaches_OBJSET_cache& mu_sv)
{
/*** begin multisetcount 8 declaration ***/
  int mu__intexpr39 = 0;
  {
  mu_1_v_NrCaches_OBJSET_cache_id mu_i;
  for (mu_i = 0; ; mu_i=mu_i+1)
    {
      if (mu_sv.valid[(int)mu_i].value())
	{
	  if ( (mu_sv[mu_i]>=36 && mu_sv[mu_i]<=38) ) mu__intexpr39++;
	}
      if (mu_i == 3-1) break;
    }
  }
/*** end multisetcount 8 declaration ***/
return mu__intexpr39;
	Error.Error("The end of function VectorCount_v_NrCaches_OBJSET_cache reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_Func_cache(mu_1_Message& mu_inmsg,const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  const int mu_adr = mu_inmsg.mu_adr;
{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
switch ((int) mu_cle.mu_State) {
case mu_cache_I:
cout << ( mu_inmsg.mu_mtype );
cout << "yippeeeeeee \n";
switch ((int) mu_inmsg.mu_mtype) {
default:
return mu_false;
break;
}
break;
case mu_cache_I_load:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetS_Ack:
mu_cle.mu_cl = mu_inmsg.mu_cl;
mu_cle.mu_State = mu_cache_S;
mu_cle.mu_Perm = mu_load;
break;
default:
return mu_false;
break;
}
break;
case mu_cache_I_store:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM_Ack_AD:
mu_cle.mu_acksExpected = mu_inmsg.mu_acksExpected;
if ( (mu_cle.mu_acksExpected) == (mu_cle.mu_acksReceived) )
{
mu_cle.mu_State = mu_cache_M;
mu_cle.mu_Perm = mu_store;
}
else
{
mu_cle.mu_State = mu_cache_I_store_GetM_Ack_AD;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_GetM_Ack_D:
mu_cle.mu_cl = mu_inmsg.mu_cl;
mu_cle.mu_State = mu_cache_M;
mu_cle.mu_Perm = mu_store;
break;
case mu_Inv_Ack:
mu_cle.mu_acksReceived = (mu_cle.mu_acksReceived) + (1);
mu_cle.mu_State = mu_cache_I_store;
mu_cle.mu_Perm = mu_none;
break;
default:
return mu_false;
break;
}
break;
case mu_cache_I_store_GetM_Ack_AD:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_Ack:
mu_cle.mu_acksReceived = (mu_cle.mu_acksReceived) + (1);
if ( (mu_cle.mu_acksExpected) == (mu_cle.mu_acksReceived) )
{
mu_cle.mu_State = mu_cache_M;
mu_cle.mu_Perm = mu_store;
}
else
{
mu_cle.mu_State = mu_cache_I_store_GetM_Ack_AD;
mu_cle.mu_Perm = mu_none;
}
break;
default:
return mu_false;
break;
}
break;
case mu_cache_M:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetM_M:
mu_msg = mu_RespData( mu_adr, mu_GetM_Ack_D, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_I;
mu_cle.mu_Perm = mu_none;
break;
case mu_Fwd_GetS_M:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_O;
mu_cle.mu_Perm = mu_load;
break;
default:
return mu_false;
break;
}
break;
case mu_cache_M_evict:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetM_M:
mu_msg = mu_RespData( mu_adr, mu_GetM_Ack_D, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_M_evict_Fwd_GetM_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_Fwd_GetS_M:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_M_evict_Fwd_GetM_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_Put_Ack:
mu_cle.mu_State = mu_cache_I;
mu_cle.mu_Perm = mu_none;
break;
default:
return mu_false;
break;
}
break;
case mu_cache_M_evict_Fwd_GetM_M:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetM_O:
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_inmsg.mu_acksExpected );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_M_evict_Fwd_GetM_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_Fwd_GetS_O:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_M_evict_Fwd_GetM_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_Put_Ack:
mu_cle.mu_State = mu_cache_I;
mu_cle.mu_Perm = mu_none;
break;
default:
return mu_false;
break;
}
break;
case mu_cache_O:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetM_O:
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_inmsg.mu_acksExpected );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_I;
mu_cle.mu_Perm = mu_none;
break;
case mu_Fwd_GetS_O:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_O;
mu_cle.mu_Perm = mu_load;
break;
default:
return mu_false;
break;
}
break;
case mu_cache_O_store:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Fwd_GetM_O:
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_inmsg.mu_acksExpected );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_I_store;
mu_cle.mu_Perm = mu_none;
break;
case mu_Fwd_GetS_O:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_O_store;
mu_cle.mu_Perm = mu_load;
break;
case mu_GetM_Ack_AD:
mu_cle.mu_acksExpected = mu_inmsg.mu_acksExpected;
if ( (mu_cle.mu_acksExpected) == (mu_cle.mu_acksReceived) )
{
mu_cle.mu_State = mu_cache_M;
mu_cle.mu_Perm = mu_store;
}
else
{
mu_cle.mu_State = mu_cache_O_store_GetM_Ack_AD;
mu_cle.mu_Perm = mu_load;
}
break;
case mu_GetM_Ack_D:
mu_cle.mu_State = mu_cache_M;
mu_cle.mu_Perm = mu_store;
break;
case mu_Inv:
mu_msg = mu_Ack( mu_adr, mu_Inv_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_I_store;
mu_cle.mu_Perm = mu_none;
break;
case mu_Inv_Ack:
mu_cle.mu_acksReceived = (mu_cle.mu_acksReceived) + (1);
mu_cle.mu_State = mu_cache_O_store;
mu_cle.mu_Perm = mu_load;
break;
default:
return mu_false;
break;
}
break;
case mu_cache_O_store_GetM_Ack_AD:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv_Ack:
mu_cle.mu_acksReceived = (mu_cle.mu_acksReceived) + (1);
if ( (mu_cle.mu_acksExpected) == (mu_cle.mu_acksReceived) )
{
mu_cle.mu_State = mu_cache_M;
mu_cle.mu_Perm = mu_store;
}
else
{
mu_cle.mu_State = mu_cache_O_store_GetM_Ack_AD;
mu_cle.mu_Perm = mu_load;
}
break;
default:
return mu_false;
break;
}
break;
case mu_cache_S:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv:
mu_msg = mu_Ack( mu_adr, mu_Inv_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_I;
mu_cle.mu_Perm = mu_none;
break;
default:
return mu_false;
break;
}
break;
case mu_cache_S_evict:
switch ((int) mu_inmsg.mu_mtype) {
case mu_Inv:
mu_msg = mu_Ack( mu_adr, mu_Inv_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_cache_M_evict_Fwd_GetM_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_Put_Ack:
mu_cle.mu_State = mu_cache_I;
mu_cle.mu_Perm = mu_none;
break;
default:
return mu_false;
break;
}
break;
}
}
}
return mu_true;
	Error.Error("The end of function Func_cache reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_Func_directory1(mu_1_Message& mu_inmsg,const mu_1_OBJSET_directory1& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  const int mu_adr = mu_inmsg.mu_adr;
{
  mu_1_ENTRY_directory1& mu_cle = mu_i_directory1[mu_m].mu_CL[mu_adr];
switch ((int) mu_cle.mu_State) {
case mu_directory_I:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM:
mu_msg = mu_RespData( mu_adr, mu_GetM_Ack_D, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_GetS:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_AddElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
break;
case mu_PutM:
mu_msg = mu_Ack( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_cle.mu_cl = mu_inmsg.mu_cl;
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
}
else
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
}
else
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_PutS:
mu_msg = mu_RespData( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directory_M:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM:
mu_msg = mu_Request( mu_adr, mu_Fwd_GetM_M, mu_inmsg.mu_src, mu_cle.mu_owner );
mu_Send_fwd ( mu_msg );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_GetS:
mu_msg = mu_Request( mu_adr, mu_Fwd_GetS_M, mu_inmsg.mu_src, mu_cle.mu_owner );
mu_Send_fwd ( mu_msg );
mu_AddElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
break;
case mu_PutM:
mu_msg = mu_Ack( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_cle.mu_cl = mu_inmsg.mu_cl;
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_PutS:
mu_msg = mu_RespData( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directory_O:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM:
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache ) );
mu_Send_fwd ( mu_msg );
mu_msg = mu_Ack( mu_adr, mu_Inv, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_NrCaches_OBJSET_cache ( mu_msg, mu_cle.mu_cache );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_ClearVector_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache );
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_msg = mu_RespAck( mu_adr, mu_Fwd_GetM_O, mu_inmsg.mu_src, mu_cle.mu_owner, (int)mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache ) );
mu_Send_fwd ( mu_msg );
mu_msg = mu_Ack( mu_adr, mu_Inv, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_NrCaches_OBJSET_cache ( mu_msg, mu_cle.mu_cache );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_ClearVector_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache );
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_GetS:
mu_msg = mu_Request( mu_adr, mu_Fwd_GetS_O, mu_inmsg.mu_src, mu_cle.mu_owner );
mu_Send_fwd ( mu_msg );
mu_AddElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
break;
case mu_PutM:
mu_msg = mu_Ack( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_cle.mu_cl = mu_inmsg.mu_cl;
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
}
else
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
}
}
else
{
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_PutS:
mu_msg = mu_RespData( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directory_S:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM:
if ( mu_IsElement_v_NrCaches_OBJSET_cache( mu_cle.mu_cache, (int)mu_inmsg.mu_src ) )
{
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache ) );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
mu_msg = mu_Ack( mu_adr, mu_Inv, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_NrCaches_OBJSET_cache ( mu_msg, mu_cle.mu_cache );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_ClearVector_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache );
}
else
{
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache ) );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
mu_msg = mu_Ack( mu_adr, mu_Inv, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_NrCaches_OBJSET_cache ( mu_msg, mu_cle.mu_cache );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_ClearVector_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache );
}
break;
case mu_GetS:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_AddElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
break;
case mu_PutM:
mu_msg = mu_Ack( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_cle.mu_cl = mu_inmsg.mu_cl;
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
}
else
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
}
}
else
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_PutS:
mu_msg = mu_RespData( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
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
return mu_true;
	Error.Error("The end of function Func_directory1 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_Func_directory0(mu_1_Message& mu_inmsg,const mu_1_OBJSET_directory0& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  const int mu_adr = mu_inmsg.mu_adr;
{
  mu_1_ENTRY_directory0& mu_cle = mu_i_directory0[mu_m].mu_CL[mu_adr];
switch ((int) mu_cle.mu_State) {
case mu_directory_I:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM:
mu_msg = mu_RespData( mu_adr, mu_GetM_Ack_D, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_GetS:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_AddElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
break;
case mu_PutM:
mu_msg = mu_Ack( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_cle.mu_cl = mu_inmsg.mu_cl;
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
}
else
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
}
else
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_PutS:
mu_msg = mu_RespData( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directory_M:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM:
mu_msg = mu_Request( mu_adr, mu_Fwd_GetM_M, mu_inmsg.mu_src, mu_cle.mu_owner );
mu_Send_fwd ( mu_msg );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
break;
case mu_GetS:
mu_msg = mu_Request( mu_adr, mu_Fwd_GetS_M, mu_inmsg.mu_src, mu_cle.mu_owner );
mu_Send_fwd ( mu_msg );
mu_AddElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
break;
case mu_PutM:
mu_msg = mu_Ack( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_cle.mu_cl = mu_inmsg.mu_cl;
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_PutS:
mu_msg = mu_RespData( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directory_O:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM:
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache ) );
mu_Send_fwd ( mu_msg );
mu_msg = mu_Ack( mu_adr, mu_Inv, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_NrCaches_OBJSET_cache ( mu_msg, mu_cle.mu_cache );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_ClearVector_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache );
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_msg = mu_RespAck( mu_adr, mu_Fwd_GetM_O, mu_inmsg.mu_src, mu_cle.mu_owner, (int)mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache ) );
mu_Send_fwd ( mu_msg );
mu_msg = mu_Ack( mu_adr, mu_Inv, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_NrCaches_OBJSET_cache ( mu_msg, mu_cle.mu_cache );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_ClearVector_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache );
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_GetS:
mu_msg = mu_Request( mu_adr, mu_Fwd_GetS_O, mu_inmsg.mu_src, mu_cle.mu_owner );
mu_Send_fwd ( mu_msg );
mu_AddElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
break;
case mu_PutM:
mu_msg = mu_Ack( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_cle.mu_cl = mu_inmsg.mu_cl;
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
}
else
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
}
}
else
{
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_PutS:
mu_msg = mu_RespData( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_O;
mu_cle.mu_Perm = mu_none;
}
break;
default:
return mu_false;
break;
}
break;
case mu_directory_S:
switch ((int) mu_inmsg.mu_mtype) {
case mu_GetM:
if ( mu_IsElement_v_NrCaches_OBJSET_cache( mu_cle.mu_cache, (int)mu_inmsg.mu_src ) )
{
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache ) );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
mu_msg = mu_Ack( mu_adr, mu_Inv, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_NrCaches_OBJSET_cache ( mu_msg, mu_cle.mu_cache );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_ClearVector_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache );
}
else
{
mu_msg = mu_RespDataAck( mu_adr, mu_GetM_Ack_AD, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl, (int)mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache ) );
mu_Send_resp ( mu_msg );
mu_cle.mu_State = mu_directory_M;
mu_cle.mu_Perm = mu_none;
mu_msg = mu_Ack( mu_adr, mu_Inv, mu_inmsg.mu_src, mu_inmsg.mu_src );
mu_Multicast_fwd_v_NrCaches_OBJSET_cache ( mu_msg, mu_cle.mu_cache );
mu_cle.mu_owner = mu_inmsg.mu_src;
mu_ClearVector_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache );
}
break;
case mu_GetS:
mu_msg = mu_RespData( mu_adr, mu_GetS_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_resp ( mu_msg );
mu_AddElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
break;
case mu_PutM:
mu_msg = mu_Ack( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_cle.mu_owner) == (mu_inmsg.mu_src) )
{
mu_cle.mu_cl = mu_inmsg.mu_cl;
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
mu_cle.mu_cl = mu_inmsg.mu_cl;
}
else
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
}
}
else
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
}
break;
case mu_PutS:
mu_msg = mu_RespData( mu_adr, mu_Put_Ack, (int)mu_m, mu_inmsg.mu_src, mu_cle.mu_cl );
mu_Send_fwd ( mu_msg );
mu_RemoveElement_v_NrCaches_OBJSET_cache ( mu_cle.mu_cache, (int)mu_inmsg.mu_src );
if ( (mu_VectorCount_v_NrCaches_OBJSET_cache( mu_cle.mu_cache )) == (0) )
{
mu_cle.mu_State = mu_directory_I;
mu_cle.mu_Perm = mu_none;
}
else
{
mu_cle.mu_State = mu_directory_S;
mu_cle.mu_Perm = mu_none;
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
return mu_true;
	Error.Error("The end of function Func_directory0 reached without returning values.");
};
/*** end function declaration ***/

void mu_SEND_cache_I_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
if ( (mu_adr) == (0) )
{
mu_msg = mu_Request( mu_adr, mu_GetS, (int)mu_m, (int)mu_directory0 );
}
else
{
mu_msg = mu_Request( mu_adr, mu_GetS, (int)mu_m, (int)mu_directory1 );
}
mu_Send_req ( mu_msg );
mu_cle.mu_State = mu_cache_I_load;
mu_cle.mu_Perm = mu_none;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_I_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
if ( (mu_adr) == (0) )
{
mu_msg = mu_Request( mu_adr, mu_GetM, (int)mu_m, (int)mu_directory0 );
}
else
{
mu_msg = mu_Request( mu_adr, mu_GetM, (int)mu_m, (int)mu_directory1 );
}
mu_Send_req ( mu_msg );
mu_cle.mu_acksReceived = 0;
mu_cle.mu_State = mu_cache_I_store;
mu_cle.mu_Perm = mu_none;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_M_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
if ( (mu_adr) == (0) )
{
mu_msg = mu_RespData( mu_adr, mu_PutM, (int)mu_m, (int)mu_directory0, mu_cle.mu_cl );
}
else
{
mu_msg = mu_RespData( mu_adr, mu_PutM, (int)mu_m, (int)mu_directory1, mu_cle.mu_cl );
}
mu_Send_req ( mu_msg );
mu_cle.mu_State = mu_cache_M_evict;
mu_cle.mu_Perm = mu_none;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_M_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_cle.mu_State = mu_cache_M;
mu_cle.mu_Perm = mu_store;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_M_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_cle.mu_State = mu_cache_M;
mu_cle.mu_Perm = mu_store;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_O_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
if ( (mu_adr) == (0) )
{
mu_msg = mu_RespData( mu_adr, mu_PutM, (int)mu_m, (int)mu_directory0, mu_cle.mu_cl );
}
else
{
mu_msg = mu_RespData( mu_adr, mu_PutM, (int)mu_m, (int)mu_directory1, mu_cle.mu_cl );
}
mu_Send_req ( mu_msg );
mu_cle.mu_State = mu_cache_M_evict_Fwd_GetM_M;
mu_cle.mu_Perm = mu_none;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_O_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_cle.mu_State = mu_cache_O;
mu_cle.mu_Perm = mu_load;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_O_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
if ( (mu_adr) == (0) )
{
mu_msg = mu_Request( mu_adr, mu_GetM, (int)mu_m, (int)mu_directory0 );
}
else
{
mu_msg = mu_Request( mu_adr, mu_GetM, (int)mu_m, (int)mu_directory1 );
}
mu_Send_req ( mu_msg );
mu_cle.mu_acksReceived = 0;
mu_cle.mu_State = mu_cache_O_store;
mu_cle.mu_Perm = mu_load;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_S_evict(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
if ( (mu_adr) == (0) )
{
mu_msg = mu_Request( mu_adr, mu_PutS, (int)mu_m, (int)mu_directory0 );
}
else
{
mu_msg = mu_Request( mu_adr, mu_PutS, (int)mu_m, (int)mu_directory1 );
}
mu_Send_req ( mu_msg );
mu_cle.mu_State = mu_cache_S_evict;
mu_cle.mu_Perm = mu_none;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_S_load(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_cle.mu_State = mu_cache_S;
mu_cle.mu_Perm = mu_load;
}
};
/*** end procedure declaration ***/

void mu_SEND_cache_S_store(const mu_1_Address& mu_adr, const mu_1_OBJSET_cache& mu_m)
{
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

{
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
if ( (mu_adr) == (0) )
{
mu_msg = mu_Request( mu_adr, mu_GetM, (int)mu_m, (int)mu_directory0 );
}
else
{
mu_msg = mu_Request( mu_adr, mu_GetM, (int)mu_m, (int)mu_directory1 );
}
mu_Send_req ( mu_msg );
mu_cle.mu_acksReceived = 0;
mu_cle.mu_State = mu_cache_O_store;
mu_cle.mu_Perm = mu_load;
}
};
/*** end procedure declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_i_cache.clear();
  mu_i_directory0.clear();
  mu_i_directory1.clear();
  mu_fwd.clear();
  mu_cnt_fwd.clear();
  mu_resp.clear();
  mu_cnt_resp.clear();
  mu_req.clear();
  mu_cnt_req.clear();
  mu_buf_fwd.clear();
  mu_buf_resp.clear();
  mu_buf_req.clear();
  mu_lock_set_cache.clear();
}
void world_class::undefine()
{
  mu_i_cache.undefine();
  mu_i_directory0.undefine();
  mu_i_directory1.undefine();
  mu_fwd.undefine();
  mu_cnt_fwd.undefine();
  mu_resp.undefine();
  mu_cnt_resp.undefine();
  mu_req.undefine();
  mu_cnt_req.undefine();
  mu_buf_fwd.undefine();
  mu_buf_resp.undefine();
  mu_buf_req.undefine();
  mu_lock_set_cache.undefine();
}
void world_class::reset()
{
  mu_i_cache.reset();
  mu_i_directory0.reset();
  mu_i_directory1.reset();
  mu_fwd.reset();
  mu_cnt_fwd.reset();
  mu_resp.reset();
  mu_cnt_resp.reset();
  mu_req.reset();
  mu_cnt_req.reset();
  mu_buf_fwd.reset();
  mu_buf_resp.reset();
  mu_buf_req.reset();
  mu_lock_set_cache.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_i_cache.print();
  mu_i_directory0.print();
  mu_i_directory1.print();
  mu_fwd.print();
  mu_cnt_fwd.print();
  mu_resp.print();
  mu_cnt_resp.print();
  mu_req.print();
  mu_cnt_req.print();
  mu_buf_fwd.print();
  mu_buf_resp.print();
  mu_buf_req.print();
  mu_lock_set_cache.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_i_cache.print_statistic();
  mu_i_directory0.print_statistic();
  mu_i_directory1.print_statistic();
  mu_fwd.print_statistic();
  mu_cnt_fwd.print_statistic();
  mu_resp.print_statistic();
  mu_cnt_resp.print_statistic();
  mu_req.print_statistic();
  mu_cnt_req.print_statistic();
  mu_buf_fwd.print_statistic();
  mu_buf_resp.print_statistic();
  mu_buf_req.print_statistic();
  mu_lock_set_cache.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_i_cache.print_diff(prevstate);
    mu_i_directory0.print_diff(prevstate);
    mu_i_directory1.print_diff(prevstate);
    mu_fwd.print_diff(prevstate);
    mu_cnt_fwd.print_diff(prevstate);
    mu_resp.print_diff(prevstate);
    mu_cnt_resp.print_diff(prevstate);
    mu_req.print_diff(prevstate);
    mu_cnt_req.print_diff(prevstate);
    mu_buf_fwd.print_diff(prevstate);
    mu_buf_resp.print_diff(prevstate);
    mu_buf_req.print_diff(prevstate);
    mu_lock_set_cache.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_i_cache.to_state( newstate );
  mu_i_directory0.to_state( newstate );
  mu_i_directory1.to_state( newstate );
  mu_fwd.to_state( newstate );
  mu_cnt_fwd.to_state( newstate );
  mu_resp.to_state( newstate );
  mu_cnt_resp.to_state( newstate );
  mu_req.to_state( newstate );
  mu_cnt_req.to_state( newstate );
  mu_buf_fwd.to_state( newstate );
  mu_buf_resp.to_state( newstate );
  mu_buf_req.to_state( newstate );
  mu_lock_set_cache.to_state( newstate );
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
    static mu__subrange_91 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
    return tsprintf("Receive req, n:%s", mu_n.Name());
  }
  bool Condition(unsigned r)
  {
    static mu__subrange_91 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
  mu_1_Message& mu_msg = mu_req[mu_n][0];
    return (mu_cnt_req[mu_n]) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu__subrange_91 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
    while (what_rule < 2 )
      {
	if ( ( TRUE  ) ) {
  mu_1_Message& mu_msg = mu_req[mu_n][0];
	      if ((mu_cnt_req[mu_n]) > (0)) {
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
    mu_n.value((r % 2) + 0);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu__subrange_91 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
  mu_1_Message& mu_msg = mu_req[mu_n][0];
if ( mu_ENABLE_QS )
{
if ( (mu_msg.mu_dst>=39 && mu_msg.mu_dst<=39) )
{
if ( mu_PushQueue( mu_buf_req, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_req ( (int)mu_n );
}
}
if ( (mu_msg.mu_dst>=36 && mu_msg.mu_dst<=38) )
{
if ( mu_PushQueue( mu_buf_req, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_req ( (int)mu_n );
}
}
if ( (mu_msg.mu_dst>=40 && mu_msg.mu_dst<=40) )
{
if ( mu_PushQueue( mu_buf_req, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_req ( (int)mu_n );
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
    static mu__subrange_90 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
    return tsprintf("Receive resp, n:%s", mu_n.Name());
  }
  bool Condition(unsigned r)
  {
    static mu__subrange_90 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
  mu_1_Message& mu_msg = mu_resp[mu_n][0];
    return (mu_cnt_resp[mu_n]) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2;
    static mu__subrange_90 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
    while (what_rule < 4 )
      {
	if ( ( TRUE  ) ) {
  mu_1_Message& mu_msg = mu_resp[mu_n][0];
	      if ((mu_cnt_resp[mu_n]) > (0)) {
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
    r = what_rule - 2;
    mu_n.value((r % 2) + 0);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu__subrange_90 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
  mu_1_Message& mu_msg = mu_resp[mu_n][0];
if ( mu_ENABLE_QS )
{
if ( (mu_msg.mu_dst>=39 && mu_msg.mu_dst<=39) )
{
if ( mu_PushQueue( mu_buf_resp, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_resp ( (int)mu_n );
}
}
if ( (mu_msg.mu_dst>=36 && mu_msg.mu_dst<=38) )
{
if ( mu_PushQueue( mu_buf_resp, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_resp ( (int)mu_n );
}
}
if ( (mu_msg.mu_dst>=40 && mu_msg.mu_dst<=40) )
{
if ( mu_PushQueue( mu_buf_resp, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_resp ( (int)mu_n );
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
    static mu__subrange_89 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
    return tsprintf("Receive fwd, n:%s", mu_n.Name());
  }
  bool Condition(unsigned r)
  {
    static mu__subrange_89 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
  mu_1_Message& mu_msg = mu_fwd[mu_n][0];
    return (mu_cnt_fwd[mu_n]) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4;
    static mu__subrange_89 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
    while (what_rule < 6 )
      {
	if ( ( TRUE  ) ) {
  mu_1_Message& mu_msg = mu_fwd[mu_n][0];
	      if ((mu_cnt_fwd[mu_n]) > (0)) {
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
    r = what_rule - 4;
    mu_n.value((r % 2) + 0);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu__subrange_89 mu_n;
    mu_n.value((r % 2) + 0);
    r = r / 2;
  mu_1_Message& mu_msg = mu_fwd[mu_n][0];
if ( mu_ENABLE_QS )
{
if ( (mu_msg.mu_dst>=39 && mu_msg.mu_dst<=39) )
{
if ( mu_PushQueue( mu_buf_fwd, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_fwd ( (int)mu_n );
}
}
if ( (mu_msg.mu_dst>=36 && mu_msg.mu_dst<=38) )
{
if ( mu_PushQueue( mu_buf_fwd, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_fwd ( (int)mu_n );
}
}
if ( (mu_msg.mu_dst>=40 && mu_msg.mu_dst<=40) )
{
if ( mu_PushQueue( mu_buf_fwd, mu_msg.mu_dst, mu_msg ) )
{
mu_Pop_fwd ( (int)mu_n );
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
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
    return tsprintf("buf_req, n:%s", mu_n.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
  mu_1_FIFO& mu_p = mu_buf_req[mu_n];
    return (mu_p.mu_QueueInd) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6;
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
    while (what_rule < 11 )
      {
	if ( ( TRUE  ) ) {
  mu_1_FIFO& mu_p = mu_buf_req[mu_n];
	      if ((mu_p.mu_QueueInd) > (0)) {
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
    r = what_rule - 6;
    mu_n.unionassign(r % 5);
    r = r / 5;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
  mu_1_FIFO& mu_p = mu_buf_req[mu_n];
{
  mu_1_Message& mu_msg = mu_p.mu_Queue[0];
if ( (mu_n>=39 && mu_n<=39) )
{
if ( mu_Func_directory0( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_req, mu_n );
}
}
if ( (mu_n>=40 && mu_n<=40) )
{
if ( mu_Func_directory1( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_req, mu_n );
}
}
if ( (mu_n>=36 && mu_n<=38) )
{
if ( mu_Func_cache( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_req, mu_n );
}
}
}
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
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
    return tsprintf("buf_resp, n:%s", mu_n.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
  mu_1_FIFO& mu_p = mu_buf_resp[mu_n];
    return (mu_p.mu_QueueInd) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11;
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
    while (what_rule < 16 )
      {
	if ( ( TRUE  ) ) {
  mu_1_FIFO& mu_p = mu_buf_resp[mu_n];
	      if ((mu_p.mu_QueueInd) > (0)) {
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
    r = what_rule - 11;
    mu_n.unionassign(r % 5);
    r = r / 5;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
  mu_1_FIFO& mu_p = mu_buf_resp[mu_n];
{
  mu_1_Message& mu_msg = mu_p.mu_Queue[0];
if ( (mu_n>=39 && mu_n<=39) )
{
if ( mu_Func_directory0( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_resp, mu_n );
}
}
if ( (mu_n>=40 && mu_n<=40) )
{
if ( mu_Func_directory1( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_resp, mu_n );
}
}
if ( (mu_n>=36 && mu_n<=38) )
{
if ( mu_Func_cache( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_resp, mu_n );
}
}
}
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
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
    return tsprintf("buf_fwd, n:%s", mu_n.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
  mu_1_FIFO& mu_p = mu_buf_fwd[mu_n];
    return (mu_p.mu_QueueInd) > (0);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16;
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
    while (what_rule < 21 )
      {
	if ( ( TRUE  ) ) {
  mu_1_FIFO& mu_p = mu_buf_fwd[mu_n];
	      if ((mu_p.mu_QueueInd) > (0)) {
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
    r = what_rule - 16;
    mu_n.unionassign(r % 5);
    r = r / 5;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Machines mu_n;
    mu_n.unionassign(r % 5);
    r = r / 5;
  mu_1_FIFO& mu_p = mu_buf_fwd[mu_n];
{
  mu_1_Message& mu_msg = mu_p.mu_Queue[0];
if ( (mu_n>=39 && mu_n<=39) )
{
if ( mu_Func_directory0( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_fwd, mu_n );
}
}
if ( (mu_n>=40 && mu_n<=40) )
{
if ( mu_Func_directory1( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_fwd, mu_n );
}
}
if ( (mu_n>=36 && mu_n<=38) )
{
if ( mu_Func_cache( mu_msg, (int)mu_n ) )
{
mu_PopQueue ( mu_buf_fwd, mu_n );
}
}
}
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("Unlocking cache_M, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr40;
bool mu__boolexpr41;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr41 = FALSE ;
  else {
/*** begin multisetcount 27 declaration ***/
  int mu__intexpr42 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr42++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 27 declaration ***/
  mu__boolexpr41 = (!((mu__intexpr42) == (0))) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
bool mu__quant43; 
mu__quant43 = TRUE;
{
for(int mu_d = 40; mu_d <= 40; mu_d++) {
bool mu__boolexpr44;
bool mu__boolexpr45;
bool mu__boolexpr46;
  if ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr46 = TRUE ;
  else {
  mu__boolexpr46 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr46) mu__boolexpr45 = TRUE ;
  else {
  mu__boolexpr45 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr45) mu__boolexpr44 = TRUE ;
  else {
  mu__boolexpr44 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr44) )
  { mu__quant43 = FALSE; break; }
};
};
  mu__boolexpr40 = (mu__quant43) ; 
}
    return mu__boolexpr40;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 21;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 27 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr47;
bool mu__boolexpr48;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr48 = FALSE ;
  else {
/*** begin multisetcount 27 declaration ***/
  int mu__intexpr49 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr49++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 27 declaration ***/
  mu__boolexpr48 = (!((mu__intexpr49) == (0))) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
bool mu__quant50; 
mu__quant50 = TRUE;
{
for(int mu_d = 40; mu_d <= 40; mu_d++) {
bool mu__boolexpr51;
bool mu__boolexpr52;
bool mu__boolexpr53;
  if ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr53 = TRUE ;
  else {
  mu__boolexpr53 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr53) mu__boolexpr52 = TRUE ;
  else {
  mu__boolexpr52 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr52) mu__boolexpr51 = TRUE ;
  else {
  mu__boolexpr51 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr51) )
  { mu__quant50 = FALSE; break; }
};
};
  mu__boolexpr47 = (mu__quant50) ; 
}
	      if (mu__boolexpr47) {
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
/*** end multisetremove 9 declaration ***/
  mu_1__type_11_id mu__idexpr54;
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) { mu__idexpr54 = mu_l; mu_lock_set_cache.multisetremove(mu__idexpr54); };
	}
      if (mu_l == 1-1) break;
    }
/*** end multisetremove 9 declaration ***/
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("Unlocking cache_O, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr55;
bool mu__boolexpr56;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr56 = FALSE ;
  else {
/*** begin multisetcount 26 declaration ***/
  int mu__intexpr57 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr57++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 26 declaration ***/
  mu__boolexpr56 = (!((mu__intexpr57) == (0))) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
bool mu__quant58; 
mu__quant58 = TRUE;
{
for(int mu_d = 40; mu_d <= 40; mu_d++) {
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
  if ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr61 = TRUE ;
  else {
  mu__boolexpr61 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr61) mu__boolexpr60 = TRUE ;
  else {
  mu__boolexpr60 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr60) mu__boolexpr59 = TRUE ;
  else {
  mu__boolexpr59 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr59) )
  { mu__quant58 = FALSE; break; }
};
};
  mu__boolexpr55 = (mu__quant58) ; 
}
    return mu__boolexpr55;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 27;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 33 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr62;
bool mu__boolexpr63;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr63 = FALSE ;
  else {
/*** begin multisetcount 26 declaration ***/
  int mu__intexpr64 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr64++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 26 declaration ***/
  mu__boolexpr63 = (!((mu__intexpr64) == (0))) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
bool mu__quant65; 
mu__quant65 = TRUE;
{
for(int mu_d = 40; mu_d <= 40; mu_d++) {
bool mu__boolexpr66;
bool mu__boolexpr67;
bool mu__boolexpr68;
  if ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr68 = TRUE ;
  else {
  mu__boolexpr68 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr68) mu__boolexpr67 = TRUE ;
  else {
  mu__boolexpr67 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr67) mu__boolexpr66 = TRUE ;
  else {
  mu__boolexpr66 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr66) )
  { mu__quant65 = FALSE; break; }
};
};
  mu__boolexpr62 = (mu__quant65) ; 
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
    r = what_rule - 27;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
/*** end multisetremove 8 declaration ***/
  mu_1__type_11_id mu__idexpr69;
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) { mu__idexpr69 = mu_l; mu_lock_set_cache.multisetremove(mu__idexpr69); };
	}
      if (mu_l == 1-1) break;
    }
/*** end multisetremove 8 declaration ***/
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("Unlocking cache_S, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr70;
bool mu__boolexpr71;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr71 = FALSE ;
  else {
/*** begin multisetcount 25 declaration ***/
  int mu__intexpr72 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr72++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 25 declaration ***/
  mu__boolexpr71 = (!((mu__intexpr72) == (0))) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
bool mu__quant73; 
mu__quant73 = TRUE;
{
for(int mu_d = 40; mu_d <= 40; mu_d++) {
bool mu__boolexpr74;
bool mu__boolexpr75;
bool mu__boolexpr76;
  if ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr76 = TRUE ;
  else {
  mu__boolexpr76 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr76) mu__boolexpr75 = TRUE ;
  else {
  mu__boolexpr75 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr75) mu__boolexpr74 = TRUE ;
  else {
  mu__boolexpr74 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr74) )
  { mu__quant73 = FALSE; break; }
};
};
  mu__boolexpr70 = (mu__quant73) ; 
}
    return mu__boolexpr70;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 33;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 39 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr77;
bool mu__boolexpr78;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr78 = FALSE ;
  else {
/*** begin multisetcount 25 declaration ***/
  int mu__intexpr79 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr79++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 25 declaration ***/
  mu__boolexpr78 = (!((mu__intexpr79) == (0))) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
bool mu__quant80; 
mu__quant80 = TRUE;
{
for(int mu_d = 40; mu_d <= 40; mu_d++) {
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr83 = TRUE ;
  else {
  mu__boolexpr83 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr83) mu__boolexpr82 = TRUE ;
  else {
  mu__boolexpr82 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr82) mu__boolexpr81 = TRUE ;
  else {
  mu__boolexpr81 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr81) )
  { mu__quant80 = FALSE; break; }
};
};
  mu__boolexpr77 = (mu__quant80) ; 
}
	      if (mu__boolexpr77) {
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
/*** end multisetremove 7 declaration ***/
  mu_1__type_11_id mu__idexpr84;
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) { mu__idexpr84 = mu_l; mu_lock_set_cache.multisetremove(mu__idexpr84); };
	}
      if (mu_l == 1-1) break;
    }
/*** end multisetremove 7 declaration ***/
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("Unlocking cache_I, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr85;
bool mu__boolexpr86;
  if (!((mu_cle.mu_State) == (mu_cache_I))) mu__boolexpr86 = FALSE ;
  else {
/*** begin multisetcount 24 declaration ***/
  int mu__intexpr87 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr87++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 24 declaration ***/
  mu__boolexpr86 = (!((mu__intexpr87) == (0))) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
bool mu__quant88; 
mu__quant88 = TRUE;
{
for(int mu_d = 40; mu_d <= 40; mu_d++) {
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
  if ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr91 = TRUE ;
  else {
  mu__boolexpr91 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr91) mu__boolexpr90 = TRUE ;
  else {
  mu__boolexpr90 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr90) mu__boolexpr89 = TRUE ;
  else {
  mu__boolexpr89 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr89) )
  { mu__quant88 = FALSE; break; }
};
};
  mu__boolexpr85 = (mu__quant88) ; 
}
    return mu__boolexpr85;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 39;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 45 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr92;
bool mu__boolexpr93;
  if (!((mu_cle.mu_State) == (mu_cache_I))) mu__boolexpr93 = FALSE ;
  else {
/*** begin multisetcount 24 declaration ***/
  int mu__intexpr94 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr94++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 24 declaration ***/
  mu__boolexpr93 = (!((mu__intexpr94) == (0))) ; 
}
  if (!(mu__boolexpr93)) mu__boolexpr92 = FALSE ;
  else {
bool mu__quant95; 
mu__quant95 = TRUE;
{
for(int mu_d = 40; mu_d <= 40; mu_d++) {
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
  if ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr98 = TRUE ;
  else {
  mu__boolexpr98 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr98) mu__boolexpr97 = TRUE ;
  else {
  mu__boolexpr97 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr97) mu__boolexpr96 = TRUE ;
  else {
  mu__boolexpr96 = ((mu_i_directory1[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr96) )
  { mu__quant95 = FALSE; break; }
};
};
  mu__boolexpr92 = (mu__quant95) ; 
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
    r = what_rule - 39;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
/*** end multisetremove 6 declaration ***/
  mu_1__type_11_id mu__idexpr99;
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) { mu__idexpr99 = mu_l; mu_lock_set_cache.multisetremove(mu__idexpr99); };
	}
      if (mu_l == 1-1) break;
    }
/*** end multisetremove 6 declaration ***/
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("Unlocking cache_M, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr100;
bool mu__boolexpr101;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr101 = FALSE ;
  else {
/*** begin multisetcount 23 declaration ***/
  int mu__intexpr102 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr102++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 23 declaration ***/
  mu__boolexpr101 = (!((mu__intexpr102) == (0))) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
bool mu__quant103; 
mu__quant103 = TRUE;
{
for(int mu_d = 39; mu_d <= 39; mu_d++) {
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
  if ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr106 = TRUE ;
  else {
  mu__boolexpr106 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr106) mu__boolexpr105 = TRUE ;
  else {
  mu__boolexpr105 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr105) mu__boolexpr104 = TRUE ;
  else {
  mu__boolexpr104 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr104) )
  { mu__quant103 = FALSE; break; }
};
};
  mu__boolexpr100 = (mu__quant103) ; 
}
    return mu__boolexpr100;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 45;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 51 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr107;
bool mu__boolexpr108;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr108 = FALSE ;
  else {
/*** begin multisetcount 23 declaration ***/
  int mu__intexpr109 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr109++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 23 declaration ***/
  mu__boolexpr108 = (!((mu__intexpr109) == (0))) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
bool mu__quant110; 
mu__quant110 = TRUE;
{
for(int mu_d = 39; mu_d <= 39; mu_d++) {
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
  if ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr113 = TRUE ;
  else {
  mu__boolexpr113 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr113) mu__boolexpr112 = TRUE ;
  else {
  mu__boolexpr112 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr112) mu__boolexpr111 = TRUE ;
  else {
  mu__boolexpr111 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr111) )
  { mu__quant110 = FALSE; break; }
};
};
  mu__boolexpr107 = (mu__quant110) ; 
}
	      if (mu__boolexpr107) {
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
    r = what_rule - 45;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
/*** end multisetremove 5 declaration ***/
  mu_1__type_11_id mu__idexpr114;
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) { mu__idexpr114 = mu_l; mu_lock_set_cache.multisetremove(mu__idexpr114); };
	}
      if (mu_l == 1-1) break;
    }
/*** end multisetremove 5 declaration ***/
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("Unlocking cache_O, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr115;
bool mu__boolexpr116;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr116 = FALSE ;
  else {
/*** begin multisetcount 22 declaration ***/
  int mu__intexpr117 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr117++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 22 declaration ***/
  mu__boolexpr116 = (!((mu__intexpr117) == (0))) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
bool mu__quant118; 
mu__quant118 = TRUE;
{
for(int mu_d = 39; mu_d <= 39; mu_d++) {
bool mu__boolexpr119;
bool mu__boolexpr120;
bool mu__boolexpr121;
  if ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr121 = TRUE ;
  else {
  mu__boolexpr121 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr121) mu__boolexpr120 = TRUE ;
  else {
  mu__boolexpr120 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr120) mu__boolexpr119 = TRUE ;
  else {
  mu__boolexpr119 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr119) )
  { mu__quant118 = FALSE; break; }
};
};
  mu__boolexpr115 = (mu__quant118) ; 
}
    return mu__boolexpr115;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 51;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 57 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr122;
bool mu__boolexpr123;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr123 = FALSE ;
  else {
/*** begin multisetcount 22 declaration ***/
  int mu__intexpr124 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr124++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 22 declaration ***/
  mu__boolexpr123 = (!((mu__intexpr124) == (0))) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
bool mu__quant125; 
mu__quant125 = TRUE;
{
for(int mu_d = 39; mu_d <= 39; mu_d++) {
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
  if ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr128 = TRUE ;
  else {
  mu__boolexpr128 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr128) mu__boolexpr127 = TRUE ;
  else {
  mu__boolexpr127 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr127) mu__boolexpr126 = TRUE ;
  else {
  mu__boolexpr126 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr126) )
  { mu__quant125 = FALSE; break; }
};
};
  mu__boolexpr122 = (mu__quant125) ; 
}
	      if (mu__boolexpr122) {
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
    r = what_rule - 51;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
/*** end multisetremove 4 declaration ***/
  mu_1__type_11_id mu__idexpr129;
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) { mu__idexpr129 = mu_l; mu_lock_set_cache.multisetremove(mu__idexpr129); };
	}
      if (mu_l == 1-1) break;
    }
/*** end multisetremove 4 declaration ***/
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("Unlocking cache_S, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr130;
bool mu__boolexpr131;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr131 = FALSE ;
  else {
/*** begin multisetcount 21 declaration ***/
  int mu__intexpr132 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr132++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 21 declaration ***/
  mu__boolexpr131 = (!((mu__intexpr132) == (0))) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
bool mu__quant133; 
mu__quant133 = TRUE;
{
for(int mu_d = 39; mu_d <= 39; mu_d++) {
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
  if ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr136 = TRUE ;
  else {
  mu__boolexpr136 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr136) mu__boolexpr135 = TRUE ;
  else {
  mu__boolexpr135 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr135) mu__boolexpr134 = TRUE ;
  else {
  mu__boolexpr134 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr134) )
  { mu__quant133 = FALSE; break; }
};
};
  mu__boolexpr130 = (mu__quant133) ; 
}
    return mu__boolexpr130;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 57;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 63 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr138 = FALSE ;
  else {
/*** begin multisetcount 21 declaration ***/
  int mu__intexpr139 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr139++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 21 declaration ***/
  mu__boolexpr138 = (!((mu__intexpr139) == (0))) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
bool mu__quant140; 
mu__quant140 = TRUE;
{
for(int mu_d = 39; mu_d <= 39; mu_d++) {
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
  if ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr143 = TRUE ;
  else {
  mu__boolexpr143 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr143) mu__boolexpr142 = TRUE ;
  else {
  mu__boolexpr142 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr142) mu__boolexpr141 = TRUE ;
  else {
  mu__boolexpr141 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr141) )
  { mu__quant140 = FALSE; break; }
};
};
  mu__boolexpr137 = (mu__quant140) ; 
}
	      if (mu__boolexpr137) {
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
    r = what_rule - 57;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
/*** end multisetremove 3 declaration ***/
  mu_1__type_11_id mu__idexpr144;
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) { mu__idexpr144 = mu_l; mu_lock_set_cache.multisetremove(mu__idexpr144); };
	}
      if (mu_l == 1-1) break;
    }
/*** end multisetremove 3 declaration ***/
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("Unlocking cache_I, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr145;
bool mu__boolexpr146;
  if (!((mu_cle.mu_State) == (mu_cache_I))) mu__boolexpr146 = FALSE ;
  else {
/*** begin multisetcount 20 declaration ***/
  int mu__intexpr147 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr147++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 20 declaration ***/
  mu__boolexpr146 = (!((mu__intexpr147) == (0))) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
bool mu__quant148; 
mu__quant148 = TRUE;
{
for(int mu_d = 39; mu_d <= 39; mu_d++) {
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
  if ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr151 = TRUE ;
  else {
  mu__boolexpr151 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr151) mu__boolexpr150 = TRUE ;
  else {
  mu__boolexpr150 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr150) mu__boolexpr149 = TRUE ;
  else {
  mu__boolexpr149 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr149) )
  { mu__quant148 = FALSE; break; }
};
};
  mu__boolexpr145 = (mu__quant148) ; 
}
    return mu__boolexpr145;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 63;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 69 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr152;
bool mu__boolexpr153;
  if (!((mu_cle.mu_State) == (mu_cache_I))) mu__boolexpr153 = FALSE ;
  else {
/*** begin multisetcount 20 declaration ***/
  int mu__intexpr154 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( (mu_lock_set_cache[mu_l]) == (mu_m) ) mu__intexpr154++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 20 declaration ***/
  mu__boolexpr153 = (!((mu__intexpr154) == (0))) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
bool mu__quant155; 
mu__quant155 = TRUE;
{
for(int mu_d = 39; mu_d <= 39; mu_d++) {
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
  if ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_I)) mu__boolexpr158 = TRUE ;
  else {
  mu__boolexpr158 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_S)) ; 
}
  if (mu__boolexpr158) mu__boolexpr157 = TRUE ;
  else {
  mu__boolexpr157 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_O)) ; 
}
  if (mu__boolexpr157) mu__boolexpr156 = TRUE ;
  else {
  mu__boolexpr156 = ((mu_i_directory0[mu_d].mu_CL[mu_adr].mu_State) == (mu_directory_M)) ; 
}
if ( !(mu__boolexpr156) )
  { mu__quant155 = FALSE; break; }
};
};
  mu__boolexpr152 = (mu__quant155) ; 
}
	      if (mu__boolexpr152) {
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
/*** end multisetremove 2 declaration ***/
  mu_1__type_11_id mu__idexpr159;
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) { mu__idexpr159 = mu_l; mu_lock_set_cache.multisetremove(mu__idexpr159); };
	}
      if (mu_l == 1-1) break;
    }
/*** end multisetremove 2 declaration ***/
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_S_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr160;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr160 = FALSE ;
  else {
/*** begin multisetcount 19 declaration ***/
  int mu__intexpr161 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr161++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 19 declaration ***/
  mu__boolexpr160 = ((mu__intexpr161) == (0)) ; 
}
    return mu__boolexpr160;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 69;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 75 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr162;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr162 = FALSE ;
  else {
/*** begin multisetcount 19 declaration ***/
  int mu__intexpr163 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr163++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 19 declaration ***/
  mu__boolexpr162 = ((mu__intexpr163) == (0)) ; 
}
	      if (mu__boolexpr162) {
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
    r = what_rule - 69;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_S_store ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_S_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr164;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr164 = FALSE ;
  else {
/*** begin multisetcount 18 declaration ***/
  int mu__intexpr165 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr165++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 18 declaration ***/
  mu__boolexpr164 = ((mu__intexpr165) == (0)) ; 
}
    return mu__boolexpr164;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 75;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 81 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr166;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr166 = FALSE ;
  else {
/*** begin multisetcount 18 declaration ***/
  int mu__intexpr167 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr167++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 18 declaration ***/
  mu__boolexpr166 = ((mu__intexpr167) == (0)) ; 
}
	      if (mu__boolexpr166) {
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
    r = what_rule - 75;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_S_load ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_S_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr168;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr168 = FALSE ;
  else {
/*** begin multisetcount 17 declaration ***/
  int mu__intexpr169 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr169++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 17 declaration ***/
  mu__boolexpr168 = ((mu__intexpr169) == (0)) ; 
}
    return mu__boolexpr168;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 81;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 87 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr170;
  if (!((mu_cle.mu_State) == (mu_cache_S))) mu__boolexpr170 = FALSE ;
  else {
/*** begin multisetcount 17 declaration ***/
  int mu__intexpr171 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr171++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 17 declaration ***/
  mu__boolexpr170 = ((mu__intexpr171) == (0)) ; 
}
	      if (mu__boolexpr170) {
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
    r = what_rule - 81;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_S_evict ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_O_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr172;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr172 = FALSE ;
  else {
/*** begin multisetcount 16 declaration ***/
  int mu__intexpr173 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr173++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 16 declaration ***/
  mu__boolexpr172 = ((mu__intexpr173) == (0)) ; 
}
    return mu__boolexpr172;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 87;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 93 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr174;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr174 = FALSE ;
  else {
/*** begin multisetcount 16 declaration ***/
  int mu__intexpr175 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr175++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 16 declaration ***/
  mu__boolexpr174 = ((mu__intexpr175) == (0)) ; 
}
	      if (mu__boolexpr174) {
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
    r = what_rule - 87;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_O_store ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_O_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr176;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr176 = FALSE ;
  else {
/*** begin multisetcount 15 declaration ***/
  int mu__intexpr177 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr177++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 15 declaration ***/
  mu__boolexpr176 = ((mu__intexpr177) == (0)) ; 
}
    return mu__boolexpr176;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 93;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 99 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr178;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr178 = FALSE ;
  else {
/*** begin multisetcount 15 declaration ***/
  int mu__intexpr179 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr179++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 15 declaration ***/
  mu__boolexpr178 = ((mu__intexpr179) == (0)) ; 
}
	      if (mu__boolexpr178) {
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
    r = what_rule - 93;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_O_load ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_O_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr180;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr180 = FALSE ;
  else {
/*** begin multisetcount 14 declaration ***/
  int mu__intexpr181 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr181++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 14 declaration ***/
  mu__boolexpr180 = ((mu__intexpr181) == (0)) ; 
}
    return mu__boolexpr180;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 99;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 105 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr182;
  if (!((mu_cle.mu_State) == (mu_cache_O))) mu__boolexpr182 = FALSE ;
  else {
/*** begin multisetcount 14 declaration ***/
  int mu__intexpr183 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr183++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 14 declaration ***/
  mu__boolexpr182 = ((mu__intexpr183) == (0)) ; 
}
	      if (mu__boolexpr182) {
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
    r = what_rule - 99;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_O_evict ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_M_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr184;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr184 = FALSE ;
  else {
/*** begin multisetcount 13 declaration ***/
  int mu__intexpr185 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr185++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 13 declaration ***/
  mu__boolexpr184 = ((mu__intexpr185) == (0)) ; 
}
    return mu__boolexpr184;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 105;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 111 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr186;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr186 = FALSE ;
  else {
/*** begin multisetcount 13 declaration ***/
  int mu__intexpr187 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr187++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 13 declaration ***/
  mu__boolexpr186 = ((mu__intexpr187) == (0)) ; 
}
	      if (mu__boolexpr186) {
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
    r = what_rule - 105;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_M_store ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_M_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr188;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr188 = FALSE ;
  else {
/*** begin multisetcount 12 declaration ***/
  int mu__intexpr189 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr189++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 12 declaration ***/
  mu__boolexpr188 = ((mu__intexpr189) == (0)) ; 
}
    return mu__boolexpr188;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 111;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 117 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr190;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr190 = FALSE ;
  else {
/*** begin multisetcount 12 declaration ***/
  int mu__intexpr191 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr191++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 12 declaration ***/
  mu__boolexpr190 = ((mu__intexpr191) == (0)) ; 
}
	      if (mu__boolexpr190) {
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
    r = what_rule - 111;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_M_load ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_M_evict, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr192;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr192 = FALSE ;
  else {
/*** begin multisetcount 11 declaration ***/
  int mu__intexpr193 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr193++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 11 declaration ***/
  mu__boolexpr192 = ((mu__intexpr193) == (0)) ; 
}
    return mu__boolexpr192;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 117;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 123 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr194;
  if (!((mu_cle.mu_State) == (mu_cache_M))) mu__boolexpr194 = FALSE ;
  else {
/*** begin multisetcount 11 declaration ***/
  int mu__intexpr195 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr195++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 11 declaration ***/
  mu__boolexpr194 = ((mu__intexpr195) == (0)) ; 
}
	      if (mu__boolexpr194) {
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
    r = what_rule - 117;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_M_evict ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_I_store, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr196;
  if (!((mu_cle.mu_State) == (mu_cache_I))) mu__boolexpr196 = FALSE ;
  else {
/*** begin multisetcount 10 declaration ***/
  int mu__intexpr197 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr197++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 10 declaration ***/
  mu__boolexpr196 = ((mu__intexpr197) == (0)) ; 
}
    return mu__boolexpr196;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 123;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 129 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr198;
  if (!((mu_cle.mu_State) == (mu_cache_I))) mu__boolexpr198 = FALSE ;
  else {
/*** begin multisetcount 10 declaration ***/
  int mu__intexpr199 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr199++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 10 declaration ***/
  mu__boolexpr198 = ((mu__intexpr199) == (0)) ; 
}
	      if (mu__boolexpr198) {
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
    r = what_rule - 123;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_I_store ( mu_adr, mu_m );
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
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    return tsprintf("cache_I_load, adr:%s, m:%s", mu_adr.Name(), mu_m.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr200;
  if (!((mu_cle.mu_State) == (mu_cache_I))) mu__boolexpr200 = FALSE ;
  else {
/*** begin multisetcount 9 declaration ***/
  int mu__intexpr201 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr201++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 9 declaration ***/
  mu__boolexpr200 = ((mu__intexpr201) == (0)) ; 
}
    return mu__boolexpr200;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 129;
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    while (what_rule < 135 )
      {
	if ( ( TRUE  ) ) {
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
bool mu__boolexpr202;
  if (!((mu_cle.mu_State) == (mu_cache_I))) mu__boolexpr202 = FALSE ;
  else {
/*** begin multisetcount 9 declaration ***/
  int mu__intexpr203 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_lock_set_cache.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr203++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 9 declaration ***/
  mu__boolexpr202 = ((mu__intexpr203) == (0)) ; 
}
	      if (mu__boolexpr202) {
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
    r = what_rule - 129;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 3) + 36);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Address mu_adr;
    mu_adr.value((r % 2) + 0);
    r = r / 2;
    static mu_1_OBJSET_cache mu_m;
    mu_m.value((r % 3) + 36);
    r = r / 3;
  mu_1_ENTRY_cache& mu_cle = mu_i_cache[mu_m].mu_CL[mu_adr];
mu_lock_set_cache.multisetadd(mu_m);
mu_SEND_cache_I_load ( mu_adr, mu_m );
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<2)
    { R0.NextRule(what_rule);
      if (what_rule<2) return; }
  if (what_rule>=2 && what_rule<4)
    { R1.NextRule(what_rule);
      if (what_rule<4) return; }
  if (what_rule>=4 && what_rule<6)
    { R2.NextRule(what_rule);
      if (what_rule<6) return; }
  if (what_rule>=6 && what_rule<11)
    { R3.NextRule(what_rule);
      if (what_rule<11) return; }
  if (what_rule>=11 && what_rule<16)
    { R4.NextRule(what_rule);
      if (what_rule<16) return; }
  if (what_rule>=16 && what_rule<21)
    { R5.NextRule(what_rule);
      if (what_rule<21) return; }
  if (what_rule>=21 && what_rule<27)
    { R6.NextRule(what_rule);
      if (what_rule<27) return; }
  if (what_rule>=27 && what_rule<33)
    { R7.NextRule(what_rule);
      if (what_rule<33) return; }
  if (what_rule>=33 && what_rule<39)
    { R8.NextRule(what_rule);
      if (what_rule<39) return; }
  if (what_rule>=39 && what_rule<45)
    { R9.NextRule(what_rule);
      if (what_rule<45) return; }
  if (what_rule>=45 && what_rule<51)
    { R10.NextRule(what_rule);
      if (what_rule<51) return; }
  if (what_rule>=51 && what_rule<57)
    { R11.NextRule(what_rule);
      if (what_rule<57) return; }
  if (what_rule>=57 && what_rule<63)
    { R12.NextRule(what_rule);
      if (what_rule<63) return; }
  if (what_rule>=63 && what_rule<69)
    { R13.NextRule(what_rule);
      if (what_rule<69) return; }
  if (what_rule>=69 && what_rule<75)
    { R14.NextRule(what_rule);
      if (what_rule<75) return; }
  if (what_rule>=75 && what_rule<81)
    { R15.NextRule(what_rule);
      if (what_rule<81) return; }
  if (what_rule>=81 && what_rule<87)
    { R16.NextRule(what_rule);
      if (what_rule<87) return; }
  if (what_rule>=87 && what_rule<93)
    { R17.NextRule(what_rule);
      if (what_rule<93) return; }
  if (what_rule>=93 && what_rule<99)
    { R18.NextRule(what_rule);
      if (what_rule<99) return; }
  if (what_rule>=99 && what_rule<105)
    { R19.NextRule(what_rule);
      if (what_rule<105) return; }
  if (what_rule>=105 && what_rule<111)
    { R20.NextRule(what_rule);
      if (what_rule<111) return; }
  if (what_rule>=111 && what_rule<117)
    { R21.NextRule(what_rule);
      if (what_rule<117) return; }
  if (what_rule>=117 && what_rule<123)
    { R22.NextRule(what_rule);
      if (what_rule<123) return; }
  if (what_rule>=123 && what_rule<129)
    { R23.NextRule(what_rule);
      if (what_rule<129) return; }
  if (what_rule>=129 && what_rule<135)
    { R24.NextRule(what_rule);
      if (what_rule<135) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=1) return R0.Condition(r-0);
  if (r>=2 && r<=3) return R1.Condition(r-2);
  if (r>=4 && r<=5) return R2.Condition(r-4);
  if (r>=6 && r<=10) return R3.Condition(r-6);
  if (r>=11 && r<=15) return R4.Condition(r-11);
  if (r>=16 && r<=20) return R5.Condition(r-16);
  if (r>=21 && r<=26) return R6.Condition(r-21);
  if (r>=27 && r<=32) return R7.Condition(r-27);
  if (r>=33 && r<=38) return R8.Condition(r-33);
  if (r>=39 && r<=44) return R9.Condition(r-39);
  if (r>=45 && r<=50) return R10.Condition(r-45);
  if (r>=51 && r<=56) return R11.Condition(r-51);
  if (r>=57 && r<=62) return R12.Condition(r-57);
  if (r>=63 && r<=68) return R13.Condition(r-63);
  if (r>=69 && r<=74) return R14.Condition(r-69);
  if (r>=75 && r<=80) return R15.Condition(r-75);
  if (r>=81 && r<=86) return R16.Condition(r-81);
  if (r>=87 && r<=92) return R17.Condition(r-87);
  if (r>=93 && r<=98) return R18.Condition(r-93);
  if (r>=99 && r<=104) return R19.Condition(r-99);
  if (r>=105 && r<=110) return R20.Condition(r-105);
  if (r>=111 && r<=116) return R21.Condition(r-111);
  if (r>=117 && r<=122) return R22.Condition(r-117);
  if (r>=123 && r<=128) return R23.Condition(r-123);
  if (r>=129 && r<=134) return R24.Condition(r-129);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=1) { R0.Code(r-0); return; } 
  if (r>=2 && r<=3) { R1.Code(r-2); return; } 
  if (r>=4 && r<=5) { R2.Code(r-4); return; } 
  if (r>=6 && r<=10) { R3.Code(r-6); return; } 
  if (r>=11 && r<=15) { R4.Code(r-11); return; } 
  if (r>=16 && r<=20) { R5.Code(r-16); return; } 
  if (r>=21 && r<=26) { R6.Code(r-21); return; } 
  if (r>=27 && r<=32) { R7.Code(r-27); return; } 
  if (r>=33 && r<=38) { R8.Code(r-33); return; } 
  if (r>=39 && r<=44) { R9.Code(r-39); return; } 
  if (r>=45 && r<=50) { R10.Code(r-45); return; } 
  if (r>=51 && r<=56) { R11.Code(r-51); return; } 
  if (r>=57 && r<=62) { R12.Code(r-57); return; } 
  if (r>=63 && r<=68) { R13.Code(r-63); return; } 
  if (r>=69 && r<=74) { R14.Code(r-69); return; } 
  if (r>=75 && r<=80) { R15.Code(r-75); return; } 
  if (r>=81 && r<=86) { R16.Code(r-81); return; } 
  if (r>=87 && r<=92) { R17.Code(r-87); return; } 
  if (r>=93 && r<=98) { R18.Code(r-93); return; } 
  if (r>=99 && r<=104) { R19.Code(r-99); return; } 
  if (r>=105 && r<=110) { R20.Code(r-105); return; } 
  if (r>=111 && r<=116) { R21.Code(r-111); return; } 
  if (r>=117 && r<=122) { R22.Code(r-117); return; } 
  if (r>=123 && r<=128) { R23.Code(r-123); return; } 
  if (r>=129 && r<=134) { R24.Code(r-129); return; } 
}
int Priority(unsigned short r)
{
  if (r<=1) { return R0.Priority(); } 
  if (r>=2 && r<=3) { return R1.Priority(); } 
  if (r>=4 && r<=5) { return R2.Priority(); } 
  if (r>=6 && r<=10) { return R3.Priority(); } 
  if (r>=11 && r<=15) { return R4.Priority(); } 
  if (r>=16 && r<=20) { return R5.Priority(); } 
  if (r>=21 && r<=26) { return R6.Priority(); } 
  if (r>=27 && r<=32) { return R7.Priority(); } 
  if (r>=33 && r<=38) { return R8.Priority(); } 
  if (r>=39 && r<=44) { return R9.Priority(); } 
  if (r>=45 && r<=50) { return R10.Priority(); } 
  if (r>=51 && r<=56) { return R11.Priority(); } 
  if (r>=57 && r<=62) { return R12.Priority(); } 
  if (r>=63 && r<=68) { return R13.Priority(); } 
  if (r>=69 && r<=74) { return R14.Priority(); } 
  if (r>=75 && r<=80) { return R15.Priority(); } 
  if (r>=81 && r<=86) { return R16.Priority(); } 
  if (r>=87 && r<=92) { return R17.Priority(); } 
  if (r>=93 && r<=98) { return R18.Priority(); } 
  if (r>=99 && r<=104) { return R19.Priority(); } 
  if (r>=105 && r<=110) { return R20.Priority(); } 
  if (r>=111 && r<=116) { return R21.Priority(); } 
  if (r>=117 && r<=122) { return R22.Priority(); } 
  if (r>=123 && r<=128) { return R23.Priority(); } 
  if (r>=129 && r<=134) { return R24.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=1) return R0.Name(r-0);
  if (r>=2 && r<=3) return R1.Name(r-2);
  if (r>=4 && r<=5) return R2.Name(r-4);
  if (r>=6 && r<=10) return R3.Name(r-6);
  if (r>=11 && r<=15) return R4.Name(r-11);
  if (r>=16 && r<=20) return R5.Name(r-16);
  if (r>=21 && r<=26) return R6.Name(r-21);
  if (r>=27 && r<=32) return R7.Name(r-27);
  if (r>=33 && r<=38) return R8.Name(r-33);
  if (r>=39 && r<=44) return R9.Name(r-39);
  if (r>=45 && r<=50) return R10.Name(r-45);
  if (r>=51 && r<=56) return R11.Name(r-51);
  if (r>=57 && r<=62) return R12.Name(r-57);
  if (r>=63 && r<=68) return R13.Name(r-63);
  if (r>=69 && r<=74) return R14.Name(r-69);
  if (r>=75 && r<=80) return R15.Name(r-75);
  if (r>=81 && r<=86) return R16.Name(r-81);
  if (r>=87 && r<=92) return R17.Name(r-87);
  if (r>=93 && r<=98) return R18.Name(r-93);
  if (r>=99 && r<=104) return R19.Name(r-99);
  if (r>=105 && r<=110) return R20.Name(r-105);
  if (r>=111 && r<=116) return R21.Name(r-111);
  if (r>=117 && r<=122) return R22.Name(r-117);
  if (r>=123 && r<=128) return R23.Name(r-123);
  if (r>=129 && r<=134) return R24.Name(r-129);
  return NULL;
}
};
const unsigned numrules = 135;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 135


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
{
for(int mu_i = 39; mu_i <= 39; mu_i++) {
{
for(int mu_a = 0; mu_a <= 1; mu_a++) {
mu_i_directory0[mu_i].mu_CL[mu_a].mu_State = mu_directory_I;
mu_i_directory0[mu_i].mu_CL[mu_a].mu_cl = 0;
mu_i_directory0[mu_i].mu_CL[mu_a].mu_Perm = mu_none;
};
};
};
};
{
for(int mu_i = 40; mu_i <= 40; mu_i++) {
{
for(int mu_a = 0; mu_a <= 1; mu_a++) {
mu_i_directory1[mu_i].mu_CL[mu_a].mu_State = mu_directory_I;
mu_i_directory1[mu_i].mu_CL[mu_a].mu_cl = 0;
mu_i_directory1[mu_i].mu_CL[mu_a].mu_Perm = mu_none;
};
};
};
};
{
for(int mu_i = 36; mu_i <= 38; mu_i++) {
{
for(int mu_a = 0; mu_a <= 1; mu_a++) {
mu_i_cache[mu_i].mu_CL[mu_a].mu_State = mu_cache_I;
mu_i_cache[mu_i].mu_CL[mu_a].mu_acksExpected = 0;
mu_i_cache[mu_i].mu_CL[mu_a].mu_acksReceived = 0;
mu_i_cache[mu_i].mu_CL[mu_a].mu_cl = 0;
mu_i_cache[mu_i].mu_CL[mu_a].mu_Perm = mu_none;
};
};
};
};
{
for(int mu_i = 36; mu_i <= 40; mu_i++)
  if (( ( mu_i >= 40 ) && ( mu_i <= 40 ) )|| ( ( mu_i >= 39 ) && ( mu_i <= 39 ) )|| ( ( mu_i >= 36 ) && ( mu_i <= 38 ) )) {
mu_buf_fwd[mu_i].mu_Queue.undefine();
mu_buf_fwd[mu_i].mu_QueueInd = 0;
};
};
{
for(int mu_i = 36; mu_i <= 40; mu_i++)
  if (( ( mu_i >= 40 ) && ( mu_i <= 40 ) )|| ( ( mu_i >= 39 ) && ( mu_i <= 39 ) )|| ( ( mu_i >= 36 ) && ( mu_i <= 38 ) )) {
mu_buf_resp[mu_i].mu_Queue.undefine();
mu_buf_resp[mu_i].mu_QueueInd = 0;
};
};
{
for(int mu_i = 36; mu_i <= 40; mu_i++)
  if (( ( mu_i >= 40 ) && ( mu_i <= 40 ) )|| ( ( mu_i >= 39 ) && ( mu_i <= 39 ) )|| ( ( mu_i >= 36 ) && ( mu_i <= 38 ) )) {
mu_buf_req[mu_i].mu_Queue.undefine();
mu_buf_req[mu_i].mu_QueueInd = 0;
};
};
{
for(int mu_n = 0; mu_n <= 1; mu_n++) {
mu_cnt_fwd[mu_n] = 0;
};
};
{
for(int mu_n = 0; mu_n <= 1; mu_n++) {
mu_cnt_req[mu_n] = 0;
};
};
{
for(int mu_n = 0; mu_n <= 1; mu_n++) {
mu_cnt_resp[mu_n] = 0;
};
};
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
int mu__invariant_204() // Invariant "Write Serialization"
{
bool mu__quant205; 
mu__quant205 = TRUE;
{
for(int mu_c1 = 36; mu_c1 <= 38; mu_c1++) {
bool mu__quant206; 
mu__quant206 = TRUE;
{
for(int mu_c2 = 36; mu_c2 <= 38; mu_c2++) {
bool mu__quant207; 
mu__quant207 = TRUE;
{
for(int mu_a = 0; mu_a <= 1; mu_a++) {
bool mu__boolexpr208;
bool mu__boolexpr209;
  if (!((mu_c1) != (mu_c2))) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_i_cache[mu_c1].mu_CL[mu_a].mu_Perm) == (mu_store)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = TRUE ;
  else {
  mu__boolexpr208 = ((mu_i_cache[mu_c2].mu_CL[mu_a].mu_Perm) != (mu_store)) ; 
}
if ( !(mu__boolexpr208) )
  { mu__quant207 = FALSE; break; }
};
};
if ( !(mu__quant207) )
  { mu__quant206 = FALSE; break; }
};
};
if ( !(mu__quant206) )
  { mu__quant205 = FALSE; break; }
};
};
return mu__quant205;
};

bool mu__condition_210() // Condition for Rule "Write Serialization"
{
  return mu__invariant_204( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"Write Serialization", &mu__condition_210, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
buf_resp:NoScalarset
cnt_req:NoScalarset
cnt_resp:NoScalarset
cnt_fwd:NoScalarset
i_cache:NoScalarset
fwd:NoScalarset
resp:NoScalarset
req:NoScalarset
buf_fwd:NoScalarset
buf_req:NoScalarset
i_directory1:Complex
i_directory0:Complex
lock_set_cache:Complex
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
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
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
  Presentation = Explicit;
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
if (!nexted) return FALSE;
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
        mu_buf_resp.MultisetSort();
        mu_cnt_req.MultisetSort();
        mu_cnt_resp.MultisetSort();
        mu_cnt_fwd.MultisetSort();
        mu_i_cache.MultisetSort();
        mu_fwd.MultisetSort();
        mu_resp.MultisetSort();
        mu_req.MultisetSort();
        mu_buf_fwd.MultisetSort();
        mu_buf_req.MultisetSort();
        mu_i_directory1.MultisetSort();
        mu_i_directory0.MultisetSort();
        mu_lock_set_cache.MultisetSort();
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
void mu_1_Access::Permute(PermSet& Perm, int i) {};
void mu_1_Access::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_Access::Canonicalize(PermSet& Perm) {};
void mu_1_Access::SimpleLimit(PermSet& Perm) {};
void mu_1_Access::ArrayLimit(PermSet& Perm) {};
void mu_1_Access::Limit(PermSet& Perm) {};
void mu_1_Access::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MessageType::Permute(PermSet& Perm, int i) {};
void mu_1_MessageType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MessageType::Canonicalize(PermSet& Perm) {};
void mu_1_MessageType::SimpleLimit(PermSet& Perm) {};
void mu_1_MessageType::ArrayLimit(PermSet& Perm) {};
void mu_1_MessageType::Limit(PermSet& Perm) {};
void mu_1_MessageType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_s_cache::Permute(PermSet& Perm, int i) {};
void mu_1_s_cache::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_s_cache::Canonicalize(PermSet& Perm) {};
void mu_1_s_cache::SimpleLimit(PermSet& Perm) {};
void mu_1_s_cache::ArrayLimit(PermSet& Perm) {};
void mu_1_s_cache::Limit(PermSet& Perm) {};
void mu_1_s_cache::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_s_directory::Permute(PermSet& Perm, int i) {};
void mu_1_s_directory::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_s_directory::Canonicalize(PermSet& Perm) {};
void mu_1_s_directory::SimpleLimit(PermSet& Perm) {};
void mu_1_s_directory::ArrayLimit(PermSet& Perm) {};
void mu_1_s_directory::Limit(PermSet& Perm) {};
void mu_1_s_directory::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_Address::Permute(PermSet& Perm, int i) {};
void mu_1_Address::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_Address::Canonicalize(PermSet& Perm) {};
void mu_1_Address::SimpleLimit(PermSet& Perm) {};
void mu_1_Address::ArrayLimit(PermSet& Perm) {};
void mu_1_Address::Limit(PermSet& Perm) {};
void mu_1_Address::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_ClValue::Permute(PermSet& Perm, int i) {};
void mu_1_ClValue::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_ClValue::Canonicalize(PermSet& Perm) {};
void mu_1_ClValue::SimpleLimit(PermSet& Perm) {};
void mu_1_ClValue::ArrayLimit(PermSet& Perm) {};
void mu_1_ClValue::Limit(PermSet& Perm) {};
void mu_1_ClValue::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_OBJSET_cache::Permute(PermSet& Perm, int i) {};
void mu_1_OBJSET_cache::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_OBJSET_cache::Canonicalize(PermSet& Perm) {};
void mu_1_OBJSET_cache::SimpleLimit(PermSet& Perm) {};
void mu_1_OBJSET_cache::ArrayLimit(PermSet& Perm) {};
void mu_1_OBJSET_cache::Limit(PermSet& Perm) {};
void mu_1_OBJSET_cache::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_OBJSET_directory0::Permute(PermSet& Perm, int i) {};
void mu_1_OBJSET_directory0::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directory0::Canonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directory0::SimpleLimit(PermSet& Perm) {};
void mu_1_OBJSET_directory0::ArrayLimit(PermSet& Perm) {};
void mu_1_OBJSET_directory0::Limit(PermSet& Perm) {};
void mu_1_OBJSET_directory0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_OBJSET_directory1::Permute(PermSet& Perm, int i) {};
void mu_1_OBJSET_directory1::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directory1::Canonicalize(PermSet& Perm) {};
void mu_1_OBJSET_directory1::SimpleLimit(PermSet& Perm) {};
void mu_1_OBJSET_directory1::ArrayLimit(PermSet& Perm) {};
void mu_1_OBJSET_directory1::Limit(PermSet& Perm) {};
void mu_1_OBJSET_directory1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_Machines::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
  }
}
void mu_1_Machines::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
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
  }
}
void mu_1_Machines::ArrayLimit(PermSet& Perm) {}
void mu_1_Machines::Limit(PermSet& Perm) {}
void mu_1_Machines::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for union type.\n"); };
void mu_1_v_NrCaches_OBJSET_cache::Permute(PermSet& Perm, int i)
{
  static mu_1_v_NrCaches_OBJSET_cache temp("Permute_mu_1_v_NrCaches_OBJSET_cache",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1_v_NrCaches_OBJSET_cache::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1_v_NrCaches_OBJSET_cache::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_NrCaches_OBJSET_cache::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_NrCaches_OBJSET_cache::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_NrCaches_OBJSET_cache::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1_v_NrCaches_OBJSET_cache::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for multiset type of scalarset-free elements.\n"); };
void mu_1_cnt_v_NrCaches_OBJSET_cache::Permute(PermSet& Perm, int i) {};
void mu_1_cnt_v_NrCaches_OBJSET_cache::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_cnt_v_NrCaches_OBJSET_cache::Canonicalize(PermSet& Perm) {};
void mu_1_cnt_v_NrCaches_OBJSET_cache::SimpleLimit(PermSet& Perm) {};
void mu_1_cnt_v_NrCaches_OBJSET_cache::ArrayLimit(PermSet& Perm) {};
void mu_1_cnt_v_NrCaches_OBJSET_cache::Limit(PermSet& Perm) {};
void mu_1_cnt_v_NrCaches_OBJSET_cache::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i) {};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_0::Canonicalize(PermSet& Perm) {};
void mu_1__type_0::SimpleLimit(PermSet& Perm) {};
void mu_1__type_0::ArrayLimit(PermSet& Perm) {};
void mu_1__type_0::Limit(PermSet& Perm) {};
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm){}
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu__subrange_17::Permute(PermSet& Perm, int i) {};
void mu__subrange_17::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_17::Canonicalize(PermSet& Perm) {};
void mu__subrange_17::SimpleLimit(PermSet& Perm) {};
void mu__subrange_17::ArrayLimit(PermSet& Perm) {};
void mu__subrange_17::Limit(PermSet& Perm) {};
void mu__subrange_17::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i) {};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_2::Canonicalize(PermSet& Perm) {};
void mu_1__type_2::SimpleLimit(PermSet& Perm) {};
void mu_1__type_2::ArrayLimit(PermSet& Perm) {};
void mu_1__type_2::Limit(PermSet& Perm) {};
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_FIFO::Permute(PermSet& Perm, int i)
{
};
void mu_1_FIFO::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_FIFO::Canonicalize(PermSet& Perm)
{
};
void mu_1_FIFO::SimpleLimit(PermSet& Perm){}
void mu_1_FIFO::ArrayLimit(PermSet& Perm){}
void mu_1_FIFO::Limit(PermSet& Perm)
{
};
void mu_1_FIFO::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_3::Permute(PermSet& Perm, int i) {};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_3::Canonicalize(PermSet& Perm) {};
void mu_1__type_3::SimpleLimit(PermSet& Perm) {};
void mu_1__type_3::ArrayLimit(PermSet& Perm) {};
void mu_1__type_3::Limit(PermSet& Perm) {};
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i) {};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_4::Canonicalize(PermSet& Perm) {};
void mu_1__type_4::SimpleLimit(PermSet& Perm) {};
void mu_1__type_4::ArrayLimit(PermSet& Perm) {};
void mu_1__type_4::Limit(PermSet& Perm) {};
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_ENTRY_cache::Permute(PermSet& Perm, int i)
{
};
void mu_1_ENTRY_cache::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_ENTRY_cache::Canonicalize(PermSet& Perm)
{
};
void mu_1_ENTRY_cache::SimpleLimit(PermSet& Perm){}
void mu_1_ENTRY_cache::ArrayLimit(PermSet& Perm){}
void mu_1_ENTRY_cache::Limit(PermSet& Perm)
{
};
void mu_1_ENTRY_cache::MultisetLimit(PermSet& Perm)
{
};
void mu_1_ENTRY_directory0::Permute(PermSet& Perm, int i)
{
};
void mu_1_ENTRY_directory0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_ENTRY_directory0::Canonicalize(PermSet& Perm)
{
};
void mu_1_ENTRY_directory0::SimpleLimit(PermSet& Perm){}
void mu_1_ENTRY_directory0::ArrayLimit(PermSet& Perm){}
void mu_1_ENTRY_directory0::Limit(PermSet& Perm)
{
};
void mu_1_ENTRY_directory0::MultisetLimit(PermSet& Perm)
{
};
void mu_1_ENTRY_directory1::Permute(PermSet& Perm, int i)
{
};
void mu_1_ENTRY_directory1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_ENTRY_directory1::Canonicalize(PermSet& Perm)
{
};
void mu_1_ENTRY_directory1::SimpleLimit(PermSet& Perm){}
void mu_1_ENTRY_directory1::ArrayLimit(PermSet& Perm){}
void mu_1_ENTRY_directory1::Limit(PermSet& Perm)
{
};
void mu_1_ENTRY_directory1::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_MACH_cache::Permute(PermSet& Perm, int i)
{
};
void mu_1_MACH_cache::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_MACH_cache::Canonicalize(PermSet& Perm)
{
};
void mu_1_MACH_cache::SimpleLimit(PermSet& Perm){}
void mu_1_MACH_cache::ArrayLimit(PermSet& Perm){}
void mu_1_MACH_cache::Limit(PermSet& Perm)
{
};
void mu_1_MACH_cache::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].Canonicalize(Perm);
}
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_MACH_directory0::Permute(PermSet& Perm, int i)
{
};
void mu_1_MACH_directory0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_MACH_directory0::Canonicalize(PermSet& Perm)
{
};
void mu_1_MACH_directory0::SimpleLimit(PermSet& Perm){}
void mu_1_MACH_directory0::ArrayLimit(PermSet& Perm){}
void mu_1_MACH_directory0::Limit(PermSet& Perm)
{
};
void mu_1_MACH_directory0::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].Canonicalize(Perm);
}
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_MACH_directory1::Permute(PermSet& Perm, int i)
{
};
void mu_1_MACH_directory1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_MACH_directory1::Canonicalize(PermSet& Perm)
{
};
void mu_1_MACH_directory1::SimpleLimit(PermSet& Perm){}
void mu_1_MACH_directory1::ArrayLimit(PermSet& Perm){}
void mu_1_MACH_directory1::Limit(PermSet& Perm)
{
};
void mu_1_MACH_directory1::MultisetLimit(PermSet& Perm)
{
};
void mu_1_OBJ_cache::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_cache temp("Permute_mu_1_OBJ_cache",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_cache::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_cache::Canonicalize(PermSet& Perm){};
void mu_1_OBJ_cache::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_cache::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_cache::Limit(PermSet& Perm){}
void mu_1_OBJ_cache::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_OBJ_directory0::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_directory0 temp("Permute_mu_1_OBJ_directory0",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_directory0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_directory0::Canonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].Canonicalize(Perm);
}
void mu_1_OBJ_directory0::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_directory0::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_directory0::Limit(PermSet& Perm){}
void mu_1_OBJ_directory0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_OBJ_directory1::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_directory1 temp("Permute_mu_1_OBJ_directory1",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_directory1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_directory1::Canonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].Canonicalize(Perm);
}
void mu_1_OBJ_directory1::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_directory1::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_directory1::Limit(PermSet& Perm){}
void mu_1_OBJ_directory1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu__subrange_35::Permute(PermSet& Perm, int i) {};
void mu__subrange_35::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_35::Canonicalize(PermSet& Perm) {};
void mu__subrange_35::SimpleLimit(PermSet& Perm) {};
void mu__subrange_35::ArrayLimit(PermSet& Perm) {};
void mu__subrange_35::Limit(PermSet& Perm) {};
void mu__subrange_35::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_36::Permute(PermSet& Perm, int i) {};
void mu__subrange_36::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_36::Canonicalize(PermSet& Perm) {};
void mu__subrange_36::SimpleLimit(PermSet& Perm) {};
void mu__subrange_36::ArrayLimit(PermSet& Perm) {};
void mu__subrange_36::Limit(PermSet& Perm) {};
void mu__subrange_36::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<6; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_OBJ_Ordered::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_Ordered temp("Permute_mu_1_OBJ_Ordered",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_Ordered::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_Ordered::Canonicalize(PermSet& Perm){};
void mu_1_OBJ_Ordered::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_Ordered::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_Ordered::Limit(PermSet& Perm){}
void mu_1_OBJ_Ordered::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu__subrange_39::Permute(PermSet& Perm, int i) {};
void mu__subrange_39::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_39::Canonicalize(PermSet& Perm) {};
void mu__subrange_39::SimpleLimit(PermSet& Perm) {};
void mu__subrange_39::ArrayLimit(PermSet& Perm) {};
void mu__subrange_39::Limit(PermSet& Perm) {};
void mu__subrange_39::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i) {};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_9::Canonicalize(PermSet& Perm) {};
void mu_1__type_9::SimpleLimit(PermSet& Perm) {};
void mu_1__type_9::ArrayLimit(PermSet& Perm) {};
void mu_1__type_9::Limit(PermSet& Perm) {};
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_OBJ_Orderedcnt::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_Orderedcnt temp("Permute_mu_1_OBJ_Orderedcnt",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_Orderedcnt::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_Orderedcnt::Canonicalize(PermSet& Perm){};
void mu_1_OBJ_Orderedcnt::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_Orderedcnt::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_Orderedcnt::Limit(PermSet& Perm){}
void mu_1_OBJ_Orderedcnt::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<24; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_10::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_10::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_10::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for multiset type of scalarset-free elements.\n"); };
void mu_1_OBJ_Unordered::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_Unordered temp("Permute_mu_1_OBJ_Unordered",-1);
  int j;
  for (j=0; j<5; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_Unordered::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_Unordered::Canonicalize(PermSet& Perm)
{
  for (int j=0; j<5; j++)
    array[j].Canonicalize(Perm);
}
void mu_1_OBJ_Unordered::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_Unordered::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_Unordered::Limit(PermSet& Perm){}
void mu_1_OBJ_Unordered::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_OBJ_FIFO::Permute(PermSet& Perm, int i)
{
  static mu_1_OBJ_FIFO temp("Permute_mu_1_OBJ_FIFO",-1);
  int j;
  for (j=0; j<5; j++)
    array[j].Permute(Perm, i);
};
void mu_1_OBJ_FIFO::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_OBJ_FIFO::Canonicalize(PermSet& Perm){};
void mu_1_OBJ_FIFO::SimpleLimit(PermSet& Perm){}
void mu_1_OBJ_FIFO::ArrayLimit(PermSet& Perm) {}
void mu_1_OBJ_FIFO::Limit(PermSet& Perm){}
void mu_1_OBJ_FIFO::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_11::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_11::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_11::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for multiset type of scalarset-free elements.\n"); };
void mu_1__type_12::Permute(PermSet& Perm, int i) {};
void mu_1__type_12::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_12::Canonicalize(PermSet& Perm) {};
void mu_1__type_12::SimpleLimit(PermSet& Perm) {};
void mu_1__type_12::ArrayLimit(PermSet& Perm) {};
void mu_1__type_12::Limit(PermSet& Perm) {};
void mu_1__type_12::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
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
void mu_1__type_15::Permute(PermSet& Perm, int i) {};
void mu_1__type_15::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_15::Canonicalize(PermSet& Perm) {};
void mu_1__type_15::SimpleLimit(PermSet& Perm) {};
void mu_1__type_15::ArrayLimit(PermSet& Perm) {};
void mu_1__type_15::Limit(PermSet& Perm) {};
void mu_1__type_15::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_16::Permute(PermSet& Perm, int i) {};
void mu_1__type_16::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_16::Canonicalize(PermSet& Perm) {};
void mu_1__type_16::SimpleLimit(PermSet& Perm) {};
void mu_1__type_16::ArrayLimit(PermSet& Perm) {};
void mu_1__type_16::Limit(PermSet& Perm) {};
void mu_1__type_16::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_89::Permute(PermSet& Perm, int i) {};
void mu__subrange_89::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_89::Canonicalize(PermSet& Perm) {};
void mu__subrange_89::SimpleLimit(PermSet& Perm) {};
void mu__subrange_89::ArrayLimit(PermSet& Perm) {};
void mu__subrange_89::Limit(PermSet& Perm) {};
void mu__subrange_89::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_90::Permute(PermSet& Perm, int i) {};
void mu__subrange_90::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_90::Canonicalize(PermSet& Perm) {};
void mu__subrange_90::SimpleLimit(PermSet& Perm) {};
void mu__subrange_90::ArrayLimit(PermSet& Perm) {};
void mu__subrange_90::Limit(PermSet& Perm) {};
void mu__subrange_90::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_91::Permute(PermSet& Perm, int i) {};
void mu__subrange_91::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_91::Canonicalize(PermSet& Perm) {};
void mu__subrange_91::SimpleLimit(PermSet& Perm) {};
void mu__subrange_91::ArrayLimit(PermSet& Perm) {};
void mu__subrange_91::Limit(PermSet& Perm) {};
void mu__subrange_91::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_92::Permute(PermSet& Perm, int i) {};
void mu__subrange_92::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_92::Canonicalize(PermSet& Perm) {};
void mu__subrange_92::SimpleLimit(PermSet& Perm) {};
void mu__subrange_92::ArrayLimit(PermSet& Perm) {};
void mu__subrange_92::Limit(PermSet& Perm) {};
void mu__subrange_92::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_93::Permute(PermSet& Perm, int i) {};
void mu__subrange_93::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_93::Canonicalize(PermSet& Perm) {};
void mu__subrange_93::SimpleLimit(PermSet& Perm) {};
void mu__subrange_93::ArrayLimit(PermSet& Perm) {};
void mu__subrange_93::Limit(PermSet& Perm) {};
void mu__subrange_93::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_94::Permute(PermSet& Perm, int i) {};
void mu__subrange_94::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_94::Canonicalize(PermSet& Perm) {};
void mu__subrange_94::SimpleLimit(PermSet& Perm) {};
void mu__subrange_94::ArrayLimit(PermSet& Perm) {};
void mu__subrange_94::Limit(PermSet& Perm) {};
void mu__subrange_94::MultisetLimit(PermSet& Perm)
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
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_buf_resp.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_buf_resp.MultisetSort();
              mu_cnt_req.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_cnt_req.MultisetSort();
              mu_cnt_resp.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_cnt_resp.MultisetSort();
              mu_cnt_fwd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_cnt_fwd.MultisetSort();
              mu_i_cache.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_i_cache.MultisetSort();
              mu_fwd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_fwd.MultisetSort();
              mu_resp.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_resp.MultisetSort();
              mu_req.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_req.MultisetSort();
              mu_buf_fwd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_buf_fwd.MultisetSort();
              mu_buf_req.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_buf_req.MultisetSort();
              mu_i_directory1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_i_directory1.MultisetSort();
              mu_i_directory0.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_i_directory0.MultisetSort();
              mu_lock_set_cache.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_lock_set_cache.MultisetSort();
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

          mu_buf_resp.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_buf_resp.MultisetSort();
          mu_cnt_req.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_cnt_req.MultisetSort();
          mu_cnt_resp.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_cnt_resp.MultisetSort();
          mu_cnt_fwd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_cnt_fwd.MultisetSort();
          mu_i_cache.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_i_cache.MultisetSort();
          mu_fwd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_fwd.MultisetSort();
          mu_resp.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_resp.MultisetSort();
          mu_req.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_req.MultisetSort();
          mu_buf_fwd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_buf_fwd.MultisetSort();
          mu_buf_req.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_buf_req.MultisetSort();
          mu_i_directory1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_i_directory1.MultisetSort();
          mu_i_directory0.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_i_directory0.MultisetSort();
          mu_lock_set_cache.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_lock_set_cache.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_buf_resp.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_buf_resp.MultisetSort();
              mu_cnt_req.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_cnt_req.MultisetSort();
              mu_cnt_resp.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_cnt_resp.MultisetSort();
              mu_cnt_fwd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_cnt_fwd.MultisetSort();
              mu_i_cache.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_i_cache.MultisetSort();
              mu_fwd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_fwd.MultisetSort();
              mu_resp.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_resp.MultisetSort();
              mu_req.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_req.MultisetSort();
              mu_buf_fwd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_buf_fwd.MultisetSort();
              mu_buf_req.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_buf_req.MultisetSort();
              mu_i_directory1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_i_directory1.MultisetSort();
              mu_i_directory0.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_i_directory0.MultisetSort();
              mu_lock_set_cache.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_lock_set_cache.MultisetSort();
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
      mu_buf_resp.MultisetSort();
      mu_cnt_req.MultisetSort();
      mu_cnt_resp.MultisetSort();
      mu_cnt_fwd.MultisetSort();
      mu_i_cache.MultisetSort();
      mu_fwd.MultisetSort();
      mu_resp.MultisetSort();
      mu_req.MultisetSort();
      mu_buf_fwd.MultisetSort();
      mu_buf_req.MultisetSort();
      mu_i_directory1.MultisetSort();
      mu_i_directory0.MultisetSort();
      mu_lock_set_cache.MultisetSort();
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
        mu_buf_resp.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_buf_resp.MultisetSort();
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
        mu_i_cache.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_cache.MultisetSort();
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
        mu_buf_fwd.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_buf_fwd.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_buf_req.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_buf_req.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_directory1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_directory1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_i_directory0.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_i_directory0.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_lock_set_cache.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_lock_set_cache.MultisetSort();
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

  mu_i_directory1.MultisetSort();

  mu_i_directory0.MultisetSort();

  mu_lock_set_cache.MultisetSort();

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

  mu_i_directory1.MultisetSort();

  mu_i_directory0.MultisetSort();

  mu_lock_set_cache.MultisetSort();

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

  mu_i_directory1.MultisetSort();

  mu_i_directory0.MultisetSort();

  mu_lock_set_cache.MultisetSort();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
