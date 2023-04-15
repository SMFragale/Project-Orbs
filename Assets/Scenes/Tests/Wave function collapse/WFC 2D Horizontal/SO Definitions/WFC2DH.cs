public class WFC2DH : WFC2D
{
    public override void Generate()
    {
        for(int i = 0; i < spawnGrid.width; i++) {
            for(int j = 0; j < spawnGrid.height; j++) {
                spawnInfoGrid[i, j] = null;
            }
        }

    }
}
