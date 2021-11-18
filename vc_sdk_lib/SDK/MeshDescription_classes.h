#pragma once

// Name: ViceCity, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MeshDescription.MeshDescription
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshDescription : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshDescription.MeshDescription");
		return ptr;
	}



};

// Class MeshDescription.MeshDescriptionBase
// 0x0368 (FullSize[0x0390] - InheritedSize[0x0028])
class UMeshDescriptionBase : public UObject
{
public:
	unsigned char                                      UnknownData_CK9L[0x368];                                   // 0x0028(0x0368) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshDescription.MeshDescriptionBase");
		return ptr;
	}



	void SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& position);
	void SetPolygonVertexInstance(const struct FPolygonID& PolygonID, int PerimeterIndex, const struct FVertexInstanceID& VertexInstanceID);
	void SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID);
	void ReversePolygonFacing(const struct FPolygonID& PolygonID);
	void ReserveNewVertices(int NumberOfNewVertices);
	void ReserveNewVertexInstances(int NumberOfNewVertexInstances);
	void ReserveNewTriangles(int NumberOfNewTriangles);
	void ReserveNewPolygons(int NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int NumberOfNewPolygonGroups);
	void ReserveNewEdges(int NumberOfNewEdges);
	bool IsVertexValid(const struct FVertexID& VertexID);
	bool IsVertexOrphaned(const struct FVertexID& VertexID);
	bool IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID);
	bool IsTriangleValid(const struct FTriangleID& TriangleID);
	bool IsTrianglePartOfNgon(const struct FTriangleID& TriangleID);
	bool IsPolygonValid(const struct FPolygonID& PolygonID);
	bool IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID);
	bool IsEmpty();
	bool IsEdgeValid(const struct FEdgeID& EdgeID);
	bool IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID);
	bool IsEdgeInternal(const struct FEdgeID& EdgeID);
	void GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	struct FVector GetVertexPosition(const struct FVertexID& VertexID);
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID);
	struct FEdgeID GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1);
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID);
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID);
	void GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
	void GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs);
	void GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	struct FVertexInstanceID GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int Index);
	struct FPolygonGroupID GetTrianglePolygonGroup(const struct FTriangleID& TriangleID);
	struct FPolygonID GetTrianglePolygon(const struct FTriangleID& TriangleID);
	void GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs);
	void GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs);
	void GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	void GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs);
	struct FPolygonGroupID GetPolygonPolygonGroup(const struct FPolygonID& PolygonID);
	void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs);
	void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs);
	int GetNumVertexVertexInstances(const struct FVertexID& VertexID);
	int GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID);
	int GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID);
	int GetNumVertexConnectedTriangles(const struct FVertexID& VertexID);
	int GetNumVertexConnectedPolygons(const struct FVertexID& VertexID);
	int GetNumVertexConnectedEdges(const struct FVertexID& VertexID);
	int GetNumPolygonVertices(const struct FPolygonID& PolygonID);
	int GetNumPolygonTriangles(const struct FPolygonID& PolygonID);
	int GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID);
	int GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID);
	int GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID);
	int GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID);
	void GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs);
	struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int VertexNumber);
	void GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices);
	void DeleteVertex(const struct FVertexID& VertexID);
	void DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
	void DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);
	void DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices);
	void CreateVertexWithID(const struct FVertexID& VertexID);
	void CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID);
	struct FVertexInstanceID CreateVertexInstance(const struct FVertexID& VertexID);
	struct FVertexID CreateVertex();
	void CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FTriangleID CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID);
	struct FPolygonGroupID CreatePolygonGroup();
	struct FPolygonID CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	struct FEdgeID CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	void ComputePolygonTriangulation(const struct FPolygonID& PolygonID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
