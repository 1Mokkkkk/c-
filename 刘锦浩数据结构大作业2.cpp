//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define ERROR -1
//#define TRUE 1
//#define FALSE 0
//typedef struct {
//	int* data;
//	int length;
//	int listsize;
//}Sqlist;
////��ʼ����
//void InitList(Sqlist** L) {
//	*L = (Sqlist*)malloc(10*sizeof(Sqlist));
//	(*L)->data = (int*)malloc(20 * sizeof(int));
//	(*L)->length = 0;
//	(*L)->listsize = 10;
//}
////���ٱ�
//void DestroyList(Sqlist** L) {
//	free((*L)->data);
//	(*L)->data = NULL;
//	(*L)->length = 0;
//	(*L)->listsize = 0;
//}
////�����
//void ClearList(Sqlist* L) {
//	L->data = (int*)malloc(10 * sizeof(int));
//	L->length = 0;
//	L->listsize = 0;
//}
////�ж��ձ�
//int ListEmpty(Sqlist* L) {
//	if (L->data = NULL) {
//		return FALSE;
//	}
//	else {
//		if (L->length == 0) {
//			printf("�ñ�Ϊ�ձ�\n");
//		}
//		else printf("�ñ�Ϊ��\n");
//		return TRUE;
//	}
//}
////���
//int ListLength(Sqlist* L) {
//	if (L->data = NULL) {
//		return FALSE;
//	}
//	else {
//		return L->length;
//	}
//}
////���Ԫ��
//int GetElem(Sqlist* L, int  i, int* e) {
//	if (L->data != NULL && i >= 1 && i <= L->length) {
//		*e = L->data[i - 1];
//		return TRUE;
//	}
//	else return FALSE;
//}
////����Ԫ��λ��
//int LocateElem(Sqlist* L, int e) {
//	if (L->data != NULL) {
//		for (int i = 0; i < L->length; i++) {
//			if (L->data[i] == e) {
//				return i+1;
//			}
//		}
//		return FALSE;
//	}
//	else return ERROR;
//}
////���Ԫ��
//int ListInsert(Sqlist* L, int  i, int e) {
//	if (L->data != NULL && i >= 1 && i <= L->length + 1) {
//		for (int k = L->length; k >= i; k--) {
//			L->data[k ] = L->data[k-1];
//		}
//		L->data[i - 1] = e;
//		L->length++;
//		return TRUE;
//	}
//	else return FALSE;
//}
////������
//int ListTrabverse(Sqlist* L) {
//	if (L->data != NULL) {
//		for (int i = 0; i < L->length; i++) {
//			printf("%d ", L->data[i]);
//		}
//		return TRUE;
//	}
//	else return FALSE;
//}
////ɾ��Ԫ��
//int ListDelete(Sqlist* L, int i, int* e) {
//	if (L->data != NULL) {
//
//		for (int k = i-1 ; k <=L->length; k++) {
//			L->data[k] = L->data[k + 1];
//		}
//		L->length--;
//		return TRUE;
//	}
//	else return FALSE;
//}
////��ǰ��
//int PriorElem(Sqlist* L, int cur, int* pre_e) {
//	if (L->data != NULL) {
//		if ((LocateElem(L, cur) != FALSE || LocateElem(L, cur) != ERROR )&& LocateElem(L, cur)>1) {
//			*pre_e = L->data[LocateElem(L, cur) - 2];
//			return TRUE;
//		}
//		else return FALSE;
//	}
//	else return FALSE;
//}
////����
//int NextElem(Sqlist* L, int cur, int* next_e) {
//	if (L->data != NULL) {
//		if ((LocateElem(L, cur) != FALSE || LocateElem(L, cur) != ERROR) && LocateElem(L, cur) < L->length) {
//			*next_e = L->data[LocateElem(L, cur)];
//			return TRUE;
//		}
//		else return FALSE;
//	}
//	else return FALSE;
//}
////д���ļ�
//int Write(Sqlist*L) {
//	FILE* f = fopen("data.txt", "w");
//	if (f == NULL) {
//		printf("ERROR\n");
//		return FALSE;
//	}
//	else {
//		for (int i = 0; i < L->length; i++) {
//			fprintf(f, "%d ", L->data[i]);
//		}
//		fclose(f);
//		return TRUE;
//	}
//}
////��ȡ�ļ�
//int Read(Sqlist** L) {
//	FILE* f = fopen("data.txt", "r");
//	if (f == NULL) {
//		printf("�ļ���ʧ��\n");
//		return FALSE;
//	}
//	else {
//		int e;
//		while (fscanf(f, "%d", &e) != EOF) {
//			ListInsert(*L, (*L)->length, e);
//			return TRUE;
//		}
//		return FALSE;
//	}
//}
////ɾ����ƬԪ��
//int list_del(Sqlist**L,int i,int e)
//{
//	if ((*L)->data != NULL && (*L)->length != 0) {
//		if(i>=1 && e<= (*L)->length && i<=e)
//			for (int k = e ; k <= (*L)->length; k++) {
//				(*L)->data[k - (e - i + 1)] = (*L)->data[k];
//			}
//		(*L)->length -= (e - i+1);
//		return TRUE;
//	}
//	else return FALSE;
//}
//int list_splice(Sqlist**L,int list[][20],int length[],int chosen_list) {
//	int k = 0;
//	if ((*L)->data != NULL && list[chosen_list] != NULL && (*L)->length != 0) {
//		for (int i = (*L)->length; i < length[chosen_list]+ (*L)->length; i++) {
//			(*L)->data[i] = list[chosen_list][k];
//			k++;
//		}
//		(*L)->length +=length[chosen_list];
//		return TRUE;
//	}
//	else return FALSE;
//}
//void list_add_del(Sqlist** L, int i, int j, int k)
//{
//	if (k == 1) {
//		int name, state;
//		while (1) {
//			printf("����Ҫ���ӵ�Ԫ�غ�����λ��");
//			scanf("%d %d", &name, &state);
//			ListInsert((*L), name, state);
//			printf("��ӳɹ�\n");
//			break;
//		}
//
//	}
//	else if (k == 2) {
//		int name, state;
//		printf("����Ҫɾ���ĵ�_λ����_λ��Ԫ��\n");
//		scanf("%d %d", &name, &state);
//		list_del(L, name, state);
//		printf("ɾ���ɹ�\n");
//	}
//	else printf("�ñ�����\n");
//}
//int main()
//{
//	int list[100][20];
//	int length[100];
//	Sqlist* L;
//	InitList(&L);
//	int choose1 = -1;
//	while (choose1 != 0) {
//		printf("������Ҫ���в������б�1-99,����0�˳�");
//		scanf("%d", &choose1);
//		int m = 1;
//		while (m) {
//			printf("Menu for Linear Table On Sequence Structure");
//			printf("\n----------------------------------------------\n");
//			printf("1.InitList           8.PRiorElem\n");
//			printf("2.DestroyList        9.NextElem\n");
//			printf("3.ClearList          10.ListInsert\n");
//			printf("4.ListEmpty          11.ListDelete\n");
//			printf("5.ListLength         12.ListTrabverse\n");
//			printf("6.GetElem            13.Write\n");
//			printf("7.LocateElem         14.Read\n");
//			printf("15.list_del          16.list_splice\n");
//			printf("0.Exit\n");
//			printf("----------------------------------------------\n");
//			printf("��ѡ����Ĳ���[0~14]\n");
//			int index;
//			scanf("%d", &index);
//			if (index == 0) {
//				m = 0;
//				length[choose1] = L->length;
//				for (int i = 0; i < L->length; i++) {
//					list[choose1][i] = L->data[i];
//				}
//			}
//			else if (index == 10) {//���Ԫ��
//				if (L->data != NULL) {
//					int i, e;
//					printf("���������룬��_��λ��֮ǰ����Ԫ��_\n");
//					scanf("%d %d", &i, &e);
//					if (ListInsert(L, i, e)) {
//						printf("����ɹ�");
//					}
//					else printf("����ʧ��");
//				}
//				else printf("�ñ�����\n");
//			}
//			else if (index == 1) {
//				InitList(&L);
//				printf("��ʼ����ɹ�\n");
//			}
//			else if (index == 2) {
//				DestroyList(&L);
//				printf("���ٱ�ɹ�\n");
//			}
//			else if (index == 12) {
//				if (ListTrabverse(L)) {
//				}
//				else printf("�ñ�����\n");
//			}
//			//����Ԫ��
//			else if (index == 6) {
//				int i,e;
//				printf("������Ҫ��õĵڼ�λԪ��\n");
//				scanf("%d", &i);
//				if (GetElem(L, i, &e)) {
//					printf("��%d��Ԫ��Ϊ%d\n", i, e);
//				}
//				else printf("��������\n");
//			}
//			else if (index == 7) {
//				printf("������Ҫ���λ�õ�Ԫ��\n");
//				int e;
//				scanf("%d", &e);
//				if (LocateElem(L, e))printf("Ԫ���ڵ�%dλ\n", e);
//				else printf("��������\n");
//			}
//			else if (index == 4) {
//				if (ListEmpty(L)) {
//				}
//				else printf("�ñ�Ϊ��\n");
//			}
//			else if (index == 11) {
//				int i, e;
//				printf("����Ҫɾ���ڼ�λԪ��");
//				scanf("%d", &i);
//				if (ListDelete(L, i, &e)) {
//					printf("ɾ���ɹ�");
//				}
//				else printf("��������");
//			}
//			//��ǰ��
//			else if (index == 8) {
//				int cur,pre_e;
//				scanf("%d", &cur);
//				if (PriorElem(L, cur, &pre_e)) {
//					printf("%d��ǰ����%d\n", cur, pre_e);
//				}
//				else printf("��������\n");
//			}
//			//����
//			else if (index == 9) {
//				int cur, next_e;
//				scanf("%d", &cur);
//				if (NextElem(L, cur, &next_e)) {
//					printf("%d�ĺ����%d\n", cur, next_e);
//				}
//				else printf("��������\n");
//			}
//			else if (index == 13) {
//				if (Write(L)) {
//					printf("д��ɹ�\n");
//				}
//				else printf("д��ʧ��\n");
//			}
//			else if (index == 14) {
//				if (Read(&L)) {
//					printf("��ȡ�ɹ�\n");
//				}
//				else printf("��ȡʧ��\n");
//			}
//			else if (index == 5) {
//				if (ListLength(L) ){
//					printf("��Ϊ%d\n", ListLength(L));
//				}
//				else printf("ERROR\n");
//			}
//			else if (index == 15) {
//				int i, e;
//				if (L->data != NULL) {
//					printf("����Ҫɾ���ĵ�_λ����_λ��Ԫ��\n");
//					scanf("%d %d", &i, &e);
//					list_del(&L, i, e);
//					printf("ɾ���ɹ�\n");
//				}
//				else printf("�ñ�����");
//			}
//			else if (index == 16) {
//				if (L->data != NULL) {
//					int chosen_list;
//					printf("������Ҫ��ӵ��б�\n");
//					scanf("%d", &chosen_list);
//					if (list_splice(&L, list, length, chosen_list)) {
//						printf("��ӳɹ�\n");
//					}
//					else printf("ERROR");
//
//				}
//			}
//			else if (index == 17) {
//				if (L->data != NULL) {
//					int i, j,k;
//					printf("����ָ����Χ\n");
//					scanf("%d %d", &i, &j);
//					printf("����-1������-2");
//					scanf("%d", &k);
//					list_add_del(&L, i, j, k);
//				}
//			}
//			//else if()
//		}
//
//	}
//}