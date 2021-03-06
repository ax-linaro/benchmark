/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(TOUCH_EVENTS)

#include "JSTouch.h"

#include "EventTarget.h"
#include "JSEventTarget.h"
#include "Touch.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTouch);

/* Hash table */

static const HashTableValue JSTouchTableValues[10] =
{
    { "clientX", DontDelete|ReadOnly, (intptr_t)jsTouchClientX, (intptr_t)0 },
    { "clientY", DontDelete|ReadOnly, (intptr_t)jsTouchClientY, (intptr_t)0 },
    { "screenX", DontDelete|ReadOnly, (intptr_t)jsTouchScreenX, (intptr_t)0 },
    { "screenY", DontDelete|ReadOnly, (intptr_t)jsTouchScreenY, (intptr_t)0 },
    { "pageX", DontDelete|ReadOnly, (intptr_t)jsTouchPageX, (intptr_t)0 },
    { "pageY", DontDelete|ReadOnly, (intptr_t)jsTouchPageY, (intptr_t)0 },
    { "target", DontDelete|ReadOnly, (intptr_t)jsTouchTarget, (intptr_t)0 },
    { "identifier", DontDelete|ReadOnly, (intptr_t)jsTouchIdentifier, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsTouchConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSTouchTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSTouchTableValues, 0 };
#else
    { 32, 31, JSTouchTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSTouchConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSTouchConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSTouchConstructorTableValues, 0 };
#else
    { 1, 0, JSTouchConstructorTableValues, 0 };
#endif

class JSTouchConstructor : public DOMConstructorObject {
public:
    JSTouchConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSTouchConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSTouchPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSTouchConstructor::s_info = { "TouchConstructor", 0, &JSTouchConstructorTable, 0 };

bool JSTouchConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTouchConstructor, DOMObject>(exec, &JSTouchConstructorTable, this, propertyName, slot);
}

bool JSTouchConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTouchConstructor, DOMObject>(exec, &JSTouchConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSTouchPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSTouchPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSTouchPrototypeTableValues, 0 };
#else
    { 1, 0, JSTouchPrototypeTableValues, 0 };
#endif

const ClassInfo JSTouchPrototype::s_info = { "TouchPrototype", 0, &JSTouchPrototypeTable, 0 };

JSObject* JSTouchPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTouch>(exec, globalObject);
}

const ClassInfo JSTouch::s_info = { "Touch", 0, &JSTouchTable, 0 };

JSTouch::JSTouch(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Touch> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSTouch::~JSTouch()
{
    forgetDOMObject(this, impl());
}

JSObject* JSTouch::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSTouchPrototype(JSTouchPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSTouch::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTouch, Base>(exec, &JSTouchTable, this, propertyName, slot);
}

bool JSTouch::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTouch, Base>(exec, &JSTouchTable, this, propertyName, descriptor);
}

JSValue jsTouchClientX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* castedThis = static_cast<JSTouch*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Touch* imp = static_cast<Touch*>(castedThis->impl());
    return jsNumber(exec, imp->clientX());
}

JSValue jsTouchClientY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* castedThis = static_cast<JSTouch*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Touch* imp = static_cast<Touch*>(castedThis->impl());
    return jsNumber(exec, imp->clientY());
}

JSValue jsTouchScreenX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* castedThis = static_cast<JSTouch*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Touch* imp = static_cast<Touch*>(castedThis->impl());
    return jsNumber(exec, imp->screenX());
}

JSValue jsTouchScreenY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* castedThis = static_cast<JSTouch*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Touch* imp = static_cast<Touch*>(castedThis->impl());
    return jsNumber(exec, imp->screenY());
}

JSValue jsTouchPageX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* castedThis = static_cast<JSTouch*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Touch* imp = static_cast<Touch*>(castedThis->impl());
    return jsNumber(exec, imp->pageX());
}

JSValue jsTouchPageY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* castedThis = static_cast<JSTouch*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Touch* imp = static_cast<Touch*>(castedThis->impl());
    return jsNumber(exec, imp->pageY());
}

JSValue jsTouchTarget(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* castedThis = static_cast<JSTouch*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Touch* imp = static_cast<Touch*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->target()));
}

JSValue jsTouchIdentifier(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* castedThis = static_cast<JSTouch*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Touch* imp = static_cast<Touch*>(castedThis->impl());
    return jsNumber(exec, imp->identifier());
}

JSValue jsTouchConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSTouch* domObject = static_cast<JSTouch*>(asObject(slot.slotBase()));
    return JSTouch::getConstructor(exec, domObject->globalObject());
}
JSValue JSTouch::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTouchConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Touch* object)
{
    return getDOMObjectWrapper<JSTouch>(exec, globalObject, object);
}
Touch* toTouch(JSC::JSValue value)
{
    return value.inherits(&JSTouch::s_info) ? static_cast<JSTouch*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(TOUCH_EVENTS)
