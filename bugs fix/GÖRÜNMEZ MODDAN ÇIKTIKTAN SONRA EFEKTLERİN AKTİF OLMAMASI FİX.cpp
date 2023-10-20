Client Source/source/UserInterface/InstanceBaseEffect.cpp

gir ve arat;

			if (isVisible)
			{
				m_GraphicThingInstance.ClearAttachingEffect();
				__EffectContainer_Destroy();
				DetachTextTail();
			}
			else
			{
				m_GraphicThingInstance.BlendAlphaValue(1.0f, 1.0f);
				AttachTextTail();
				RefreshTextTail();
			}
			return;
			break;

deðiþtir ve derle;

			if (isVisible)
			{
				m_GraphicThingInstance.HideAllAttachingEffect();
				__EffectContainer_Destroy();
				DetachTextTail();
			}
			else
			{
				m_GraphicThingInstance.BlendAlphaValue(1.0f, 1.0f);
				m_GraphicThingInstance.ShowAllAttachingEffect();
				AttachTextTail();
				RefreshTextTail();
			}
			return;
			break;